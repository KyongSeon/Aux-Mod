#define MAINPREFIX ORA
#define PREFIX BNA_KC
#define MOD_NAME Keeli Company Auxillary Mod
#define AUTHORS DartRuffian, SweMonkey, Dexus, Rev, Sin
#define QAUTHORS "DartRuffian", "SweMonkey", "Dexus", "Rev", "Sin"

#include "\ORA\BNA_KC\addons\core\script_version.hpp"

#define REQUIRED_VERSION 2.14

#define VERSION     MAJOR.MINOR
#define VERSION_STR MAJOR.MINOR.PATCH.BUILD
#define VERSION_AR  MAJOR,MINOR,PATCH,BUILD

#ifndef COMPONENT_BEAUTIFIED
    #define COMPONENT_BEAUTIFIED COMPONENT
#endif
#ifdef SUBCOMPONENT
    #ifndef SUBCOMPONENT_BEAUTIFIED
        #define SUBCOMPONENT_BEAUTIFIED SUBCOMPONENT
    #endif
    #define COMPONENT_NAME QUOTE(PREFIX - COMPONENT_BEAUTIFIED (SUBCOMPONENT_BEAUTIFIED))
#else
    #define COMPONENT_NAME QUOTE(PREFIX - COMPONENT_BEAUTIFIED)
#endif