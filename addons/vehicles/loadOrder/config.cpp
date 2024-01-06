#include "script_component.hpp"


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
            // Air
            QGVAR(arc170),
            QGVAR(galaxy),
            QGVAR(laatc),
            QGVAR(laati),
            QGVAR(ogre),
            QGVAR(rathian),
            QGVAR(transport),
            QGVAR(vespoid),
            QGVAR(ywing),
            // Land
            QGVAR(aat)
        };
        units[] = {};
        weapons[] = {};
    };
};