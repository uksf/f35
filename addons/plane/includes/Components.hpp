class Components : Components {
    class TransportPylonsComponent {
        UIPicture = QPATHTOF(data\ui\loadout.paa);
        class presets {
            class empty {
                displayName = "Empty";
                attachment[] = { "", "", "", "", "", "", "", "", "", "", "" };
            };
        };
        class pylons {
            class pylons1 {
                // left wingtip
                maxweight = 300;
                hardpoints[] = {
                    "B_BIM9X_RAIL",
                    "B_BIM9X_DUAL_RAIL",
                    "B_AMRAAM_D_RAIL",
                    "B_AMRAAM_D_DUAL_RAIL",
                };
                attachment = "PylonRack_Missile_BIM9X_x1";
                priority = 5;
                UIposition[] = { (0.836) / 1.5, 0.3 };
            };
            class pylons2 : pylons1 {
                UIposition[] = { (0.739) / 1.5, 0.25 };
                hardpoints[] = {
                    "B_BIM9X_RAIL",
                    "B_BIM9X_DUAL_RAIL",
                    "B_AMRAAM_D_RAIL",
                    "B_AMRAAM_D_DUAL_RAIL",
                    "B_GBU12",
                    "B_GBU12_DUAL_RAIL"
                };
                maxweight = 2500;
                attachment = "PylonMissile_Bomb_GBU12_x1";
                priority = 4;
            };
            class pylons3 : pylons2 {
                UIposition[] = { (0.626) / 1.5, 0.2 };
                hardpoints[] = {
                    "B_BIM9X_RAIL",
                    "B_BIM9X_DUAL_RAIL",
                    "B_AMRAAM_D_RAIL",
                    "B_AMRAAM_D_DUAL_RAIL",
                    "B_GBU12",
                    "B_GBU12_DUAL_RAIL"
                };
                maxweight = 5000;
                attachment = "PylonMissile_Bomb_GBU12_x1";
                priority = 3;
            };
            class pylons4 : pylons3 {
                //door 1 outer
                UIposition[] = { (0.626) / 1.5, 0.4 };
                hardpoints[] = { "B_BIM9X", "B_AMRAAM_D_INT" };
                maxweight = 350;
                attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
                priority = 2;
                bay = 1;
            };
            class pylons5 : pylons4 {
                //door 1 inner
                UIposition[] = { (0.626) / 1.5, 0.45 };
                hardpoints[] = { "B_GBU12" };
                maxweight = 2000;
                attachment = "PylonMissile_Bomb_GBU12_x1";
                priority = 1;
            };
            class pylons6 : pylons5 {
                //door 2 inner
                UIposition[] = { (0.374) / 1.5, 0.45 };
                mirroredMissilePos = 5;
            };
            class pylons7 : pylons4 {
                //door 2 outer
                UIposition[] = { (0.374) / 1.5, 0.4 };
                mirroredMissilePos = 4;
            };
            class pylons8 : pylons3 {
                UIposition[] = { (0.374) / 1.5, 0.2 };
                mirroredMissilePos = 3;
            };
            class pylons9 : pylons2 {
                UIposition[] = { (0.261) / 1.5, 0.25 };
                mirroredMissilePos = 2;
            };
            class pylons10 : pylons1 {
                // right wingtip
                UIposition[] = { (0.164) / 1.5, 0.30 };
                mirroredMissilePos = 1;
            };
            class pylons11 : pylons1 {
                //center gunpod
                UIposition[] = { (0.5) / 1.5, 0.35 };
                hardpoints[] = { QEGVAR(weapons,gunpod) };
                attachment = QEGVAR(weapons,gunpod_pylon);
                maxweight = 112;
            };
        };
        class bays {
            class bay {
                bayOpenTime = 0.5;
                openBayWhenWeaponSelected = 1;
                autoCloseWhenEmptyDelay = -1;
            };
        };
    };
};
