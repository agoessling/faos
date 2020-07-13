load("@bazel_tools//tools/build_defs/cc:action_names.bzl", "ACTION_NAMES")
load("@bazel_tools//tools/cpp:cc_toolchain_config_lib.bzl", "feature", "flag_group", "flag_set", "tool_path")

def _impl(ctx):
    tool_paths = [
        tool_path(name = "gcc", path = "arm-none-eabi/arm-none-eabi-gcc"),
        tool_path(name = "ld", path = "arm-none-eabi/arm-none-eabi-ld"),
        tool_path(name = "ar", path = "arm-none-eabi/arm-none-eabi-ar"),
        tool_path(name = "as", path = "arm-none-eabi/arm-none-eabi-as"),
        tool_path(name = "cpp", path = "arm-none-eabi/arm-none-eabi-cpp"),
        tool_path(name = "gcov", path = "arm-none-eabi/arm-none-eabi-gcov"),
        tool_path(name = "nm", path = "arm-none-eabi/arm-none-eabi-nm"),
        tool_path(name = "objdump", path = "arm-none-eabi/arm-none-eabi-objdump"),
        tool_path(name = "strip", path = "arm-none-eabi/arm-none-eabi-strip"),
    ]

    all_compile_actions = [
        ACTION_NAMES.c_compile,
        ACTION_NAMES.cpp_compile,
        ACTION_NAMES.linkstamp_compile,
        ACTION_NAMES.assemble,
        ACTION_NAMES.preprocess_assemble,
        ACTION_NAMES.cpp_header_parsing,
        ACTION_NAMES.cpp_module_compile,
        ACTION_NAMES.cpp_module_codegen,
        ACTION_NAMES.clif_match,
        ACTION_NAMES.lto_backend,
    ]

    all_link_actions = [
        ACTION_NAMES.cpp_link_executable,
        ACTION_NAMES.cpp_link_dynamic_library,
        ACTION_NAMES.cpp_link_nodeps_dynamic_library,
    ]

    compiler_flags = [
        "-mcpu=cortex-a8",
        "-mfloat-abi=hard",
        "-mfpu=neon-vfpv3",
        "-O2",
        "-Werror",
        "-Wall",
        "-Wextra",
        "-Wsign-conversion",
        "-Wfloat-conversion",
        "-Wmissing-prototypes",
        "-Wstrict-prototypes",
        "-g",
    ]

    linker_flags = [
        "-nostartfiles",
        "-Wl,--gc-sections",
    ]

    include_flags = [
        "-isystem",
        "external/arm_none_eabi/lib/gcc/arm-none-eabi/9.2.1/include",
        "-isystem",
        "external/arm_none_eabi/lib/gcc/arm-none-eabi/9.2.1/include-fixed",
        "-isystem",
        "external/arm_none_eabi/arm-none-eabi/include",
    ]

    toolchain_compiler_flags = feature(
        name = "compiler_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = all_compile_actions,
                flag_groups = [
                    flag_group(flags = include_flags + compiler_flags),
                ],
            ),
        ],
    )

    toolchain_linker_flags = feature(
        name = "linker_flags",
        enabled = True,
        flag_sets = [
            flag_set(
                actions = all_link_actions,
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
        target_cpu = "arm-none-eabi",
        target_libc = "gcc",
        compiler = ctx.attr.gcc_repo,
        abi_version = "eabi",
        abi_libc_version = ctx.attr.gcc_version,
        tool_paths = tool_paths,
        features = [
            toolchain_compiler_flags,
            toolchain_linker_flags,
        ],
    )

cc_arm_none_eabi_config = rule(
    implementation = _impl,
    attrs = {
        "toolchain_identifier": attr.string(default = ""),
        "host_system_name": attr.string(default = ""),
        "gcc_repo": attr.string(default = ""),
        "gcc_version": attr.string(default = ""),
    },
    provides = [CcToolchainConfigInfo],
)
