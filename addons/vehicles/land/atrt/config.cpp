#include "script_component.hpp"
#include "CfgVehicles.hpp"
#include "CfgWeapons.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            QGVAR(weapons),
            QGVAR(sounds),
            "3AS_ATRT"
        };
        units[] =
        {
            QCLASS(ATRT)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};