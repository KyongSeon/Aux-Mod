#include "CfgPatches.hpp"


class CfgWeapons
{
    #include "Optics.hpp"

    class UGL_F;
    class Rifle_Base_F;
    class 3AS_WestarM5_Base_F: Rifle_Base_F
    {
        class WeaponSlotsInfo;
    };
    class 3AS_WestarM5_F: 3AS_WestarM5_Base_F
    {
        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot;
        };
    };
    class BNA_KC_WestarM5_Base: 3AS_WestarM5_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 1;
        scopeArsenal = 0;

        displayName = "[KC] Westar-M5 (Base)";
        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_ui.paa";
        baseWeapon = "BNA_KC_WestarM5_Base";

        modes[] =
        {
            "Single",
            "Burst",
            "FullAuto"
        };
        muzzles[] =
        {
            "this"
        };
        magazines[] = { "12thFleet_Mag_WestarM5" };
        magazineWell[] = {};

        canShootInWater = 1;
        recoil = "recoil_smg_03";

        class WeaponSlotsInfo: WeaponSlotsInfo
        {
            class CowsSlot: CowsSlot
            {
                compatibleItems[] =
                {
                    // Short
                    "Aux501_cows_RCO",
                    "Aux501_cows_RCO_2",
                    "Aux501_cows_RCO_3",
                    // Medium
                    "Aux501_cows_MRCO",
                    "Aux501_cows_MRCO_2",
                    "Aux501_cows_MRCO_3",
                    // Long
                    "Aux501_cows_DMS",
                    "Aux501_cows_DMS_2",
                    "Aux501_cows_DMS_3",
                    "Aux501_cows_DMS_4",
                    "Aux501_cows_HoloScope",
                    "Aux501_cows_HoloScope_2",
                    "Aux501_cows_HoloScope_3",
                    // Sights
                    "BNA_KC_WestarM5_Scope",
                    "Aux501_cows_reflex_optic",
                    "Aux501_cows_Holosight",
                    "Aux501_cows_Holosight_2",
                    "Aux501_cows_Holosight_3"
                };
            };
        };
    };

    class BNA_KC_WestarM5: BNA_KC_WestarM5_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Westar-M5";
        baseWeapon = "BNA_KC_WestarM5";
    };
    class BNA_KC_WestarM5_UGL: BNA_KC_WestarM5_Base
    {
        // Scope
        scope = 2;
        scopeArsenal = 2;

        displayName = "[KC] Westar-M5 UGL";
        baseWeapon = "BNA_KC_WestarM5_UGL";

        muzzles[] =
        {
            "this",
            "EGLM"
        };

        model = "3AS\3AS_Weapons\WestarM5\3AS_Westar_M5_GL.p3d";

        class EGLM: UGL_F
        {
            displayName = "Grenade Launcher";
            descriptionShort = "UGL";

            cameraDir = "OP_look";
            discreteDistance[] = { 50, 75, 100, 150, 200, 250, 300, 350, 400 };
            discreteDistanceCameraPoint[] =
            {
                "OP_eye_50",
                "OP_eye_75",
                "OP_eye_100",
                "OP_eye_150",
                "OP_eye_200",
                "OP_eye_250",
                "OP_eye_300",
                "OP_eye_350",
                "OP_eye_400"
            };
            discreteDistanceInitIndex = 0;

            useExternalOptic = 0;
            useModelOptics = 0;

            canShootInWater = 0;
            magazines[] = {};
            magazineWell[] = { "BNA_KC_UGL_Common" };

            reloadAction = "GestureReloadMXUGL";
            reloadMagazineSound[] = { "A3\Sounds_F\arsenal\weapons\Rifles\MX\Mx_UGL_reload", 1, 1, 10 };
        };
    };

    class BNA_KC_Westar_M5: BNA_KC_WestarM5
    {
        scope = 1;
        scopeArsenal = 0;

        displayName = "== Deprecated Class ==";
        descriptionShort = "Old Westar M5 class, update your kit.";
        magazines[] = {};
        magazineWell[] = {};
        baseWeapon = "BNA_KC_Westar_M5";
    };
    class BNA_KC_Westar_M5_UGL: BNA_KC_Westar_M5
    {
        baseWeapon = "BNA_KC_Westar_M5_UGL";
    };
};


class CfgMagazines
{
    class 3AS_60Rnd_EC50_Mag;
    class 12thFleet_Mag_WestarM5: 3AS_60Rnd_EC50_Mag
    {
        displayName = "[12th Fleet] Westar-M5 Energy Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Rounds: 60<br/>Used In: Westar-M5";

        picture = "\SWLW_clones\smgs\westar_m5\data\ui\WestarM5_mag_ui.paa";
        model = "SWLW_clones\smgs\westar_m5\WestarM5_mag.p3d";

        JLTS_hasEMPProtection = 1;

        ammo = "Aux_12thFleet_Ammo_Rifle_Blue";
    };
};