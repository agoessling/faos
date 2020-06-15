load("@rules_cc//cc:defs.bzl", "cc_toolchain")
load("//toolchain:config.bzl", "cc_arm_none_eabi_config")

package(default_visibility = ["//visibility:public"])

filegroup(
    name = "all_files",
    srcs = [
        ":ar_files",
        ":compiler_files",
        ":linker_files",
        "@arm_none_eabi//:compiler_pieces",
    ],
)

filegroup(
    name = "compiler_files",
    srcs = [
        "arm-none-eabi-gcc",
        "@arm_none_eabi//:compiler_pieces",
        "@arm_none_eabi//:gcc",
    ],
)

filegroup(
    name = "linker_files",
    srcs = [
        "arm-none-eabi-gcc",
        "arm-none-eabi-ld",
        "@arm_none_eabi//:ar",
        "@arm_none_eabi//:compiler_pieces",
        "@arm_none_eabi//:gcc",
        "@arm_none_eabi//:ld",
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
    gcc_repo = "arm-none-eabi",
    gcc_version = "9.2.1",
    host_system_name = "x86-linux",
    toolchain_identifier = "arm_none_eabi",
)
