#include "CfgPatches.hpp"
#include "CfgGroups.hpp"
#include "\BNA_KC_OPFOR\Macros.hpp"


class CfgWeapons
{
    // ┌────────────────────┐
    // │      Uniforms      │
    // └────────────────────┘
    class ls_redforUniform_base;
    class BNA_KC_OPFOR_Uniform_Base: ls_redforUniform_base
    {
        class ItemInfo;
    };
    class BNA_KC_EPF_Uniform: BNA_KC_OPFOR_Uniform_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[EPF] Techno Union Uniform";

        class ItemInfo: ItemInfo
        {
            uniformClass = "BNA_KC_EPF_Unit_Base";
        };
    };

    // ┌───────────────────┐
    // │       Vests       │
    // └───────────────────┘
    class V_PlateCarrier1_rgr;
    class ls_redforVest_base: V_PlateCarrier1_rgr
    {
        class ItemInfo;
    };
    class BNA_KC_OPFOR_Vest_Base: ls_redforVest_base
    {
        class ItemInfo: ItemInfo
        {
            class HitpointsProtectionInfo;
        };
    };
    class BNA_KC_EPF_Vest: BNA_KC_OPFOR_Vest_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[EPF] Light Vest";
        descriptionShort = "Armor Level III";

        model = "\sc_equipment\data\watchdog\wd_vest_basic.p3d";
        hiddenSelections[] = {"camo"};
        hiddenSelectionsTextures[] =
        {
            "\sc_equipment\data\marine\textures\vest_green_co.paa"
        };

        class ItemInfo: ItemInfo
        {
            hiddenSelections[] = {"camo"};
            uniformModel = "\sc_equipment\data\watchdog\wd_vest_basic.p3d";

            class HitpointsProtectionInfo: HitpointsProtectionInfo
            {
                class Abdomen;
                class Chest;
                class Diaphragm;
            };
        };
    };
};


class CfgVehicles
{
    // ┌───────────────────┐
    // │       Units       │
    // └───────────────────┘
    class BNA_KC_OPFOR_Unit_Base;
    class BNA_KC_EPF_Unit_Base: BNA_KC_OPFOR_Unit_Base
    {
        faction = "BNA_KC_OPFOR_EPF";
        editorSubcategory = "BNA_KC_SubCat_OPFOR_Infantry";

        model = "\A3\Characters_F_Beta\INDEP\ia_soldier_01.p3d";
        uniformClass = "BNA_KC_EPF_Uniform";
        hiddenSelections[] = {"camo", "insignia"};
        hiddenSelectionsTextures[] = {"sc_equipment\data\combat_uniform\cu_green_co.paa"};
    };
    #include "CfgUnits.hpp"

    // ┌───────────────────┐
    // │     Backpacks     │
    // └───────────────────┘

    // ┌───────────────────┐
    // │      Vehicles     │
    // └───────────────────┘
};


class CfgFactionClasses
{
    class BNA_KC_OPFOR_EPF
    {
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        scope = 2;
        scopeCurator = 2;

        displayName = "[KC] El Presidente Forces";
    };
};
