cc_library(
    name = "registers",
    hdrs = ["reg_def.h"],
    visibility = ["//visibility:public"]
)

genrule(
    name = "reg_def",
    srcs = [
        "//am3358_db:am3358_device",
        "//am3358_db:am335x_modules",
    ],
    outs = ["reg_def.h"],
    cmd = "$(execpath //src:generate_reg_def) $(rootpath //am3358_db:am3358_device) $@",
    tools = ["//src:generate_reg_def"],
    visibility = ["//visibility:private"]
)
