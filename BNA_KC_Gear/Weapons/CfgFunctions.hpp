class CfgFunctions
{
    class BNAKC
    {
        class Weapons
        {
            file = "BNA_KC_Gear\Weapons\Data\Functions";
            class SpecialAmmo {};
            class PlayDroidPopperSound {};
            class KillDroids {};
            class TempDisableVehicles {};
            class DisableDekaShields {};
        };
        
        class Bacta
        {
            file = "BNA_KC_Gear\Weapons\Data\Functions\Bacta";
            class slowHeal {};
        };
    };
};



class Extended_PostInit_EventHandlers
{
    class BNA_KC_Scripts_SpecialAmmo
    {
        init = "['ace_firedPlayer'] call BNAKC_fnc_SpecialAmmo;";
    };
};