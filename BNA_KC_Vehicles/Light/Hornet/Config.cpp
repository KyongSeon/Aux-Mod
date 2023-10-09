#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"

// Macros
#define HORNET_INVENTORY() class TransportWeapons \
{ \
    class _xx_BNA_KC_DC15A \
    { \
        weapon = "BNA_KC_DC15A"; \
        count = 1; \
    }; \
    class _xx_BNA_KC_DC15S \
    { \
        weapon = "BNA_KC_DC15S"; \
        count = 1; \
    }; \
}; \
class TransportMagazines \
{ \
    class _xx_Aux12thFleet_Mag_DC15A \
    { \
        magazine = "Aux12thFleet_Mag_DC15A"; \
        count = 15; \
    }; \
    class _xx_Aux12thFleet_Mag_DC15S \
    { \
        magazine = "Aux12thFleet_Mag_DC15S"; \
        count = 15; \
    }; \
    class _xx_Aux12thFleet_Mag_DC15X \
    { \
        magazine = "Aux12thFleet_Mag_DC15X"; \
        count = 5; \
    }; \
}; \
class TransportItems \
{ \
    class _xx_ACE_elasticBandage \
    { \
        name = "ACE_elasticBandage"; \
        count = 30; \
    }; \
};

#define HORNET_TEXTURES() hiddenSelectionsTextures[] = \
{ \
    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoBrown.paa", \
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", \
    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" \
}; \
textureList[] = {"BrownCamo", 1, "GreyCamo", 0}; \
class TextureSources \
{ \
    class BrownCamo \
    { \
        author = "SweMonkey and DartRuffian"; \
        displayName = "KC Brown Camo"; \
        factions[] = {"BNA_KC_Faction"}; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoBrown.paa", \
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", \
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" \
        }; \
    }; \
    class GreyCamo: BrownCamo \
    { \
        displayName = "Grey Camo"; \
        textures[] = \
        { \
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoGrey.paa", \
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa", \
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa" \
        }; \
    }; \
};


class CfgVehicles
{
    class O_LSV_02_unarmed_F;
    class BNA_KC_Hornet_Unarmed: O_LSV_02_unarmed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";
        editorPreview = "\BNA_KC_Vehicles\Light\Data\Textures\Previews\BNA_KC_Hornet_Unarmed.jpg";

        displayName = "Hornet Strike Vehicle (Unarmed)";
        crew = "BNA_KC_Unit_ARF";
        typicalCargo[] = {"BNA_KC_Unit_ARF"};
        side = 1;

        HORNET_TEXTURES()
        HORNET_INVENTORY()
    };

    class Car_F;
    class LSV_02_base_F: Car_F
    {
        class AnimationSources;
        class Turrets;
    };
    class LSV_02_armed_base_F: LSV_02_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_armed_F: LSV_02_armed_base_F {};
    class BNA_KC_Hornet_Armed: O_LSV_02_armed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";
        editorPreview = "\BNA_KC_Vehicles\Light\Hornet\Data\Previews\Hornet_MG.jpg";

        displayName = "Hornet Strike Vehicle (MG)";
        crew = "BNA_KC_Unit_ARF";
        typicalCargo[] = {"BNA_KC_Unit_ARF"};
        side = 1;

        HORNET_TEXTURES()
        HORNET_INVENTORY()

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BNA_KC_Mounted_MG"};
                magazines[] =
                {
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag",
                    "BNA_KC_1000rnd_Coax_Mag"
                };
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };

        class AnimationSources: AnimationSources
        {
            class Minigun
            {
                source = "revolving";
                weapon = "BNA_KC_Mounted_MG";
            };
            class muzzle_hide
            {
                source = "reload";
                weapon = "BNA_KC_Mounted_MG";
            };
            class muzzle_rot
            {
                source = "ammorandom";
                weapon = "BNA_KC_Mounted_MG";
            };
        };
    };

    class LSV_02_AT_base_F: LSV_02_base_F
    {
        class AnimationSources;
        class Turrets: Turrets
        {
            class MainTurret;
            class CargoTurret_01;
            class CargoTurret_02;
            class CargoTurret_03;
            class CargoTurret_04;
            class CargoTurret_05;
        };
    };
    class O_LSV_02_AT_F: LSV_02_AT_base_F {};
    class BNA_KC_Hornet_AT: O_LSV_02_AT_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VLight";
        editorPreview = "\BNA_KC_Vehicles\Light\Hornet\Data\Previews\Hornet_Launcher.jpg";

        displayName = "Hornet Strike Vehicle (AT)";
        crew = "BNA_KC_Unit_ARF";
        typicalCargo[] = {"BNA_KC_Unit_ARF"};
        side = 1;

        HORNET_INVENTORY()

        // The launcher model adds two more hiddenSelections, meaning the normal macro would require extra editing
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoBrown.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
            "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa",
            "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa"
        };
        class TextureSources
        {
            class BrownCamo
            {
                author = "SweMonkey and DartRuffian";
                displayName = "KC Brown Camo";
                factions[] = {"BNA_KC_Faction"};
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoBrown.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa",
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa"
                };
            };
            class GreyCamo: BrownCamo
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Body_CamoGrey.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                    "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa",
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa",
                    "\BNA_KC_Vehicles\Light\Hornet\Data\Textures\Launcher.paa"
                };
            };
        };

        class AnimationSources: AnimationSources
        {
            class VoronaMuzzle_reload
            {
                source = "reload";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_reloadMagazine
            {
                source = "reloadMagazine";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_revolving
            {
                source = "revolving";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
            class VoronaMuzzle_rot
            {
                source = "ammorandom";
                weapon = "BNA_KC_Mounted_MissileLauncher";
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"BNA_KC_Mounted_MissileLauncher"};
            };
            class CargoTurret_01: CargoTurret_01 {};
            class CargoTurret_02: CargoTurret_02 {};
            class CargoTurret_03: CargoTurret_03 {};
            class CargoTurret_04: CargoTurret_04 {};
            class CargoTurret_05: CargoTurret_05 {};
        };
    };
};