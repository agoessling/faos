load("@rules_cc//cc:defs.bzl", "cc_toolchain")
load("//tools/toolchains:toolchains.bzl", "cc_arm_none_eabi_config")

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "all_files",
    srcs = [
        ":ar_files",
        ":as_files",
        ":compiler_files",
        ":coverage_files",
        ":linker_files",
        ":objcopy_files",
        ":strip_files",
        "@arm_none_eabi//:compiler_pieces",
    ],
)

filegroup(
    name = "ar_files",
    srcs = [
        "arm-none-eabi-ar",
        "@arm_none_eabi//:ar",
    ],
)

filegroup(
    name = "as_files",
    srcs = [
        "arm-none-eabi-as",
        "@arm_none_eabi//:as",
    ],
)

filegroup(
    name = "compiler_files",
    srcs = [
        "arm-none-eabi-cpp",
        "arm-none-eabi-gcc",
        "@arm_none_eabi//:cpp",
        "@arm_none_eabi//:compiler_pieces",
        "@arm_none_eabi//:gcc",
    ],
)

filegroup(
    name = "coverage_files",
    srcs = [
        "arm-none-eabi-gcov",
        "@arm_none_eabi//:gcov",
    ],
)

filegroup(
    name = "linker_files",
    srcs = [
        "arm-none-eabi-ar",
        "arm-none-eabi-gcc",
        "arm-none-eabi-ld",
        "@arm_none_eabi//:ar",
        "@arm_none_eabi//:compiler_pieces",
        "@arm_none_eabi//:gcc",
        "@arm_none_eabi//:ld",
    ],
)

filegroup(
    name = "objcopy_files",
    srcs = [
        "arm-none-eabi-objcopy",
        "@arm_none_eabi//:objcopy",
    ],
)

filegroup(
    name = "strip_files",
    srcs = [
        "arm-none-eabi-strip",
        "@arm_none_eabi//:strip",
    ],
)

cc_arm_none_eabi_config(
    name = "config",
    toolchain_identifier = "arm-none-eabi",
    host_system_name = "x86_64-linux",
    target_libc = "newlib-3.1.0",
    compiler = "gcc-9.2.1",
)
