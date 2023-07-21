#include "CfgPatches.hpp"
#include "CfgFunctions.hpp"


class CfgVehicles
{
	class All
    {
        class AnimationSources {};
    };
	class AllVehicles: All
    {
		class NewTurret {};
	};
	class Land: AllVehicles {};
	class LandVehicle: Land
    {
		class CommanderOptics: NewTurret {};
	};
	class Tank: LandVehicle {};
	class Tank_F: Tank
    {
		class Turrets
        {
			class MainTurret: NewTurret
            {
				class Turrets
                {
					class CommanderOptics: CommanderOptics {};
				};
			};
		};
	};
	class MBT_01_base_F: Tank_F
    {
        class AnimationSources: AnimationSources {};
		class Turrets: Turrets
        {
			class MainTurret: MainTurret
            {
				class Turrets: Turrets
                {
					class CommanderOptics: CommanderOptics {};
				};
			};
		};
	};
	class B_MBT_01_base_F: MBT_01_base_F {};
	class B_MBT_01_cannon_F: B_MBT_01_base_F
    {
        class AnimationSources: AnimationSources {};
    };
	class B_MBT_01_TUSK_F: B_MBT_01_cannon_F
    {
        class AnimationSources: AnimationSources
        {
			class muzzle_hide_cannon;
			class muzzle_rot_cannon;
			class muzzle_rot_cmdr;
			class recoil_source;
			class commander_gun_recoil;
		};
		class Turrets: Turrets
        {
			class MainTurret: MainTurret
            {
				class Turrets: Turrets
                {
					class CommanderOptics: CommanderOptics {};
				};
			};
		};
	};
    class BNA_KC_MBT_Slammer: B_MBT_01_TUSK_F
	{
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] Blitz Assault Tank";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Armored\Data\Blitz\BNA_KC_Blitz_Body.paa",
			"BNA_KC_Vehicles\Armored\Data\Blitz\BNA_KC_Blitz_Tow.paa",
			"BNA_KC_Vehicles\Armored\Data\Blitz\BNA_KC_Blitz_Addons.paa",
			"BNA_KC_Vehicles\Armored\Data\Blitz\BNA_KC_Blitz_Camonet.paa"
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				class Turrets: Turrets
				{
					class CommanderOptics: CommanderOptics
					{
						weapons[] = 
						{
							"BNA_KC_CommanderGun",
							"SmokeLauncher"
						};
						magazines[] = 
						{
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"BNA_KC_100rnd_Coax_Mag",
							"SmokeLauncherMag"
						};
					};
				};
				
