#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class Tank_F;
    class 3AS_AAT_base_F: Tank_F
    {
        class Turrets;
    };
    class 3AS_CIS_AAT_base_F: 3AS_AAT_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class 3AS_CIS_AAT_F: 3AS_CIS_AAT_base_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets;
            };
        };
    };
    class 3AS_AAT: 3AS_CIS_AAT_F
    {
        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                class Turrets: Turrets
                {
                    class CommanderOptics;
                };
            };
        };
    };
    class BNA_KC_AAT: 3AS_AAT
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_OPFOR_CIS";
        editorSubcategory = "BNA_KC_SubCat_CIS_Tanks";

        displayName = "AAT";
        crew = "JLTS_Droid_B1_Crew";
        typicalCargo[] = {"JLTS_Droid_B1_Crew"};

        hiddenSelectionsTextures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};

        textureList[] =
        {
            "CIS", 1,
            "TradeFederation", 0,
            "Green", 0,
            "Red", 0,
            "Desert", 0,
            "Geonosis", 0,
            "Woodland", 0,
            "Tropical", 0,
            "Arid", 0,
            "Winter", 0,
            "Aqua", 0
        };
        class TextureSources
        {
            class CIS
            {
                displayName = "CIS";
                author = "$STR_3AS_Studio";
                factions[] = {"BNA_KC_OPFOR_CIS"};
                textures[] = {"\3AS\3AS_AAT\data\CIS_AAT_CO.paa"};
            };
            class TradeFederation: CIS
            {
                displayName = "Trade Federation";
                textures[] = {"\3AS\3AS_AAT\data\Tan_AAT_CO.paa"};
            };
            class Green: CIS
            {
                displayName = "Green";
                textures[] = {"\3AS\3AS_AAT\data\Green_AAT_CO.paa"};
            };
            class Red: CIS
            {
                displayName = "Red";
                textures[] = {"\3AS\3AS_AAT\data\Red_AAT_CO.paa"};
            };
            class Desert
            {
                displayName = "Camo - Desert";
                textures[] = {"\3AS\3AS_AAT\data\Desert_AAT_CO.paa"};
            };
            class Geonosis
            {
                displayName = "Camo - Geonosis";
                textures[] = {"\3AS\3AS_AAT\data\Geonosis_AAT_CO.paa"};
            };
            class Woodland
            {
                displayName = "Camo - Woodland";
                textures[] = {"\3AS\3AS_AAT\data\Woodland_AAT_CO.paa"};
            };
            class Tropical
            {
                displayName = "Camo - Tropical";
                textures[] = {"\3AS\3AS_AAT\data\Tropical_AAT_CO.paa"};
            };
            class Arid
            {
                displayName = "Camo - Arid";
                textures[] = {"\3AS\3AS_AAT\data\Arid_AAT_CO.paa"};
            };
            class Winter
            {
                displayName = "Camo - Winter";
                textures[] = {"\3AS\3AS_AAT\data\Winter_AAT_CO.paa"};
            };
            class Aqua
            {
                displayName = "Camo - Aqua";
                textures[] = {"\3AS\3AS_AAT\data\Aqua_AAT_CO.paa"};
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] = {"3AS_AATCannon", "SmokeLauncher"};
                magazines[] =
                {
                    "3AS_24Rnd_AAT_AP",
                    "3AS_24Rnd_AAT_AP",
                    "SmokeLauncherMag"
                };

                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        weapons[] = {"3AS_AAT_Repeater", "SmokeLauncher"};
                        magazines[] =
                        {
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "3AS_500Rnd_ATT_RedPlasma",
                            "SmokeLauncherMag"
                        };
                    };
                };
            };
        };

        class AnimationSources
        {
            class recoil_source
            {
                source = "reload";
                weapon = "3AS_AATCannon";
            };
            class muzzle_rot_cannon
            {
                source = "ammorandom";
                weapon = "3AS_AAT_Repeater";
            };
            class muzzle_rot_coax
            {
                source = "ammorandom";
                weapon = "3AS_AAT_Repeater";
            };
        };
    };
};