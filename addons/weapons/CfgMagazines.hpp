class CfgMagazines {
    class VehicleMagazine;
    class GVAR(gunpod_magazine) : VehicleMagazine {
        scope = 1;
        displayName = "GAU-22/A";
        displayNameShort = "GAU-22/A";
        ammo = "B_30mm_AP";
        count = 180;
        initSpeed = 1036;
        tracersEvery = 1;
        nameSound = "cannon";
    };
    class GVAR(gunpod_pylon) : VehicleMagazine {
        displayName = "GAU-22/A Pod";
        displayNameShort = "25mm";
        descriptionShort = "25mm External Gun Pod\n  Capacity: 220 rounds" ammo = "B_30mm_AP_Tracer_Red";
        count = 180;
        mass = 104;
        tracersEvery = 3;
        initSpeed = 1036;
        muzzlePos = "muzzle_start";
        muzzleEnd = "muzzle_end";
        model = QPATHTOF(data\uksf_f35_weapons_gunpod.p3d);
        pylonWeapon = QGVAR(gunpod);
        hardpoints[] = { QGVAR(gunpod) };
    };
};
