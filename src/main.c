#include <efi.h>

EFI_STATUS efi_main(EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable)
{
	SystemTable->ConOut->Reset(SystemTable->ConOut, 1);
	SystemTable->ConOut->OutputString(SystemTable->ConOut, L"Testing ...\r\n");
	while (TRUE);
	return EFI_SUCCESS;
}