				// gunBeg = "Usti hlavne";
				// gunEnd = "Konec hlavne";
				// memoryPointGun[] = {"usti hlavne3"};
				weapons[] = 
				{
					"BNA_KC_120_Tankgun",
					"BNA_KC_Coax"
				};
				magazines[] = 
				{
					"BNA_KC_120_AT_Mag",
					"BNA_KC_120_HEAT_Mag",
					"BNA_KC_120_HE_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag"
				};
			};
		};
		class AnimationSources: AnimationSources
		{
			class muzzle_hide_cannon: muzzle_hide_cannon
			{
				source = "reload";
				weapon = "BNA_KC_120_Tankgun";
			};
			class muzzle_rot_cannon: muzzle_rot_cannon
			{
				source = "ammorandom";
				weapon = "BNA_KC_120_Tankgun";
			};
			class muzzle_rot_cmdr: muzzle_rot_cmdr
			{
				source = "ammorandom";
				weapon = "HMG_127_MBT";
			};
			class recoil_source: recoil_source
			{
				source = "reload";
				weapon = "BNA_KC_120_Tankgun";
			};
			class commander_gun_recoil: commander_gun_recoil
			{
				source = "reload";
				weapon = "HMG_127_MBT";
			};
		};
		//soundEngineOffExt[] = {"A3\Sounds_F\vehicles2\armor\MBT_01\MBT_01_Engine_Ext_Stop",6.30957,1,100};
		soundEngineOffExt[] = {"BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineShutdown",30,1,100};
		soundEngineOffInt[] = {"BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineShutdown",1,1};
		soundEngineOnExt[] = {"BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineStartup",30,1,100};
		soundEngineOnInt[] = {"BNA_KC_Vehicles\VehicleSounds\Data\Audio\Tank\TankEngineStartup",1,1};
		class Sounds
		{
			soundSetsInt[] = 
			{
				"BNA_KC_Engine_RPM0_INT_SoundSet",
				"BNA_KC_Engine_RPM1_INT_SoundSet",
				"BNA_KC_Engine_RPM2_INT_SoundSet",
				"BNA_KC_Engine_RPM3_INT_SoundSet",
				"BNA_KC_Engine_RPM4_INT_SoundSet",
				"BNA_KC_Engine_RPM5_INT_SoundSet",
				"BNA_KC_Engine_RPM6_INT_SoundSet",
				//"MBT_01_Engine_INT_Burst_SoundSet",
				"MBT_01_Tracks_01_INT_SoundSet",
				"MBT_01_Tracks_02_INT_SoundSet",
				"MBT_01_Tracks_03_INT_SoundSet",
				"MBT_01_Tracks_04_INT_SoundSet",
				"MBT_01_Tracks_05_INT_SoundSet",
				"MBT_01_Tracks_06_INT_SoundSet",
				"MBT_01_Interior_Tone_Engine_Off_SoundSet",
				"MBT_01_Interior_Tone_Engine_On_SoundSet",
				"MBT_01_Rattling_INT_SoundSet",
				"MBT_01_Rain_INT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_INT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_INT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_INT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_INT_SoundSet",
				"MBT_01_Drive_Water_INT_SoundSet",
				"MBT_01_Drive_Dirt_INT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Int_01_SoundSet",
				"Tracks_Surface_Soft_Int_SoundSet",
				"Tracks_Surface_Sand_Int_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Int_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Int_SoundSet",
				"Tanks_Material_Strain_Int_SoundSet",
				"Tank_General_Collision_Int_SoundSet"
			};
			soundSetsExt[] = 
			{
				"BNA_KC_Engine_RPM0_EXT_SoundSet",
				"BNA_KC_Engine_RPM1_EXT_SoundSet",
				"BNA_KC_Engine_RPM2_EXT_SoundSet",
				"BNA_KC_Engine_RPM3_EXT_SoundSet",
				"BNA_KC_Engine_RPM4_EXT_SoundSet",
				"BNA_KC_Engine_RPM5_EXT_SoundSet",
				"BNA_KC_Engine_RPM6_EXT_SoundSet",
				//"MBT_01_Engine_EXT_Burst_SoundSet",
				"MBT_01_Tracks_01_EXT_SoundSet",
				"MBT_01_Tracks_02_EXT_SoundSet",
				"MBT_01_Tracks_03_EXT_SoundSet",
				"MBT_01_Tracks_04_EXT_SoundSet",
				"MBT_01_Tracks_05_EXT_SoundSet",
				"MBT_01_Tracks_06_EXT_SoundSet",
				"MBT_01_Rain_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Brake_Soft_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Hard_EXT_SoundSet",
				"MBT_01_Tracks_Turn_Soft_EXT_SoundSet",
				"MBT_01_Drive_Water_EXT_SoundSet",
				"MBT_01_Drive_Dirt_EXT_SoundSet",
				"",
				"Tracks_Movement_Dirt_Ext_01_SoundSet",
				"Tracks_Surface_Soft_Ext_SoundSet",
				"Tracks_Surface_Sand_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Soft_Ext_SoundSet",
				"Tracks_Surface_Squeaks_Hard_Ext_SoundSet",
				"Tank_General_Collision_SoundShader"
			};
		};

		// Vehicle Inventory
		maximumLoad = 20000; // Max carrying capacity of the vic

		class TransportWeapons
		{
			class _xx_Aux501_Weaps_DC15S
			{
				count = 2;
				weapon = "Aux501_Weaps_DC15S";
			};
		};
			
		class TransportMagazines
		{
			class _xx_Aux501_Weapons_Mags_10mw50
			{
				count = 20;
				magazine = "Aux501_Weapons_Mags_10mw50";
			};
		};
			
		class TransportItems
		{
			class _xx_ACE_elasticBandage
			{
				count = 10;
				name = "ACE_elasticBandage";
			};
			class _xx_ACE_packingBandage
			{
				count = 10;
				name = "ACE_packingBandage";
			};
			class _xx_ACE_quikclot
			{
				count = 10;
				name = "ACE_quikclot";
			};
			class _xx_ACE_surgicalKit
			{
				count = 1;
				name = "ACE_surgicalKit"
			};
			class _xx_ToolKit
			{
				count = 1;
				name = "ToolKit"
			};
		};

		// Add an extra spare track item
        // Items added this way do not replace the vehicle's base cargo
        // ACE by default will add one spare track / wheel (via script)
        // To fully replace the cargo, use ace_cargo_fnc_removeCargoItem and ace_cargo_fnc_addCargoItem
		class ACE_Cargo
		{
            class Cargo
			{
                class Track
				{
                    type = "ACE_Track";
                    amount = 1;
                };
                // Example for adding resupply boxes
                // class BNA_KC_Resupply_SquadAmmo
				// {
                //     type = "BNA_KC_Resupply_SquadAmmo";
                //     amount = 2;
                // };
            };
        };
	};


    class APC_Wheeled_01_base_F;
	class B_APC_Wheeled_01_base_F: APC_Wheeled_01_base_F
	{
		class Turrets;
	};
	class B_APC_Wheeled_01_cannon_F: B_APC_Wheeled_01_base_F
	{
		class Turrets: Turrets
		{
			class MainTurret;
		};
	};
	class BNA_KC_APC_Badger: B_APC_Wheeled_01_cannon_F
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        armor = 600;

        displayName = "[KC] Badger APC";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				weapons[] = 
				{
					"BNA_KC40mm_CTWS",
					"BNA_KC_Coax"
				};
				magazines[] = 
				{
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"60Rnd_40mm_GPR_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"40Rnd_40mm_APFSDS_Tracer_Red_shells",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag",
					"BNA_KC_100rnd_Coax_Mag"
				};
			};
		};
		hiddenSelectionsTextures[] = 
		{
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_Body.paa",
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_Addons.paa",
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_Tows.paa",
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_Camonet_Desert.paa",
			"BNA_KC_Vehicles\Armored\Data\Badger\BNA_KC_APC_CageSand.paa"
		};
		soundEngineOnInt[] = 
		{
			"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCStartup",
			0.79432821,
			1
		};
		soundEngineOffInt[] = 
		{
			"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCShutdown.wss",
			0.79432821,
			1
		};
		soundEngineOnExt[] = 
		{
			"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCStartup",
			1,
			1,
			100
		};
		soundEngineOffExt[] = 
		{
			"BNA_KC_Vehicles\VehicleSounds\Data\Audio\APC\APCShutdown.wss",
			1,
			1,
			100
		};
		class Sounds
		{
			soundSetsInt[] = 
			{
				"APC_Wheeled_01_Engine_RPM0_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM1_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM2_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM3_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM4_INT_SoundSet",
				"APC_Wheeled_01_Engine_RPM5_INT_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_Off_SoundSet",
				"APC_Wheeled_01_Interior_Tone_Engine_On_SoundSet",
				"APC_Wheeled_01_Rattling_INT_SoundSet",
				"APC_Wheeled_01_Stress_INT_SoundSet",
				"APC_Wheeled_01_Rain_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_INT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_INT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_INT_SoundSet"
			};
			soundSetsExt[] = 
			{
				"BNA_KC_APC_Engine_RPM0_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM1_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM2_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM3_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM4_EXT_SoundSet",
				"BNA_KC_APC_Engine_RPM5_EXT_SoundSet",
				"APC_Wheeled_01_Rattling_EXT_SoundSet",
				"APC_Wheeled_01_Stress_EXT_SoundSet",
				"APC_Wheeled_01_Rain_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Fast_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Rock_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Grass_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Sand_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Gravel_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Mud_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Asphalt_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Water_Slow_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Turn_Soft_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Hard_EXT_SoundSet",
				"APC_Wheeled_01_Tires_Brake_Soft_EXT_SoundSet"
			};
		};
	};


    class APC_Wheeled_02_base_F;
    class APC_Wheeled_02_base_v2_F: APC_Wheeled_02_base_F
    {
        class Turrets;
    };
    class O_APC_Wheeled_02_rcws_v2_F: APC_Wheeled_02_base_v2_F
    {
        class Turrets: Turrets
        {
            class MainTurret;
        };
    };
    class BNA_KC_APC_OLV20: O_APC_Wheeled_02_rcws_v2_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        crew = "BNA_KC_Unit_Phase2_Tanker";
        side = 1;

        displayName = "[KC] OLV-20 APC";

        BNA_KC_EMP_Radius_Droid = 25;
        BNA_KC_EMP_Radius_Deka = 25;
        BNA_KC_EMP_Radius_Vehicle = 25;

        hiddenSelectionsTextures[] = {};
        textureList[] = {"CamoKC", 1, "CamoBrown", 0, "CamoGrey", 0};

        class TextureSources
        {
            class CamoKC
            {
                author = "SweMonkey and DartRuffian";
                displayName = "Keeli Company Camo";
                factions[] = { "BNA_KC_Faction" };
                textures[] =
                {
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Hull.paa",
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Wheels.paa",
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Turret.paa",
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };          
            class CamoBrown: CamoKC
            {
                displayName = "Brown Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Hull_CamoBrown.paa",
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Wheels_CamoBrown.paa",
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Turret_CamoBrown.paa",
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };
            class CamoGrey: CamoKC
            {
                displayName = "Grey Camo";
                textures[] =
                {
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Hull_CamoGrey.paa",
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Wheels_CamoGrey.paa",
                    "BNA_KC_Vehicles\Armored\Data\OLV20\BNA_KC_OLV20_Turret_CamoGrey.paa",
                    "", // Camo Net Texture
                    ""  // Cage Texture
                };
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                weapons[] =
                {
                    "BNA_KC_Coax",
                    "GMG_40mm",
                    "SmokeLauncher"
                };
                magazines[] =
                {
                    "BNA_KC_500rnd_Coax_Mag",
                    "BNA_KC_500rnd_Coax_Mag",
                    "BNA_KC_500rnd_Coax_Mag",
                    "96Rnd_40mm_G_belt",
                    "96Rnd_40mm_G_belt",
                    "SmokeLauncherMag"
                };
                // magazines[] =
                // {
                //     "96Rnd_40mm_G_belt",
                //     "96Rnd_40mm_G_belt",
                //     "200Rnd_127x99_mag_Tracer_Green",
                //     "200Rnd_127x99_mag_Tracer_Green",
                //     "200Rnd_127x99_mag_Tracer_Green",
                //     "200Rnd_127x99_mag_Tracer_Green",
                //     "SmokeLauncherMag"
                // };
            };
        };
    
        class UserActions
        {
            class ActivateEMP
            {
                displayName = "<t font='RobotoCondensedBold'>Activate EMP</t>";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\iconLightning_ca.paa'>";
                position = "pilotview";
                radius = 100;
                priority = 100;
                hideOnUse = 1;

                condition = "ls_player == currentPilot this and isEngineOn this;";
                statement = "this call BNAKC_fnc_ActivateEMP;";
            };
        };
    };


    class 3as_saber_m1;
    class BNA_KC_Saber_M1: 3as_saber_m1
	{
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] TX-130 Saber Tank";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Vehicles\Armored\Data\Saber\BNA_KC_Saber_Body.paa",
			"BNA_KC_Vehicles\Armored\Data\Saber\BNA_KC_Saber_Weapons.paa"
		};
	};

    class 3as_ATTE_base;
    class BNA_KC_ATTE: 3as_ATTE_base
	{
		// Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] AT-TE";
		crew = "BNA_KC_Unit_Phase2_Tanker";
		hiddenSelectionsTextures[] =
		{
			"BNA_KC_Vehicles\Armored\Data\ATTE\BNA_KC_ATTE_Body.paa",
			"3as\3as_atte\data\atte_chasis_co.paa",
			"BNA_KC_Vehicles\Armored\Data\ATTE\BNA_KC_ATTE_Cockpit.paa",
			"BNA_KC_Vehicles\Armored\Data\ATTE\BNA_KC_ATTE_Turrets.paa",
			"3as\3as_atte\data\atte_underpiping_co.paa",
			"3as\3as_atte\data\atte_middleleg_co.paa"
		};

        // Scrollwheel Actions
        class UserActions
        {
            class PlayAlarm
            {
                displayName = "<t font='RobotoCondensedBold' color='#ffffff'>Play Alarm</t>";
                displayNameDefault = "<img size=2 image='\a3\Modules_F_Curator\Data\portraitSound_ca.paa'>";
                position = "pilotview";
                radius = 100;
                priority = 100;
                hideOnUse = 0;

                condition = "ls_player == currentPilot this;";
                // statement = "_sound = floor (random 3); playSound3D [format['BNA_KC_Vehicles\VehicleSounds\Data\Audio\Juggernaut\horn_%1%2', _sound, '.ogg'], this, false, getPosASL this, 5, 1, 50];";
                statement = "playSound3D ['BNA_KC_Vehicles\VehicleSounds\Data\Audio\ATTE\alarm.ogg', this, false, getPosASL this, 100, 1, 100];";
            };
        };

        // Horns don't work on vehicles with a simulation other than "carx"
        // weapons[] = { "BNA_KC_ATTE_Alarm" };

        ace_cargo_space = 10;

        // Makes the 3AS AT-TE compatible with the vanilla vehicle-in-vehicle system
        // Credit: CrimzonKat @ https://ptb.discord.com/channels/461042140756180992/1062396582848372807
        class VehicleTransport
        {
            class Cargo
            {
                parachuteClass = B_Parachute_02_F;
                parachuteHeightLimit = 40;                
                canBeTransported = 1;                
                dimensions[] = { "ftr_muzzle", "btl_muzzle" };

                BNA_KC_SpecialLoad = 1; // The standard "Load Vehicle" option doesn't appear, requiring a custom script to work
            };
        };
	};

    class 3AS_Jug_base_F;
    class 3AS_B_Jug_01_base_F: 3AS_Jug_base_F
    {
        class HitPoints;
    };
    class 3as_Jug: 3AS_B_Jug_01_base_F
    {
        class HitPoints: HitPoints
        {
            class HitBody;
            class HitHull;
        };
    };
    class BNA_KC_Juggernaut: 3as_Jug
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VArmored";

        displayName = "[KC] HAVw A6 Juggernaut";
        crew = "BNA_KC_Unit_Phase2_Tanker";

        ace_cargo_space = 20;

        weapons[] =
        {
            "BNA_KC_Juggernaut_Horn",
            "BNA_KC_Juggernaut_Alarm"
        };

        // Look at https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection for info on what each value does
        class HitPoints: HitPoints
        {
            class HitBody: HitBody
            {
                armor = 2;
                explosionShielding = 0.15;
            };
            class HitHull: HitHull
            {
                armor = 2;
                explosionShielding = 0.85;
            };
        };
        /* Original Values
        class HitBody: HitBody
        {
            armor = 1;
            explosionShielding = 0.2;
            minimalHit = 0.1;
            passThrough = 0.5;
        };
        class HitHull: HitHull
        {
            armor = 2;
            explosionShielding = 1.5;
            minimalHit = 0.1;
            passThrough = 0;
        };
        */
    };
};


class CfgEditorSubcategories
{
	class BNA_KC_SubCat_VArmored
	{
		dlc = "BNA_KC";
		author = "SweMonkey and DartRuffian";
		scope = 2;
		scopeCurator = 2;
		displayName = "Vehicles - Armored";
	};
};