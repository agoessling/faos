load("@bazel_tools//tools/build_defs/cc:action_names.bzl", "ACTION_NAMES")
load("@bazel_tools//tools/build_defs/repo:http.bzl", "http_archive")
load("@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl", "feature", "flag_group", "flag_set", "tool_path")

def toolchain_deps():
    http_archive(
        name = "arm_none_eabi",
        build_file = "//tools/toolchains/arm-none-eabi:compiler.BUILD",
        sha256 = "ac952d89ae0fc3543e81099e7d34917efc621f5def112eee843fd1ce755eca8c",
        strip_prefix = "gcc-arm-9.2-2019.12-x86_64-arm-none-eabi",
        url = "https://developer.arm.com/-/media/Files/downloads/gnu-a/9.2-2019.12/binrel/gcc-arm-9.2-2019.12-x86_64-arm-none-eabi.tar.xz?revision=64186c5d-b471-4c97-a8f5-b1b300d6594a&la=en&hash=5E9204DA5AF0B055B5B0F50C53E185FAA10FF625",
    )
    http_archive(
        name = "x86_64_linux_gnu",
        build_file = "//tools/toolchains/x86_64-linux-gnu:compiler.BUILD",
        sha256 = "26a0c20c3f7469ce9ee6ffa7d6ac89170b5cf8cd6d45eccc410221a452f784b8",
        strip_prefix = "x86-64-core-i7--glibc--bleeding-edge-2020.02-2",
        url = "https://toolchains.bootlin.com/downloads/releases/toolchains/x86-64-core-i7/tarballs/x86-64-core-i7--glibc--bleeding-edge-2020.02-2.tar.bz2",
    )

_all_compile_actions = [
    ACTION_NAMES.assemble,
    ACTION_NAMES.preprocess_assemble,
    ACTION_NAMES.linkstamp_compile,
    ACTION_NAMES.c_compile,
    ACTION_NAMES.cpp_compile,
    ACTION_NAMES.cpp_header_parsing,
    ACTION_NAMES.cpp_module_compile,
    ACTION_NAMES.cpp_module_codegen,
    ACTION_NAMES.lto_backend,
    ACTION_NAMES.clif_match,
]

_all_link_actions = [
    ACTION_NAMES.cpp_link_executable,
    ACTION_NAMES.cpp_link_dynamic_library,
    ACTION_NAMES.cpp_link_nodeps_dynamic_library,
]

_common_compiler_flags = [
    "-Werror",
    "-Wall",
    "-Wextra",
    "-Wsign-conversion",
    "-Wfloat-conversion",
    "-Wmissing-prototypes",
    "-Wstrict-prototypes",
    "-fdiagnostics-color=always",
    "-O2",
    "-g",
]

_common_linker_flags = [
    "-Wl,--gc-sections",
]

_feature_deterministic_compile = feature(
    enabled = True,
    name = "deterministic_compile",
    flag_sets = [
        flag_set(
            actions = _all_compile_actions,
            flag_groups = [
                flag_group(
                    flags = [
                        "-Wno-builtin-macro-redefined",
                        "-D__DATE__=\"redacted\"",
                        "-D__TIMESTAMP__=\"redacted\"",
                        "-D__TIME__=\"redacted\"",
                    ],
                ),
            ],
        ),
    ],
)

def _get_tool_paths(toolchain_name):
    return [
        tool_path(name = "ar", path = "{0}/{0}-ar".format(toolchain_name)),
        tool_path(name = "as", path = "{0}/{0}-as".format(toolchain_name)),
        tool_path(name = "cpp", path = "{0}/{0}-cpp".format(toolchain_name)),
        tool_path(name = "gcc", path = "{0}/{0}-gcc".format(toolchain_name)),
        tool_path(name = "gcov", path = "{0}/{0}-gcov".format(toolchain_name)),
        tool_path(name = "ld", path = "{0}/{0}-ld".format(toolchain_name)),
        tool_path(name = "nm", path = "{0}/{0}-nm".format(toolchain_name)),
        tool_path(name = "objdump", path = "{0}/{0}-objdump".format(toolchain_name)),
        tool_path(name = "strip", path = "{0}/{0}-strip".format(toolchain_name)),
    ]

