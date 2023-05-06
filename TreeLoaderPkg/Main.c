#include <Uefi.h>
#include <Library/Uefi.lib>

EFI_STATUS EFIAPI UefiMain(
		EFI_HANDLE image_handle,
		EFI_SYSTEM_TABLE *system_table)
{
	Print(L"Hello, Tree World!\n");
	while(1);
	return EFI_SUCCESS;
}
