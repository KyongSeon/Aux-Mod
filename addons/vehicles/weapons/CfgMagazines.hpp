class CfgMagazines
{
    class CLASS(Mag_Base);
    class CLASS(Mag_VehicleBase): CLASS(Mag_Base)
    {
        type = TYPE_DEFAULT;
        weaponPoolAvailable = FALSE;
        mass = 8;
    };

    class 30Rnd_120mm_HE_shells_Tracer_Red;
    class BNA_KC_120_HE_Mag: 30Rnd_120mm_HE_shells_Tracer_Red
    {
        displayName = "HE Ammunition";
        displayNameShort = "HE";
        descriptionShort = "HE";
        count = 20;
        ammo = "BNA_KC_120_HE_Ammo";
    };

    class 20Rnd_120mm_APFSDS_shells_Tracer_Red;
    class BNA_KC_120_AT_Mag: 20Rnd_120mm_APFSDS_shells_Tracer_Red
    {
        displayName = "AP Ammunition";
        displayNameShort = "AP";
        descriptionShort = "AP";
        ammo = "BNA_KC_120_AT_Ammo";
    };

    class 20Rnd_120mm_HEAT_MP_T_Red;
    class BNA_KC_120_HEAT_Mag: 20Rnd_120mm_HEAT_MP_T_Red
    {
        displayName = "HEAT Ammunition";
        displayNameShort = "HEAT";
        descriptionShort = "HEAT";
        ammo = "BNA_KC_120_HEAT_Ammo";
    };

    class 100Rnd_127x99_mag_Tracer_Red;
    class BNA_KC_100rnd_Coax_Mag: 100Rnd_127x99_mag_Tracer_Red
    {
        ammo = "BNA_KC_Coax_Ammo";
        displayName = "100rnd Mag";
        displayNameShort = "100rnd Mag";
        descriptionShort = "100rnd Mag";
        tracersEvery=1;
    };
    class BNA_KC_500rnd_Coax_Mag: BNA_KC_100rnd_Coax_Mag
    {
        displayName = "500rnd Mag";
        displayNameShort = "500rnd Mag";
        descriptionShort = "500rnd Mag";

        count = 500;
    };
    class BNA_KC_1000rnd_Coax_Mag: BNA_KC_100rnd_Coax_Mag
    {
        displayName = "1000rnd Mag";
        displayNameShort = "1000rnd Mag";
        descriptionShort = "1000rnd Mag";

        count = 1000;
    };

    class CLASS(Mag_4000rnd_Gatling_20mm): CLASS(Mag_VehicleBase)
    {
        SCOPE_PUBLIC;
        displayNameShort = "High Energy";
        ammo = QCLASS(Bullet_PlasmaGatling_20mm_Blue);
        count = 4000;

        nameSound = "cannon";

        initSpeed = 1030;
        maxLeadSpeed = 83.3333;
        weight = 126;
    };

    class CLASS(Mag_100rnd_Cannon_105mm): CLASS(Mag_VehicleBase)
    {
        SCOPE_PUBLIC;
        displayNameShort = "High Energy";
        ammo = QCLASS(Bullet_PlasmaCannon_105mm_Green);
        count = 100;

        nameSound = "cannon";

        initSpeed = 1330;
        maxLeadSpeed = 25;
        muzzleImpulseFactor[] = {0.5, 3};
    };
    class 240Rnd_40mm_GPR_Tracer_Red_shells;
    class BNA_KC_40mm_GPR_240rnd: 240Rnd_40mm_GPR_Tracer_Red_shells
    {
        ammo = "BNA_KC_40mm_GPR_Ammo";
        tracersEvery=1;
    };
    class 160Rnd_40mm_APFSDS_Tracer_Red_shells;
    class BNA_KC_40mm_APFSDS_160rnd: 160Rnd_40mm_APFSDS_Tracer_Red_shells
    {
        ammo = "BNA_KC_40mm_APFSDS_Ammo";
        tracersEvery=1;
    };

    class CLASS(Mag_9999Rnd_ATRT): CLASS(Mag_Base)
    {
        SCOPE_HIDDEN;
        displayName = "[KC] AT-RT Turret Battery Pack";
        displayNameShort = "Standard Energy";
        descriptionShort = "Energy Cell Pack<br/>Used In AT-RT";
        ammo = QCLASS(Bullet_PlasmaATRT_Blue);

        picture = "\3AS\3AS_Weapons\Data\Textures\Energy_Cell_Arsenal.paa";

        initSpeed = 400;
        mass = 10;
    };
};