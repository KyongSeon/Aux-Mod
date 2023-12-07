class CfgVehicles
{
    class lsd_gar_trooper_phase1;
    class BNA_KC_Unit_Base: lsd_gar_trooper_phase1
    {
        SCOPE_PRIVATE;
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        faction = "BNA_KC_Faction";

        displayName = "INF Trooper (Base)"
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
            ITEM_11("Aux12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            ITEM_2("Aux12thFleet_Mag_DC17"),
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
            ITEM_11("Aux12thFleet_Mag_DC15S"),
            // Stun rounds would go here
            ITEM_2("Aux12thFleet_Mag_DC17"),
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
            "BNA_KC_Helmet_Phase1_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase1_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p1Interior_hud", "SWLB_comlink", LINKED_ITEMS
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
        editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase1\Base.jpg";

        displayName = "INF P1 Trooper (Base)"

        uniformClass = "BNA_KC_Uniform_Base";
    };

    class BNA_KC_Unit_Phase2_Base: BNA_KC_Unit_Base
    {
        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Properties
        editorSubcategory = "BNA_KC_INF_P2";
        editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\Base.jpg";

        // Uniform textures would be applied here ; default textures listed
        uniformClass = "BNA_KC_Uniform_Base";
        hiddenSelectionsTextures[] =
        {
            "\ls_armor_bluefor\uniform\gar\phase2\data\camo1_co.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\camo2_co.paa",
            "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
        };

        linkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Phase2_Base", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
    };

    class BNA_KC_Unit_Insulated_Trooper: BNA_KC_Unit_Phase2_Base
    {
        displayName = "INF Snow - Trooper";
        editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Trooper_Insulated.jpg";

        // Uniform Model & Textures
        uniformClass = "BNA_KC_Uniform_Insulated";
        model = "\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
        hiddenSelections[] = {"_upper", "_lower", "_undersuit"};
        hiddenSelectionsTextures[] =
        {
            "\BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\Uniform_Insulated_Upper.paa",
            "\BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\Uniform_Insulated_Lower.paa",
            "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
        };

        // Inventory
        linkedItems[] =
        {
            "BNA_KC_Helmet_Insulated", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
        respawnLinkedItems[] =
        {
            "BNA_KC_Helmet_Insulated", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
        };
    };

    #include "configs/Units_P1.hpp"
    #include "configs/Units_P2.hpp"
};