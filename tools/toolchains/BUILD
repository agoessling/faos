load("@rules_cc//cc:defs.bzl", "cc_toolchain_suite")

platform(
    name = "arm_none_generic",
    constraint_values = [
        "@platforms//cpu:arm",
        "@platforms//os:none",
    ],
)

platform(
    name = "x86_64_linux_generic",
    constraint_values = [
        "@platforms//cpu:x86_64",
        "@platforms//os:linux",
    ],
)

cc_toolchain(
    name = "cc_toolchain_arm_none_eabi",
    all_files = "//tools/toolchains/arm-none-eabi:all_files",
    ar_files = "//tools/toolchains/arm-none-eabi:ar_files",
    as_files = "//tools/toolchains/arm-none-eabi:as_files",
    compiler_files = "//tools/toolchains/arm-none-eabi:compiler_files",
    coverage_files = "//tools/toolchains/arm-none-eabi:coverage_files",
    dwp_files = ":empty",
    linker_files = "//tools/toolchains/arm-none-eabi:linker_files",
    objcopy_files = "//tools/toolchains/arm-none-eabi:objcopy_files",
    strip_files = "//tools/toolchains/arm-none-eabi:strip_files",
    supports_param_files = 0,
    toolchain_config = "//tools/toolchains/arm-none-eabi:config",
    toolchain_identifier = "arm_none_eabi",
)

toolchain(
    name = "arm_none_eabi",
    exec_compatible_with = [
        "@platforms//cpu:x86_64",
        "@platforms//os:linux",
    ],
    target_compatible_with = [
        "@platforms//cpu:arm",
        "@platforms//os:none",
    ],
    toolchain = ":cc_toolchain_arm_none_eabi",
    toolchain_type = "@bazel_tools//tools/cpp:toolchain_type",
)

cc_toolchain(
    name = "cc_toolchain_x86_64_linux_gnu",
    all_files = "//tools/toolchains/x86_64-linux-gnu:all_files",
    ar_files = "//tools/toolchains/x86_64-linux-gnu:ar_files",
    as_files = "//tools/toolchains/x86_64-linux-gnu:as_files",
    compiler_files = "//tools/toolchains/x86_64-linux-gnu:compiler_files",
    coverage_files = "//tools/toolchains/x86_64-linux-gnu:coverage_files",
    dwp_files = ":empty",
    linker_files = "//tools/toolchains/x86_64-linux-gnu:linker_files",
    objcopy_files = "//tools/toolchains/x86_64-linux-gnu:objcopy_files",
    strip_files = "//tools/toolchains/x86_64-linux-gnu:strip_files",
    supports_param_files = 0,
    toolchain_config = "//tools/toolchains/x86_64-linux-gnu:config",
    toolchain_identifier = "x86_64_linux_gnu",
)

toolchain(
    name = "x86_64_linux_gnu",
    exec_compatible_with = [
        "@platforms//cpu:x86_64",
        "@platforms//os:linux",
    ],
    target_compatible_with = [
        "@platforms//cpu:x86_64",
        "@platforms//os:linux",
    ],
    toolchain = ":cc_toolchain_x86_64_linux_gnu",
    toolchain_type = "@bazel_tools//tools/cpp:toolchain_type",
)
