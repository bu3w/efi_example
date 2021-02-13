UEFI Application in VS2019

NOT full validation yet.

This' a UEFI application example, which built in MSVC2019.

Official UEFI spec:
https://uefi.org/specifications

You can run this example in VirtualBox:
https://www.virtualbox.org/wiki/Downloads
Or QEMU+OVMF:
https://www.qemu.org/download/
https://github.com/tianocore/tianocore.github.io/wiki/OVMF
'qemu-system-x86_64.exe -bios OVMF.fd -L ovmf/ -hda fat:rw:out'

The header files in inc/ are copied formm gnu-efi project.
https://sourceforge.net/projects/gnu-efi

Thanks to the following project
https://github.com/ThatOSDev/C_UEFI
https://github.com/ohnx/nyan-load
