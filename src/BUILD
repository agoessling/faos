load("//toolchain:usb_boot.bzl", "usb_boot")

usb_boot(
    name = "usb_deploy",
    image = ":faos.bin",
    visibility = ["//visibility:public"],
)

py_binary(
    name = "generate_reg_def",
    srcs = ["generate_reg_def.py"],
    deps = [
        ":peripherals",
    ],
    visibility = ["//visibility:public"],
)

py_library(
    name = "peripherals",
    srcs = ["peripherals.py"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "faos.elf",
    srcs = ["main.c"],
    deps = [
        ":assert",
        "//src/autogen:registers",
        ":clock",
        ":ddr3",
        ":gpio",
        ":i2c",
        "linker_script.ld",
        ":mmc",
        ":startup",
        ":time",
        ":tps65217",
        ":uart",
    ],
    linkopts = [
        "-T",
        "$(rootpath linker_script.ld)"
    ],
    visibility = ["//visibility:public"],
)

genrule(
    name = "faos_bin",
    srcs = [":faos.elf"],
    outs = ["faos.bin"],
    cmd = "$(execpath @arm_none_eabi//:objcopy) -O binary $< $@",
    tools = ["@arm_none_eabi//:objcopy"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "startup",
    srcs = ["startup.S"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "assert",
    hdrs = ["assert.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "macros",
    hdrs = ["macros.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "clock",
    srcs = ["clock.c"],
    hdrs = ["clock.h"],
    deps = [
        ":assert",
        "//src/autogen:registers",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "time",
    srcs = ["time.c"],
    hdrs = ["time.h"],
    deps = [
        ":assert",
        ":dmtimer",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "dmtimer",
    srcs = ["dmtimer.c"],
    hdrs = ["dmtimer.h"],
    deps = [
        ":assert",
        ":clock",
        "//src/autogen:registers",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "mmc",
    srcs = [
        "mmc.c",
        "mmc_spec.h",
    ],
    hdrs = ["mmc.h"],
    deps = [
        ":assert",
        ":clock",
        ":macros",
        ":time",
        "//src/autogen:registers",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "ddr3",
    srcs = ["ddr3.c"],
    hdrs = ["ddr3.h"],
    deps = [
        ":clock",
        "//src/autogen:registers",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "gpio",
    srcs = ["gpio.c"],
    hdrs = ["gpio.h"],
    deps = [
        ":assert",
        "//src/autogen:registers",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "i2c",
    srcs = ["i2c.c"],
    hdrs = ["i2c.h"],
    deps = [
        ":assert",
        ":clock",
        "//src/autogen:registers",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "tps65217",
    srcs = ["tps65217.c"],
    hdrs = ["tps65217.h"],
    deps = [
        ":assert",
        ":i2c",
    ],
    visibility = ["//visibility:public"],
)

cc_library(
    name = "uart",
    srcs = ["uart.c"],
    hdrs = ["uart.h"],
    deps = [
        ":assert",
        ":clock",
        "//src/autogen:registers",
    ],
    visibility = ["//visibility:public"],
)
