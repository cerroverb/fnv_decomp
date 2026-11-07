// include/havok/hkpVehicleSuspensionSuspensionWheelParameters.h - generated from the Havok 7.1 reflection data in the PC exe (gen_havok_headers.py, 2026-10-17).
// Reflected members at their exact offsets; unreflected bytes are padding. Size 0x30.
#ifndef FNV_HAVOK_HKPVEHICLESUSPENSIONSUSPENSIONWHEELPARAMETERS_H
#define FNV_HAVOK_HKPVEHICLESUSPENSIONSUSPENSIONWHEELPARAMETERS_H

#include "hkBase.h"
#pragma pack(push, 1)
class hkpVehicleSuspensionSuspensionWheelParameters
{
  public:
    hkVector4 m_vHardpointChassisSpace;  // +0x0
    hkVector4 m_vDirectionChassisSpace;  // +0x10
    hkReal m_fRestLength;                // +0x20
    char pad24[0xC];
};
#pragma pack(pop)
typedef char fnv_hk_size_hkpVehicleSuspensionSuspensionWheelParameters
    [(sizeof(hkpVehicleSuspensionSuspensionWheelParameters) == 0x30) ? 1 : -1];
#endif
