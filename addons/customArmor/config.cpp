#include "script_component.hpp"
#include "CfgEditorSubcategories.hpp"
#include "CfgWeapons.hpp"
#include "CfgVehicles.hpp"
#include "CfgEventHandlers.hpp"


class CfgPatches
{
    class ADDON
    {
        author = "SweMonkey and DartRuffian";
        name = COMPONENT_NAME;
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QCLASS(core),
            QCLASS(armor)
        };
        units[] =
        {
            QCLASS(Unit_Axel),
            QCLASS(Unit_Burnt),
            QCLASS(Unit_Dexus),
            QCLASS(Unit_Drake),
            QCLASS(Unit_Fil),
            QCLASS(Unit_FilSquad),
            QCLASS(Unit_Joe),
            QCLASS(Unit_Keeli),
            QCLASS(Unit_Keeli_CamoBrown),
            QCLASS(Unit_Keeli_CamoGrey),
            QCLASS(Unit_Ponds),
            QCLASS(Unit_PondsTrooper),
            QCLASS(Unit_Rat),
            QCLASS(Unit_Sin),
            QCLASS(Unit_Stone),
            QCLASS(Unit_Tyrant),
            QCLASS(Unit_Phase2_Insulated_Dexus),
            QCLASS(Unit_Phase2_Insulated_Joe),
            QCLASS(Unit_Phase2_Insulated_Keeli)
        };
        weapons[] =
        {
            QCLASS(Helmet_Phase1_Axel),
            QCLASS(Helmet_Phase1_Burnt),
            QCLASS(Helmet_Phase1_BurntBacta),
            QCLASS(Helmet_Phase1_Catholic),
            QCLASS(Helmet_Phase1_CatholicKyber),
            QCLASS(Helmet_Phase1_Defter),
            QCLASS(Helmet_Phase1_DefterBacta),
            QCLASS(Helmet_Phase1_Dexus),
            QCLASS(Helmet_Phase1_DexusBacta),
            QCLASS(Helmet_Phase1_Drake),
            QCLASS(Helmet_Phase1_DrakeBacta),
            QCLASS(Helmet_Phase1_Grey),
            QCLASS(Helmet_Phase1_Hazard),
            QCLASS(Helmet_Phase1_Jaws),
            QCLASS(Helmet_Phase1_Jester),
            QCLASS(Helmet_Phase1_Joe),
            QCLASS(Helmet_Phase1_JoeCrimson),
            QCLASS(Helmet_Phase1_Keeli),
            QCLASS(Helmet_Phase1_KeeliCrimson),
            QCLASS(Helmet_Phase1_Lou),
            QCLASS(Helmet_Phase1_LouPlasma),
            QCLASS(Helmet_Phase1_Ox),
            QCLASS(Helmet_Phase1_Patriot),
            QCLASS(Helmet_Phase1_Ponds),
            QCLASS(Helmet_Phase1_Rev),
            QCLASS(Helmet_Phase1_Rodger),
            QCLASS(Helmet_Phase1_Sin),
            QCLASS(Helmet_Phase1_Splashdown),
            QCLASS(Helmet_Phase1_Swoop),
            QCLASS(Helmet_Phase1_Woods),
            QCLASS(Helmet_Phase1_Pilot_Bailout),
            QCLASS(Helmet_Phase1_Pilot_Blue),
            QCLASS(Helmet_Phase1_Pilot_BlueBacta),
            QCLASS(Helmet_Phase1_Pilot_Mischief),
            QCLASS(Helmet_Phase1_Tanker_Grey),
            QCLASS(Helmet_Phase2_Axel),
            QCLASS(Helmet_Phase2_Bob),
            QCLASS(Helmet_Phase2_BobKyber),
            QCLASS(Helmet_Phase2_Burnt),
            QCLASS(Helmet_Phase2_BurntBacta),
            QCLASS(Helmet_Phase2_Dexus),
            QCLASS(Helmet_Phase2_DexusBacta),
            QCLASS(Helmet_Phase2_Evo),
            QCLASS(Helmet_Phase2_Fil),
            QCLASS(Helmet_Phase2_FilSquad),
            QCLASS(Helmet_Phase2_Grey),
            QCLASS(Helmet_Phase2_Harry),
            QCLASS(Helmet_Phase2_Hazard),
            QCLASS(Helmet_Phase2_Jackal),
            QCLASS(Helmet_Phase2_Jaws),
            QCLASS(Helmet_Phase2_Jester),
            QCLASS(Helmet_Phase2_Joe),
            QCLASS(Helmet_Phase2_JoeCrimson),
            QCLASS(Helmet_Phase2_Keeli),
            QCLASS(Helmet_Phase2_KeeliCrimson),
            QCLASS(Helmet_Phase2_Keeli_CamoBrown),
            QCLASS(Helmet_Phase2_KeeliCrimson_CamoBrown),
            QCLASS(Helmet_Phase2_Keeli_CamoGrey),
            QCLASS(Helmet_Phase2_KeeliCrimson_CamoGrey),
            QCLASS(Helmet_Phase2_Leon),
            QCLASS(Helmet_Phase2_Lou),
            QCLASS(Helmet_Phase2_LouPlasma),
            QCLASS(Helmet_Phase2_Ox),
            QCLASS(Helmet_Phase2_Patriot),
            QCLASS(Helmet_Phase2_Ponds),
            QCLASS(Helmet_Phase2_PondsTrooper),
            QCLASS(Helmet_Phase2_Rev),
            QCLASS(Helmet_Phase2_Rodger),
            QCLASS(Helmet_Phase2_Sage),
            QCLASS(Helmet_Phase2_Scvrpio),
            QCLASS(Helmet_Phase2_Sogi),
            QCLASS(Helmet_Phase2_Splashdown),
            QCLASS(Helmet_Phase2_Star),
            QCLASS(Helmet_Phase2_Stone),
            QCLASS(Helmet_Phase2_Swoop),
            QCLASS(Helmet_Phase2_Sytha),
            QCLASS(Helmet_Phase2_Tugz),
            QCLASS(Helmet_Phase2_Tyrant),
            QCLASS(Helmet_Phase2_TyrantCrimson),
            QCLASS(Helmet_Phase2_Vortex),
            QCLASS(Helmet_Phase2_Woods),
            QCLASS(Helmet_Phase2_Pilot_Bailout),
            QCLASS(Helmet_Phase2_Pilot_Blue),
            QCLASS(Helmet_Phase2_Pilot_BlueBacta),
            QCLASS(Helmet_Phase2_Pilot_Mischief),
            QCLASS(Helmet_Phase2_Tanker_Catholic),
            QCLASS(Helmet_Phase2_Tanker_CatholicKyber),
            QCLASS(Helmet_Phase2_Tanker_Grey),
            QCLASS(Helmet_Phase2_Insulated_Dexus),
            QCLASS(Helmet_Phase2_Insulated_Joe),
            QCLASS(Helmet_Phase2_Insulated_Keeli),
            QCLASS(Helmet_ARC_Drake),
            QCLASS(Helmet_ARC_DrakeBacta),
            QCLASS(Helmet_ARC_Hagrid),
            QCLASS(Helmet_ARC_HagridPlasma),
            QCLASS(Helmet_ARC_Tyrant),
            QCLASS(Helmet_ARC_TyrantCrimson),
            QCLASS(Helmet_ARF_Patriot),
            QCLASS(Helmet_ARF_Sin),
            QCLASS(Helmet_ARF_Tugz),
            QCLASS(Helmet_BARC_Rat),
            QCLASS(Helmet_BARC_RatCrimson),
            QCLASS(Uniform_Axel),
            QCLASS(Uniform_Burnt),
            QCLASS(Uniform_Dexus),
            QCLASS(Uniform_Drake),
            QCLASS(Uniform_Fil),
            QCLASS(Uniform_FilSquad),
            QCLASS(Uniform_Joe),
            QCLASS(Uniform_Keeli),
            QCLASS(Uniform_Keeli_CamoBrown),
            QCLASS(Uniform_Keeli_CamoGrey),
            QCLASS(Uniform_Ponds),
            QCLASS(Uniform_PondsTrooper),
            QCLASS(Uniform_Rat),
            QCLASS(Uniform_Sin),
            QCLASS(Uniform_Stone),
            QCLASS(Uniform_Tyrant),
            QCLASS(Uniform_Insulated_Dexus),
            QCLASS(Uniform_Insulated_Joe),
            QCLASS(Uniform_Insulated_Keeli),
        };
        VERSION_CONFIG;
    };
};