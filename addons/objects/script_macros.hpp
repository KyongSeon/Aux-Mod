#define DEPLOYABLES_DEPLOY_ANIMATION_DURATION 0.925

#define MENU_PAGE_HOME 0
#define UNIFORMMENU_PAGE_RANKUNIFORMS 1
#define UNIFORMMENU_PAGE_DETACHMENTHELMETS 2
#define UNIFORMMENU_GETPAGE ace_player getVariable [QQGVAR(UniformMenu_Page), MENU_PAGE_HOME]
#define UNIFORMMENU_SETPAGE(var1) ace_player getVariable [QQGVAR(UniformMenu_Page), var1]

#define LOADOUTMENU_GETPAGE ace_player getVariable [QQGVAR(LoadoutMenu_Page), MENU_PAGE_HOME]
#define LOADOUTMENU_SETPAGE(var1) ace_player getVariable [QQGVAR(LoadoutMenu_Page), var1]


#define LOADOUTS_RANKS ["CR", "CT", "SCT", "VCT", "CLC", "CPL", "CS", "CSS", "CSFC", "CMS", "CSM", "WO", "WO2", "WO3", "LT", "1LT", "CAP", "MAJ", "COM"]
#define LOADOUTS_RANKS_NCO ["CS", "CSS", "CSFC", "CMS", "CSM"]
#define LOADOUTS_RANKS_OFFICER ["WO", "WO2", "WO3", "LT", "1LT", "CAP", "MAJ", "COM"]
#define LOADOUTS_WEAPONS_LIST ["DC15A", "DC15S", "DC15C"]
#define LOADOUTS_KITS ["Rifleman", "Squad Leader"]