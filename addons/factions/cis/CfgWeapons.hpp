class CfgWeapons
{
    class ls_redforUniform_base;
    class CLASS(OPFOR_Uniform_Base): ls_redforUniform_base
    {
        class ItemInfo;
    };
    class CLASS(CIS_Uniform_Base): CLASS(OPFOR_Uniform_Base)
    {
        class ItemInfo: ItemInfo
        {

        };
    };
    class CLASS(CIS_Uniform_Droid_Base): CLASS(CIS_Uniform_Base)
    {
        JLTS_isDroid = TRUE;
        JLTS_hasEMPProtection = FALSE;
        JLTS_deathSounds = "DeathDroid";
        EGVAR(medical,canBleed) = FALSE;

        model = "\MRC\JLTS\characters\DroidArmor\DroidUniformB1.p3d";
        picture = "\MRC\JLTS\characters\DroidArmor\data\ui\b1_uniform_ui_ca.paa";

        class ItemInfo: ItemInfo
        {
            mass = 40;
            uniformClass = QCLASS(CIS_Unit_Droid_Base);
            containerClass = "Supply150";
        };
    };

    class CLASS(CIS_Uniform_Droid_B1): CLASS(CIS_Uniform_Droid_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[CIS] B1 Battle Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(CIS_Unit_Droid_B1);
        };
    };

    class CLASS(CIS_Uniform_Droid_B1_Crew): CLASS(CIS_Uniform_Droid_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[CIS] B1 Crew Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(CIS_Unit_Droid_B1_Crew);
        };
    };

    class CLASS(CIS_Uniform_Droid_BX): CLASS(CIS_Uniform_Droid_Base)
    {
        SCOPE_PUBLIC;

        displayName = "[CIS] BX Commando Droid";

        class ItemInfo: ItemInfo
        {
            uniformClass = QCLASS(CIS_Unit_Droid_BX);
        };
    };
};