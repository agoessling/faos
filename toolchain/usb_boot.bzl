def _usb_boot_impl(ctx):
    image_basename = ctx.file.image.basename
    image_root = ctx.file.image.short_path[:-len(image_basename) - 1]

    shell_cmd = " ".join([
        "sudo dnsmasq",
        "--no-daemon",  # Run in foreground.
        "--port=0", # Disable all DNS functions.
        "--interface=usb-boot",  # Only interact with RNDIS USB.
        "--enable-tftp",
        "--tftp-root=$PWD/{}".format(image_root),  # Root directory of TFTP.
        # Tag subarctic 2.x boot ROM devices with "bbrom".
        "--dhcp-vendorclass=\"set:bbrom,AM335x ROM\"",
        "--dhcp-ignore=tag:!bbrom",  # Ignore everything else.
        # Secondary Loader File.  Relative to TFTP root.
        "--dhcp-boot=tag:bbrom,{}".format(image_basename),
        "--bootp-dynamic=tag:bbrom",  # Allow DHCP for BOOTP.
        # Allocate IP range available to BOOTP.  Assumes this is free to use.
        "--dhcp-range=192.168.254.250,192.168.254.254,12h",
    ])

    script = ctx.actions.declare_file("{}.sh".format(ctx.label.name))
    ctx.actions.write(script, shell_cmd, is_executable = True)

    runfiles = ctx.runfiles(files = [ctx.file.image])
    return [DefaultInfo(executable = script, runfiles = runfiles)]

usb_boot = rule(
    implementation = _usb_boot_impl,
    doc = "Used to flash an image (SPL) onto the BBB via BOOTP over USB.",
    attrs = {
        "image": attr.label(
            doc = "Binary image (SPL) to flash.",
            mandatory = True,
            allow_single_file = True,
        ),
    },
    executable = True,
)
