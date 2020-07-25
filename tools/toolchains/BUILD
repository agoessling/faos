load("@rules_cc//cc:defs.bzl", "cc_toolchain_suite")

platform(
    name = "arm_none_generic",
    constraint_values = [
        "@platforms//cpu:arm",
        "@platforms//os:none",
    ],
)

cc_toolchain(
    name = "cc_toolchain_arm_none_eabi",
    all_files = "//tools/toolchains/arm-none-eabi:all_files",
    ar_files = "//tools/toolchains/arm-none-eabi:ar_files",
    as_files = "//tools/toolchains/arm-none-eabi:as_files",
    compiler_files = "//tools/toolchains/arm-none-eabi:compiler_files",
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
        "@platforms//os:linux",
    ],
    target_compatible_with = [
        "@platforms//os:none",
        "@platforms//cpu:arm",
    ],
    toolchain = ":cc_toolchain_arm_none_eabi",
    toolchain_type = "@bazel_tools//tools/cpp:toolchain_type",
)