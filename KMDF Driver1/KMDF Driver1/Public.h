/*++

Module Name:

    public.h

Abstract:

    This module contains the common declarations shared by driver
    and user applications.

Environment:

    user and kernel

--*/

//
// Define an Interface Guid so that apps can find the device and talk to it.
//

DEFINE_GUID (GUID_DEVINTERFACE_KMDFDriver1,
    0x849f467f,0x887c,0x4395,0x95,0x45,0x39,0x43,0xb2,0x00,0x72,0x27);
// {849f467f-887c-4395-9545-3943b2007227}
