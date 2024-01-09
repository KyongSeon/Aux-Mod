#include "script_component.hpp"
#include "CfgVehicles.hpp"


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
            QGVAR(sounds)
        };
        units[] =
        {
            QCLASS(Hornet_Unarmed),
            QCLASS(Hornet_MG),
            QCLASS(Hornet_AT),
            QCLASS(Hornet_Armed)
        };
        weapons[] = {};
        VERSION_CONFIG;
    };
};