def _impl_arm_none_eabi(ctx):
    compiler_flags = [
        "-mcpu=cortex-a8",
        "-mfloat-abi=hard",
        "-mfpu=neon-vfpv3",
    ] + _common_compiler_flags

    linker_flags = [
        "-nostartfiles",
    ] + _common_linker_flags

    include_flags = [
        "-isystem",
        "external/arm_none_eabi/lib/gcc/arm-none-eabi/9.2.1/include",
        "-isystem",
        "external/arm_none_eabi/lib/gcc/arm-none-eabi/9.2.1/include-fixed",
        "-isystem",
        "external/arm_none_eabi/arm-none-eabi/include",
    ]

    feature_compiler_flags = feature(
        name = "compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _all_compile_actions,
                flag_groups = [
                    flag_group(flags = include_flags + compiler_flags),
                ],
            ),
        ],
    )

    feature_linker_flags = feature(
        name = "linker_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _all_link_actions,
                flag_groups = [
                    flag_group(flags = compiler_flags + linker_flags),
                ],
            ),
        ],
    )

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = ctx.attr.toolchain_identifier,
        host_system_name = ctx.attr.host_system_name,
        target_system_name = "arm-none-eabi",
        target_cpu = "cortex-a8",
        target_libc = ctx.attr.target_libc,
        compiler = ctx.attr.compiler,
        abi_version = ctx.attr.compiler,
        abi_libc_version = ctx.attr.target_libc,
        tool_paths = _get_tool_paths("arm-none-eabi"),
        features = [
            _feature_deterministic_compile,
            feature_compiler_flags,
            feature_linker_flags,
        ],
    )

cc_arm_none_eabi_config = rule(
    implementation = _impl_arm_none_eabi,
    attrs = {
        "toolchain_identifier": attr.string(default = ""),
        "host_system_name": attr.string(default = ""),
        "target_libc": attr.string(default = ""),
        "compiler": attr.string(default = ""),
    },
    provides = [CcToolchainConfigInfo],
)

def _impl_x86_64_linux_gnu(ctx):
    compiler_flags = [
    ] + _common_compiler_flags

    linker_flags = [
    ] + _common_linker_flags

    include_flags = [
        "-isystem",
        "external/x86_64_linux_gnu/x86_64-buildroot-linux-gnu/sysroot/usr/include",
        "-isystem",
        "external/x86_64_linux_gnu/lib/gcc/x86_64-buildroot-linux-gnu/9.3.0/include",
        "-isystem",
        "external/x86_64_linux_gnu/lib/gcc/x86_64-buildroot-linux-gnu/9.3.0/include-fixed",
    ]

    feature_supports_pic = feature("supports_pic", enabled = True)
    feature_supports_dynamic_linker = feature("supports_dynamic_linker", enabled = True)

    feature_compiler_flags = feature(
        name = "compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _all_compile_actions,
                flag_groups = [
                    flag_group(flags = include_flags + compiler_flags),
                ],
            ),
        ],
    )

    feature_linker_flags = feature(
        name = "linker_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = _all_link_actions,
                flag_groups = [
                    flag_group(flags = linker_flags),
                ],
            ),
        ],
    )

    return cc_common.create_cc_toolchain_config_info(
        ctx = ctx,
        toolchain_identifier = ctx.attr.toolchain_identifier,
        host_system_name = ctx.attr.host_system_name,
        target_system_name = "linux-gnu",
        target_cpu = "x86_64",
        target_libc = ctx.attr.target_libc,
        compiler = ctx.attr.compiler,
        abi_version = ctx.attr.compiler,
        abi_libc_version = ctx.attr.target_libc,
        tool_paths = _get_tool_paths("x86_64-linux-gnu"),
        features = [
            _feature_deterministic_compile,
            feature_supports_pic,
            feature_supports_dynamic_linker,
            feature_compiler_flags,
            feature_linker_flags,
        ],
    )

cc_x86_64_linux_gnu_config = rule(
    implementation = _impl_x86_64_linux_gnu,
    attrs = {
        "toolchain_identifier": attr.string(default = ""),
        "host_system_name": attr.string(default = ""),
        "target_libc": attr.string(default = ""),
        "compiler": attr.string(default = ""),
    },
    provides = [CcToolchainConfigInfo],
)
