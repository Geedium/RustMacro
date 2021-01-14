#include <wdm.h>
#include <ntddmou.h>
#pragma warning (disable : 4100)

DRIVER_INITIALIZE DriverEntry;
DRIVER_UNLOAD DriverUnload;

_Use_decl_annotations_
NTSTATUS DriverEntry(
	_DRIVER_OBJECT* DriverObject,
	PUNICODE_STRING RegistryPath)
{
	UNREFERENCED_PARAMETER(RegistryPath);

	DriverObject->DriverUnload = DriverUnload;
	DriverObject->MajorFunction[MOUSE_ATTRIBUTES] = 

	DbgPrint("Kernel mode driver initialized!");



	return STATUS_SUCCESS;
}

VOID DriverUnload(
	PDRIVER_OBJECT DriverObject
)
{
	DbgPrint("Unloaded!");

}