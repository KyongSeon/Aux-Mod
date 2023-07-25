#include "CfgPatches.hpp"
#include "\BNA_KC_Gear\Macros.hpp" // Can ignore this error (if there is one in your IDE)


class CfgWeapons
{
    // ┌───────────────────┐
    // │      Helmets      │
    // └───────────────────┘
    class ItemInfo;
    class ls_blueforHelmet_base;
    class ls_gar_phase2_helmet: ls_blueforHelmet_base
    {
        class ItemInfo;
    };
    class BNA_KC_Helmet_Base: ls_gar_phase2_helmet
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 0;
        scopeArsenal = 0;

        class ItemInfo: ItemInfo {};
    };

    class BNA_KC_Helmet_Phase1_Base: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF P1 Helm (Base)";

        model = "ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
        hiddenSelections[] = { "camo1", "visor", "illum" };
        hiddenSelectionsTextures[] =
        {
            "ls_armor_bluefor\helmet\gar\phase1\data\helmet_P1_co.paa",
            "ls_armor_bluefor\helmet\gar\phase1\data\visor_co.paa",
            "ls_armor_bluefor\helmet\gar\phase1\data\illum_co.paa"
        };
        picture = "ls_armor_bluefor\helmet\_ui\icon_gar_phase1_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "visor", "illum" };
            uniformModel = "ls_armor_bluefor\helmet\gar\phase1\ls_gar_phase1_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Phase2_Base: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF P2 Helm (Base)";

        model = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
        hiddenSelections[] = { "camo1", "visor" };
        hiddenSelectionsTextures[] =
        {
            "ls_armor_bluefor\helmet\gar\phase2\data\helmet_co.paa",
            "ls_armor_bluefor\helmet\gar\phase2\data\visor_co.paa"
        };
        picture = "ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "visor" };
            uniformModel = "ls_armor_bluefor\helmet\gar\phase2\ls_gar_phase2_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Engineer: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] ENG Helm (Base)";

        model = "ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
        hiddenSelections[] = { "camo1", "illum", "visor" };
        hiddenSelectionsMaterials[] = { "", "a3\characters_f_bootcamp\common\data\vrarmoremmisive.rvmat", "" };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Helmets\Engineer\BNA_KC_Helmet_Engineer.paa",
            "ls_armor_bluefor\helmet\gar\engineer\data\light_co.paa",
            "ls_armor_bluefor\helmet\gar\engineer\data\visor_co.paa"
        };
        picture = "ls_armor_bluefor\helmet\_ui\icon_gar_engineer_helmet_ca.paa";

        // LS Headlamp
        ls_lighting_hasLight = 1;
        ls_lighting_itemType = "headgear";
        ls_lighting_attachedBone = "head";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "illum", "visor" };
            uniformModel = "ls_armor_bluefor\helmet\gar\engineer\ls_gar_engineer_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Airborne: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] AB Helm (Trooper)";

        model = "lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
        hiddenSelections[] = { "camo1", "visor" };
        hiddenSelectionsMaterials[] =
        {
            "lsd_armor_bluefor\helmet\gar\airborne\data\helmet.rvmat",
            "lsd_armor_bluefor\helmet\gar\airborne\data\visor.rvmat"
        };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Helmets\Airborne\BNA_KC_Helmet_Airborne.paa"
        };
        picture = "SWLB_clones\data\ui\icon_SWLB_clone_ab_helmet_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "visor" };
            uniformModel = "lsd_armor_bluefor\helmet\gar\airborne\lsd_gar_airborne_helmet.p3d";
        };
    };

    class BNA_KC_Helmet_Airborne_v2: BNA_KC_Helmet_Airborne
    {
        displayName = "[KC] AB Helm (Trooper, Version 2)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Helmets\Airborne\BNA_KC_Helmet_Airborne_v2.paa"
        };
    };

    class BNA_KC_Helmet_Insulated: BNA_KC_Helmet_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Snow Helm (Trooper)";

        model = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
        hiddenSelections[] = { "Camo1" };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Helmets\Insulated\BNA_KC_Helmet_Insulated.paa"
        };
        picture = "ls_armor_bluefor\helmet\_ui\icon_gar_phase2_helmet_ca.paa"; // Replace with Insulated picture when made

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "Camo1" };
            uniformModel = "ls_armor_bluefor\helmet\gar\phase2Insulated\ls_gar_phase2Insulated_helmet.p3d";
        };
    };

    #include "P1_Helmets.hpp"
    #include "P2_Helmets.hpp"

    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_blueforUniform_base;
    class ls_gar_phase2_uniform: ls_blueforUniform_base
    {
        class ItemInfo;
    };

    class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Armor (Base)";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Phase1_Base";
            uniformType = "Neopren";
        };
    };

    class BNA_KC_Uniform_Insulated: BNA_KC_Uniform_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Snow Armor (Trooper)";
        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_Unit_Insulated_Trooper";
        };
    };

    #include "Uniforms.hpp"

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class VestItem;
    class V_PlateCarrier1_rgr;
    class SWLB_clone_basic_armor: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class SWLB_clone_officer_armor: SWLB_clone_basic_armor
    {
        class ItemInfo: VestItem {};
    };

    class BNA_KC_Vest_Basic: SWLB_clone_basic_armor
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Vest";
        
        class ItemInfo: ItemInfo
        {
            containerClass = "Supply40"; // Base LS value until another value is decided
            vestType = "Rebreather";

            class HitpointsProtectionInfo
            {
                class Abdomen
                {
                    // TODO
                };
                class Body
                {
                    // Base LS values
                    hitpointName = "HitBody";
                    armor = 0;
                    passThrough = 1;
                };
                class Chest
                {
                    // TODO
                };
                class Diaphragm
                {
                    // TODO
                };
            };
        };
    };

    class BNA_KC_Vest_Medic: BNA_KC_Vest_Basic
    {
        displayName = "[KC] INF Medic Vest";

        model = "SWLB_clones\SWLB_clone_airborne_armor.p3d";
        hiddenSelections[] = { "camo1", "camo2", "ammo", "pauldron" };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic.paa", // Heavy Bag / Strap
            "",                                                      // Kama
            "",                                                      // Airborne / Ammo thing
            ""                                                       // Pauldron
        };
        picture = "SWLB_clones\data\ui\icon_SWLB_clone_airborne_armor_ca.paa";

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = { "camo1", "camo2", "ammo", "pauldron" };
            uniformModel = "SWLB_clones\SWLB_clone_airborne_armor.p3d";
            containerClass = "Supply80";
        };
    };
    class BNA_KC_Vest_Medic_v2: BNA_KC_Vest_Medic
    {
        displayName = "[KC] INF Medic Vest (v2)";

        model = "SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic_v2.paa", // Tablet
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic_v2.paa", // Chest Strap
            "",                                                         // Airborne / Ammo thing
            ""                                                          // Pauldron
        };
        class ItemInfo: ItemInfo
        {
            uniformModel = "SWLB_CEE\data\SWLB_CEE_Airborne_CFR.p3d";
        };
    };

    class BNA_KC_Vest_Medic_Senior: BNA_KC_Vest_Medic
    {
        displayName = "[KC] INF Medic Senior Vest";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic.paa", // Heavy Bag / Strap
            "",                                                      // Kama
            "",                                                      // Airborne thing
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic.paa"  // Pauldron
        };
    };
    class BNA_KC_Vest_Medic_Senior_v2: BNA_KC_Vest_Medic_v2
    {
        displayName = "[KC] INF Medic Senior Vest (v2)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic_v2.paa", // Tablet
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic_v2.paa", // Chest Strap
            "",                                                         // Airborne thing
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic_v2.paa"  // Pauldron
        };
    };

    class BNA_KC_Vest_Medic_Platoon: BNA_KC_Vest_Medic
    {
        displayName = "[KC] INF Medic Company Vest";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic.paa",         // Heavy Bag / Strap
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic_Platoon.paa", // Kama
            "",                                                              // Airborne / Ammo thing
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Medic.paa"          // Pauldron
        };
    };

    class BNA_KC_Vest_Officer: SWLB_clone_officer_armor
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] INF Vest 12+ (Officer)";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Vests\BNA_KC_Vest_Officer.paa"
        };

        class ItemInfo: ItemInfo
        {
            vestType = "Rebreather";
            class HitpointsProtectionInfo
            {
                class Arms
                {
                    hitpointName = "HitArms";
                    armor = 10;
                    passThrough = 0.20000001;
                };
                class Chest
                {
                    HitpointName = "HitChest";
                    armor = 20;
                    PassThrough = 0.10000001;
                };
                class Legs
                {
                    hitpointName = "HitLegs";
                    armor = 20;
                    passThrough = 0.10000001;
                };
            };
        };
    };

    // ┌──────────────────┐
    // │       NVGs       │
    // └──────────────────┘
    class lsd_gar_standard_nvg;
    class lsd_gar_rangefinder_nvg;
    class SWLB_clone_ccVisor;

    class BNA_KC_NVG_Chip: lsd_gar_standard_nvg
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone NVG Chip";

        // Night Vision / Thermal Settings
        // See BNA_KC_Gear/Macros.hpp for values
        visionMode[] = { VISION_MODE };
        thermalMode[] = { THERMAL_MODE };

        // Remove the model and textures (invisible)
        model = "A3\weapons_F\ammo\mag_univ.p3d";
        modelOptics = "BNA_KC_Gear\Data\Models\empty_model.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};

        class ItemInfo
        {
            type = 616;
            uniformModel = "BNA_KC_Gear\Data\Models\empty_model.p3d";
            modelOff = "BNA_KC_Gear\Data\Models\empty_model.p3d";
            mass = 10;
            hiddenSelections[] = {};
        };
    };

    class BNA_KC_NVG_Visor: lsd_gar_standard_nvg
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone P2 NVG Visor";
        hiddenSelectionsTextures[] =
        {
            BNA_KC_Gear\Infantry\Data\NVGs\BNA_KC_NVG_Visor.paa
        };

        // Night Vision / Thermal Settings
        visionMode[] = { VISION_MODE };
        thermalMode[] = { THERMAL_MODE };

        // Remove NVG Overlay
        modelOptics = "BNA_KC_Gear\Data\Models\empty_model.p3d";
    };

    class BNA_KC_NVG_Visor_v2: BNA_KC_NVG_Visor
    {
        displayName = "[KC] Clone P2 NVG Visor (v2)";
        hiddenSelectionsTextures[] =
        {
            BNA_KC_Gear\Infantry\Data\NVGs\BNA_KC_NVG_Visor_v2.paa
        };
    };

    class BNA_KC_NVG_Rangefinder: lsd_gar_rangefinder_nvg
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone P2 Rangefinder (CS+)";
        hiddenSelectionsTextures[] =
        {
            BNA_KC_Gear\Infantry\Data\NVGs\BNA_KC_NVG_Rangefinder.paa
        };

        // Night Vision / Thermal Settings
        visionMode[] = { VISION_MODE };
        thermalMode[] = { THERMAL_MODE };

        // Remove NVG Overlay
        modelOptics = "BNA_KC_Gear\Data\Models\empty_model.p3d";
    };

    class BNA_KC_NVG_Officer: SWLB_clone_ccVisor
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        displayName = "[KC] Clone P2 Officer Visor (WO+)";
        hiddenSelectionsTextures[] =
        {
            BNA_KC_Gear\Infantry\Data\NVGs\BNA_KC_NVG_Officer.paa
        };

        // Night Vision / Thermal Settings
        visionMode[] = { VISION_MODE };
        thermalMode[] = { THERMAL_MODE };

        // Remove NVG Overlay
        modelOptics = "BNA_KC_Gear\Data\Models\empty_model.p3d";
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class lsd_gar_trooper_phase1;
    class lsd_gar_phase2Insulated_base;

    class BNA_KC_Unit_Base: lsd_gar_trooper_phase1
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 0;
        scopeCurator = 0;

        // Editor Properties
        faction = "BNA_KC_Faction";

        displayName = "[KC] INF Trooper (Base)"
        uniformClass = "BNA_KC_Uniform_Base";

        // Inventory
        weapons[] =
        {
            "BNA_KC_DC15S",
            "BNA_KC_DC17",
            "SWLB_clone_binocular",
            "Throw",               // Allows the unit to throw grenades
            "Put"                  // Allows the unit to place explosives
        };
        respawnWeapons[] =
        {
            "BNA_KC_DC15S",
            "BNA_KC_DC17",
            "SWLB_clone_binocular",
            "Throw",
            "Put"
        };
        magazines[] =
        {
            // Ammo
            ITEM_11("12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            ITEM_2("12thFleet_Mag_DC17"),
            // Stun rounds would go here
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        respawnMagazines[] =
        {
            // Ammo
            ITEM_11("12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            ITEM_2("12thFleet_Mag_DC17"),
            // Stun rounds would go here
            // Grenades
            ITEM_2("ls_mag_classC_thermalDet"),
            ITEM_3("ShieldGrenade_Mag"),
            // Smokes
            ITEM_3("3AS_SmokeWhite"),
            ITEM_3("3AS_SmokeBlue"),
            ITEM_3("3AS_SmokeGreen")
        };
        items[] =
        {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            // Other
            ITEM_3("ACE_CableTie"),
            "ACE_EntrenchingTool",
            "ItemcTabHCam",
            "ACE_IR_Strobe_Item",
            "ACE_Flashlight_XL50",
            "ACE_MapTools"
        };
        respawnItems[] =
        {
            // Medical
            ITEM_10("ACE_elasticBandage"),
            ITEM_4("ACE_tourniquet"),
            // Other
            ITEM_3("ACE_CableTie"),
            "ACE_EntrenchingTool",
            "ItemcTabHCam",
            "ACE_IR_Strobe_Item",
            "ACE_Flashlight_XL50",
            "ACE_MapTools"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        backpack = "";
    };

    class BNA_KC_Unit_Phase1_Base: BNA_KC_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Properties
        editorSubcategory = "BNA_KC_INF_P1";
        editorPreview = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Preview_Trooper_P1.paa";

        displayName = "[KC] INF P1 Trooper (Base)"

        uniformClass = "BNA_KC_Uniform_Base";
    };

    class BNA_KC_Unit_Phase2_Base: BNA_KC_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Properties
        editorSubcategory = "BNA_KC_INF_P2";
        editorPreview = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Preview_Trooper_P2.paa";

        // Uniform textures would be applied here ; default textures listed
        uniformClass = "BNA_KC_Uniform_Base";
        hiddenSelectionsTextures[] =
        {
            "ls_armor_bluefor\uniform\gar\phase2\data\camo1_co.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\camo2_co.paa",
            "ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa" 
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };

    class BNA_KC_Unit_Insulated_Trooper: BNA_KC_Unit_Phase2_Base
    {
        displayName = "[KC] INF Snow - Trooper";
        editorSubcategory = "BNA_KC_INF_Snow";

        // Uniform Model & Textures
        uniformClass = "BNA_KC_Uniform_Insulated";
        model = "lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
        hiddenSelections[] = { "_upper", "_lower", "_undersuit" };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Upper.paa",
            "BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\BNA_KC_Uniform_Insulated_Lower.paa",
            "lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };

        // Inventory
        linkedItems[] =
        {
            "BNA_KC_Helmet_Insulated", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Insulated", "lsd_gar_clone_vest", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "ItemMap", "SWLB_comlink", "ItemCompass", "TFAR_microdagr"
        };
    };

    #include "P1_Units.hpp"
    #include "P2_Units.hpp"

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘
    class SWLB_clone_backpack;

    class BNA_KC_Backpack: SWLB_clone_backpack
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        maximumLoad = 400;

        displayName = "[KC] Clone Trooper Backpack";

        picture = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Backpack_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa", // Main Texture
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa", // Cover
            "",                                                    // Heavy
            "",                                                    // Medic
            ""                                                     // RTO
        };
    };

    class BNA_KC_Backpack_Invisible: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Backpack (Invisible)";

        // Remove the model and textures (invisible)
        picture = "";
        model = "BNA_KC_Gear\Data\Models\empty_model.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };

    class BNA_KC_Backpack_Heavy: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Heavy Backpack";

        picture = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Backpack_Heavy_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa",      // Main Texture
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa",      // Cover
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa", // Heavy
            "",                                                         // Medic
            ""                                                          // RTO
        };
    };

    class BNA_KC_Backpack_Medic: BNA_KC_Backpack
    {
        maximumLoad = 300; // Normal is 280, Heavy is 320

        displayName = "[KC] Clone Trooper Medic Backpack";

        picture = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Backpack_Medic_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack_Medic.paa", // Main Texture
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack_Medic.paa", // Cover
            "",                                                          // Heavy
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa",  // Medic
            ""                                                           // RTO
        };
    };

    class BNA_KC_Backpack_Radio: BNA_KC_Backpack
    {
        displayName = "[KC] Clone Trooper Radio Backpack";

        picture = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Backpack_Radio_UI.paa";
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack.paa", // Main Texture
            "",                                                        // Cover
            "",                                                        // Heavy
            "",                                                        // Medic
            "SWLB_equipment\backpacks\data\SWLB_clone_backpack_co.paa" // RTO
        };

        // TFAR Long Range
        tf_hasLRradio = 1;
        tf_range = 25000;

        tf_dialog = "SWLB_clone_rto_radio_dialog";
        tf_dialogUpdate = "call TFAR_fnc_updateLRDialogToChannel;";
        tf_encryptionCode = "tf_west_radio_code";
        tf_subtype = "digital_lr";
    };
    class BNA_KC_Backpack_Radio_Mini: BNA_KC_Backpack_Radio
    {        
        displayName = "[KC] Clone Commander Radio Backpack";

        model = "SWLB_equipment\backpacks\SWLB_clone_RTO_mini_backpack.p3d";
        hiddenSelections[] = { "main", "accumulator" };
        hiddenSelectionsTextures[] =
        {
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack_Radio_Mini.paa",
            "BNA_KC_Gear\Infantry\Data\Backpacks\BNA_KC_Backpack_Radio_Mini_Accumulator.paa"
        };
        picture = "BNA_KC_Gear\Infantry\Data\UI\BNA_KC_Backpack_Radio_Mini_UI.paa";
    };
    class BNA_KC_Backpack_Radio_Invisible: BNA_KC_Backpack_Radio
    {
        displayName = "[KC] Clone Trooper Radio Backpack (Invisible)";

        picture = "";
        model = "BNA_KC_Gear\Data\Models\empty_model.p3d";
        hiddenSelections[] = {};
        hiddenSelectionsTextures[] = {};
    };
};


class CfgEditorSubcategories
{
    class BNA_KC_INF_P1
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";
        
        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Phase 1";
    };

    class BNA_KC_INF_P2
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Phase 2";
    };

    class BNA_KC_INF_Camo
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Camo";
    };

    class BNA_KC_INF_Certs
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Specializations";
    };

    class BNA_KC_INF_Snow
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "Infantry - Snow";
    };
};