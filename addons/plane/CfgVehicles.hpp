class CfgVehicles {
    class Plane_Base_F;
    class Plane_Fighter_01_Base_F : Plane_Base_F {
        class Components;
        class HitPoints;
    };
    class GVAR(base) : Plane_Fighter_01_Base_F {
        scope = 2;
        author = QUOTE(UKSF);
        model = QPATHTOF(data\f35.p3d);
        displayName = "F-35B Lightning II";
        side = 1;
        faction = "CUP_B_GB";
        unitInfoType = "RscUnitInfoAirPlaneNoSpeed";
        unitInfoTypeLite = "RscUnitInfoAirPlaneNoSpeed";
        driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
        hiddenSelections[] = { "rendertarget0", "screen_L", "screen_L2", "screen_R", "screen_R2", "screen_LB", "screen_RB", "Back_Panel", "camo1", "camo2", "camo3", "camo4", "UAV_1", "SAR_1", "Target_1", "UAV_2", "SAR_2", "Target_2", "clan_sign", "word_1", "word_2", "word_3", "word_4", "word_5", "word_6", "word_7", "word_8", "word_9", "word_10" };
        hiddenSelectionsTextures[] = { "", QPATHTOF(data\interior_mfd_engine_co.paa), QPATHTOF(data\interior_mfd_fcs_co.paa), QPATHTOF(data\interior_mfd_sms_co.paa), QPATHTOF(data\interior_mfd_fuel_co.paa), QPATHTOF(data\interior_mfd_co.paa), QPATHTOF(data\interior_mfd_co.paa), "#(rgb,8,8,3)color(0,0,0,0)", QPATHTOF(data\exterior_1_co.paa), QPATHTOF(data\exterior_2_co.paa), QPATHTOF(data\exterior_3_co.paa), QPATHTOF(data\glass_ca.paa), "", "", "", "", "", "" };
        armor = 90;
        threat[] = { 0.1, 1, 1 };
        camouflage = 20;
        audible = 20;
        radarTargetSize = 0.3;
        landingSpeed = 200;
        acceleration = 225;
        maxSpeed = 1930;
        driveOnComponent[] = { "wheel_1", "wheel_2", "wheel_3" };
        wheelSteeringSensitivity = 1.2;
        gearUpTime = 6;
        gearDownTime = 5;
        altFullForce = 8000;
        altNoForce = 15500;
        showAllTargets = 2;
        waterLeakiness = 2.5;
        vtol = 1;
        VTOLPitchInfluence = 6;
        VTOLRollInfluence = 4;
        VTOLYawInfluence = 3;
        rudderInfluence = 0.15;
        elevatorSensitivity = 0.8;
        angleOfIndicence = "rad 1";
        draconicForceXCoef = 8.5;
        draconicForceYCoef = 1.5;
        brakeDistance = 150;
        landingAoa = "rad 10";
        flapsFrictionCoef = 0.4;
        memoryPointDriverOptics = "flir_pos";
        minFireTime = 30;
        memoryPointGun = "cannon";
        driverLeftHandAnimName = "throttle_stick";
        driverRightHandAnimName = "flight_stick";
        driverLeftLegAnimName = "pedal_left";
        driverRightLegAnimName = "pedal_right";
        memoryPointCM[] = { "FlareLauncher_1_pos" };
        memoryPointCMDir[] = { "FlareLauncher_1_dir" };
        memoryPointLDust = "WheelDust_left_pos";
        memoryPointRDust = "WheelDust_right_pos";
        class AnimationSources {
            class afterburner_hide {
                source = "user";
                animPeriod = 1e-30;
                initPhase = 1;
            };
            class afterburner_stretch {
                source = "user";
                animPeriod = 1e-30;
                initPhase = 0;
            };
            class refuel_hatch_1 {
                AnimPeriod = 4;
                source = "user";
                InitPhase = 0;
            };
            class refuel_hatch_2_a : refuel_hatch_1 {};
            class refuel_hatch_2_b : refuel_hatch_1 {};
            class refuel_limb : refuel_hatch_1 {};
            class refuel_hatch_1_int : refuel_hatch_1 {};
            class refuel_hatch_2_int_a : refuel_hatch_1 {};
            class refuel_hatch_2_int_b : refuel_hatch_1 {};
            class refuel_limb_int : refuel_hatch_1 {};
            class refuel_mfd : refuel_hatch_1 {};
            class formlights {
                AnimPeriod = 1;
                source = "user";
                InitPhase = 1;
            };
            class switch_GPS_TGT {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class fuel_hose {
                source = "user";
                initPhase = 0;
                animPeriod = 0.0001;
            };
            class service_menu_switch {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class rearming_done_switch {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class canopy_hide {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class ejection_seat_hide {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class ejection_seat_motion {
                source = "user";
                animPeriod = 0.25;
                initPhase = 0;
            };
            class switch_GPS_TGT_CLEAR {
                source = "user";
                animPeriod = 0.001;
                initPhase = 0;
            };
            class GBU53_deploy {
                animPeriod = 1;
                source = "user";
                InitPhase = 0;
            };
            class GBU53_roll {
                animPeriod = 1;
                source = "user";
                InitPhase = 0;
            };
            class Muzzle_flash {
                source = "ammorandom";
                weapon = "USAF_F35_CANNON_W";
            };
            class mfdpartshide {
                source = "user";
                animPeriod = 1e-30;
                initPhase = 0;
            };
            class mfd_fuel_slider_all_hider {
                AnimPeriod = 0;
                source = "user";
                InitPhase = 0;
            };
            class mfd_fuel_slider_large {
                AnimPeriod = 1e-30;
                source = "user";
                InitPhase = 0;
            };
            class mfd_fuel_hiders {
                AnimPeriod = 1e-30;
                source = "user";
                InitPhase = 0;
            };
            class mfd_fuel_hiders2 {
                AnimPeriod = 1e-30;
                source = "user";
                InitPhase = 0;
            };
            class ext_pylons_hide {
                animPeriod = 1e-30;
                source = "user";
                initPhase = 0;
            };
        };
        class Reflectors {
            class Front {
                color[] = { 7000, 7500, 10000, 1 };
                ambient[] = { 100, 100, 100 };
                position = "Light_front";
                direction = "Light_front_end";
                hitpoint = "Light_front";
                selection = "Light_front_hide";
                innerAngle = 10;
                outerAngle = 60;
                coneFadeCoef = 10;
                intensity = 50;
                useFlare = 1;
                dayLight = 0;
                FlareSize = 4;
                size = 1;
                class Attenuation {
                    start = 1;
                    constant = 0;
                    linear = 0;
                    quadratic = 4;
                    hardLimitStart = 150;
                    hardLimitEnd = 300;
                };
            };
        };
        class WingVortices {
            class WingTipLeft {
                effectName = "WingVortices";
                position = "body_vapour_L_E";
            };
            class WingTipRight {
                effectName = "WingVortices";
                position = "body_vapour_R_E";
            };
            class BodyLeft {
                effectName = QGVAR(BodyVortices);
                position = "body_vapour_L_S";
            };
            class BodyRight {
                effectName = QGVAR(BodyVortices);
                position = "body_vapour_R_S";
            };
        };
        class Exhausts {
            class Exhaust1 {
                position = "exhaust_pos";
                direction = "exhaust_dir";
                effect = "ExhaustsEffectJet";
            };
        };
        class EjectionSystem {
            EjectionSeatEnabled = 1;
            EjectionDual = 0;
            EjectionSeatClass = "B_Ejection_Seat_Plane_Fighter_01_F";
            CanopyClass = QGVAR(canopy);
            EjectionSeatHideAnim = "ejection_seat_hide";
            EjectionSeatRailAnim = "ejection_seat_motion";
            CanopyHideAnim = "canopy_hide";
            EjectionSeatPos = "eject_pos";
            CanopyPos = "eject_canopy_pos";
            EjectionSoundExt = "Plane_Fighter_01_ejection_ext_sound";
            EjectionSoundInt = "Plane_Fighter_01_ejection_in_sound";
            EjectionParachute = "Steerable_Parachute_F";
            EjectionSeatForce = 50;
            CanopyForce = 30;
        };
        class Wheels {
            class Wheel_1 {
                boneName = "Wheel_1";
                steering = 1;
                side = "left";
                center = "Wheel_1_center";
                boundary = "Wheel_1_rim";
                width = 0.4;
                mass = 998;
                MOI = 0.2;
                dampingRate = 0.1;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 6000;
                suspTravelDirection[] = { 0, -0.7, 0 };
                suspForceAppPointOffset = "Wheel_1_center";
                tireForceAppPointOffset = "Wheel_1_center";
                maxCompression = 0.2;
                maxDroop = 0.1;
                sprungMass = 8808;
                springStrength = 150427;
                springDamperRate = 22283;
                longitudinalStiffnessPerUnitGravity = 4000;
                latStiffX = 3;
                latStiffY = 20;
                frictionVsSlipGraph[] = { { 0, 1 }, { 0.5, 1 }, { 1, 1 } };
            };
            class Wheel_2 : Wheel_1 {
                boneName = "Wheel_2";
                steering = 0;
                center = "Wheel_2_center";
                boundary = "Wheel_2_rim";
                mass = 1122;
                width = 0.6;
                maxCompression = 0.2;
                maxDroop = 0.2;
                sprungMass = 8808;
                springStrength = 255042;
                springDamperRate = 23283;
                suspForceAppPointOffset = "Wheel_2_center";
                tireForceAppPointOffset = "Wheel_2_center";
            };
            class Wheel_3 : Wheel_2 {
                boneName = "Wheel_3";
                side = "right";
                center = "Wheel_3_center";
                boundary = "Wheel_3_rim";
                suspForceAppPointOffset = "Wheel_3_center";
                tireForceAppPointOffset = "Wheel_3_center";
            };
        };
        class HitPoints : HitPoints {
            class HitEngine {
                armor = 3;
                explosionShielding = 4.5;
                name = "HitEngine";
                passThrough = 0.8;
                visual = "Hit_Engine";
                radius = 1;
                minimalHit = 0.05;
                depends = "0";
                material = -1;
            };
            class HitEngine2 {
                armor = 3;
                explosionShielding = 4.5;
                name = "HitEngine2";
                passThrough = 0.8;
                visual = "Hit_Engine2";
                radius = 2;
                minimalHit = 0.05;
                depends = "0";
                material = -1;
            };
            class HitFuel {
                armor = 4;
                explosionShielding = 5;
                name = "HitFuel";
                passThrough = 0.6;
                visual = "Hit_Fuel";
                radius = 2;
                minimalHit = 0.05;
                depends = "0";
                material = -1;
            };
            class HitFuel2 {
                armor = 4;
                explosionShielding = 5;
                name = "HitFuel2";
                passThrough = 0.6;
                visual = "Hit_Fuel2";
                radius = 6;
                minimalHit = 0.05;
                depends = "0";
                material = -1;
            };
            class HitHull {
                armor = 100;
                explosionShielding = 1;
                radius = 9;
                passThrough = 0.5;
                name = "HitHull";
                visual = "fuselage";
                depends = "0";
                minimumHit = 0.05;
            };
            class HitAvionics {
                armor = 1.5;
                explosionShielding = 4;
                name = "avionics_hit";
                passThrough = 0.4;
                visual = "";
                radius = 0.3;
                minimalHit = 0.05;
                depends = "0";
                material = -1;
            };
            class HitGlass1 {
                armor = 3;
                explosionShielding = 2;
                radius = 0.5;
                passThrough = 0;
                name = "glass_1";
                visual = "glass_1";
                convexComponent = "glass_1";
            };
        };
        tailHook = 0;
        delete CarrierOpsCompatability;
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
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.001";
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
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.002";
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
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.003";
                    };
                    class pylons4 : pylons3 {
                        //door 1 outer
                        UIposition[] = { (0.626) / 1.5, 0.4 };
                        hardpoints[] = { "B_BIM9X", "B_AMRAAM_D_INT" };
                        maxweight = 350;
                        attachment = "PylonMissile_Missile_AMRAAM_D_INT_x1";
                        priority = 2;
                        bay = 1;
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.004";
                    };
                    class pylons5 : pylons4 {
                        //door 1 inner
                        UIposition[] = { (0.626) / 1.5, 0.45 };
                        hardpoints[] = { "B_GBU12" };
                        maxweight = 2000;
                        attachment = "PylonMissile_Bomb_GBU12_x1";
                        priority = 1;
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.005";
                    };
                    class pylons6 : pylons5 {
                        //door 2 inner
                        UIposition[] = { (0.374) / 1.5, 0.45 };
                        mirroredMissilePos = 5;
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.006";
                    };
                    class pylons7 : pylons4 {
                        //door 2 outer
                        UIposition[] = { (0.374) / 1.5, 0.4 };
                        mirroredMissilePos = 4;
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.007";
                    };
                    class pylons8 : pylons3 {
                        UIposition[] = { (0.374) / 1.5, 0.2 };
                        mirroredMissilePos = 3;
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.008";
                    };
                    class pylons9 : pylons2 {
                        UIposition[] = { (0.261) / 1.5, 0.25 };
                        mirroredMissilePos = 2;
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.009";
                    };
                    class pylons10 : pylons1 {
                        // right wingtip
                        UIposition[] = { (0.164) / 1.5, 0.30 };
                        mirroredMissilePos = 1;
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.010";
                    };
                    class pylons11 : pylons1 {
                        //center gunpod
                        UIposition[] = { (0.5) / 1.5, 0.35 };
                        memPoint = "\A3\Weapons_F\DynamicLoadout\PylonPod_3x_Missile_AGM_02_F.011";
                        hardpoints[] = {};
                        attachment = "";
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
        weapons[] = { "UK3CB_BAF_Safe", "CMFlareLauncher_Singles" };
        magazines[] = { "240Rnd_CMFlare_Chaff_Magazine" };
        class ViewPilot {
            minFov = 0.25;
            maxFov = 1.25;
            initFov = 0.75;
            initAngleX = 0;
            minAngleX = -75;
            maxAngleX = 85;
            initAngleY = 0;
            minAngleY = -170;
            maxAngleY = 170;
            minMoveX = -0.2;
            maxMoveX = 0.2;
            minMoveY = -0.1;
            maxMoveY = 0.1;
            minMoveZ = -0.2;
            maxMoveZ = 0.2;
        };
    };
    class Plane_Canopy_Base_F;
    class GVAR(canopy) : Plane_Canopy_Base_F {
        author = QUOTE(UKSF);
        mapSize = 2.36;
        displayName = "F-35 Canopy";
        model = QPATHTOF(data\f35_canopy.p3d);
    };
    class Plane_Fighter_03_wreck_F;
    class GVAR(wreck) : Plane_Fighter_03_wreck_F {
        author = QUOTE(UKSF);
        model = QPATHTOF(data\f35_wreck.p3d);
    };
};
