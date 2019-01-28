class CfgVehicles {
    class Plane_Base_F;
    class Plane_Fighter_01_Base_F : Plane_Base_F {
        class Components;
        class HitPoints;
    };
    class GVAR(base) : Plane_Fighter_01_Base_F {
        scope = 1;
        author = QUOTE(UKSF);
        displayName = "F-35B Lightning II Base";
        unitInfoType = "RscUnitInfoAirPlaneNoSpeed";
        unitInfoTypeLite = "RscUnitInfoAirPlaneNoSpeed";
        driverWeaponsInfoType = "RscOptics_CAS_01_TGP";
        driverAction = QGVAR(pilot);
        getinAction = QGVAR(pilot_enter);
        getoutaction = QGVAR(pilot_exit);
        model = QPATHTOF(data\uksf_f35_plane_base.p3d);
        hiddenSelections[] = { "camo1", "name", "screen_L", "screen_L2", "screen_R", "screen_R2", "screen_LB", "screen_RB", "Back_Panel" };
        class Damage {
            tex[] = {};
            mat[] = {
                QPATHTOF(data\exterior_1.rvmat),
                QPATHTOF(data\exterior_1_damage.rvmat),
                QPATHTOF(data\exterior_1_destruct.rvmat),
                QPATHTOF(data\exterior_2.rvmat),
                QPATHTOF(data\exterior_2_damage.rvmat),
                QPATHTOF(data\exterior_2_destruct.rvmat),
                QPATHTOF(data\exterior_3.rvmat),
                QPATHTOF(data\exterior_3_damage.rvmat),
                QPATHTOF(data\exterior_3_destruct.rvmat),
                QPATHTOF(data\exterior_glass.rvmat),
                QPATHTOF(data\exterior_glass_damage.rvmat),
                QPATHTOF(data\exterior_glass_damage.rvmat)
            };
        };
        armor = 90;
        threat[] = { 0.1, 1, 1 };
        camouflage = 20;
        audible = 20;
        radarTargetSize = 0.3;
        landingSpeed = 175;
        acceleration = 200;
        maxSpeed = 1930;
        driveOnComponent[] = {};
        wheelSteeringSensitivity = 1.2;
        gearUpTime = 6;
        gearDownTime = 5;
        altFullForce = 8000;
        altNoForce = 15500;
        showAllTargets = 2;
        waterLeakiness = 2.5;
        vtol = 1;
        VTOLPitchInfluence = 8;
        VTOLRollInfluence = 8;
        VTOLYawInfluence = 8;
        rudderInfluence = 0.15;
        draconicForceXCoef = 8.2;
        draconicForceYCoef = 2;
        draconicForceZCoef = 1;
        stallSpeed = 200;
        // envelope[] = { 0, 0.11, 0.43, 0.97, 1.72, 2.69, 3.87, 5.27, 6.89, 8.72, 9.7, 9.6, 9.2, 8.5, 8.2, 8 };  // f-18
        // envelope[] = { 0, 1, 1.5, 1.8, 3.8, 5.3, 5.5, 6.9, 5.2, 4.3, 5, 3.2, 0.5, 0 }; // f-35
        envelope[] = { 0, 0.43, 0.87, 1.3, 1.72, 2.69, 3.87, 5.27, 6.89, 8.72, 9.7, 9.6, 9.2, 8.5, 8.2, 8 };

        // thrustCoef[] = { 1.76, 1.69, 1.62, 1.68, 1.74, 1.81, 1.89, 1.95, 1.96, 1.96, 1.92, 1.4, 0.4, 0, 0, 0 };  // f-18
        // thrustCoef[] = { 1, 1.1, 1.3, 1.5, 1.9, 1.7, 1.4, 1.2, 1.2, 1.1, 1, 0.5, 0 }; // f-35
        thrustCoef[] = { 1.76, 1.69, 1.62, 1.68, 1.74, 1.81, 1.89, 1.95, 1.96, 1.96, 1.92, 1.4, 0.4, 0, 0, 0 };

        // elevatorCoef[] = { 0.3, 0.5, 0.66, 0.52, 0.49, 0.46, 0.43, 0.4, 0.35, 0.3, 0.25, 0.18, 0.17, 0.16, 0.15, 0.15 };  // f-18
        // elevatorCoef[] = { 0.6, 0.9, 1.0, 1.1, 1.0, 0.8, 0.5 }; // f-35
        elevatorCoef[] = { 0.5, 0.72, 0.7, 0.66, 0.52, 0.49, 0.46, 0.43, 0.4, 0.35, 0.3, 0.25, 0.18, 0.17, 0.16, 0.15 };

        // aileronCoef[] = { 0.4, 0.5, 0.8, 0.95, 1.02, 1.04, 1.03, 1.01, 1, 0.7, 0.6, 0.55, 0.5, 0.45, 0.4, 0.35 };  // f-18
        // aileronCoef[] = { 0.2, 1.5, 1.7, 1.8, 1.9, 1.9, 1.9, 1.9, 1.9, 1.8, 1.7, 1.6, 1.5 }; // f-35
        aileronCoef[] = { 0.5, 0.8, 0.95, 1.02, 1.04, 1.06, 1.04, 1.03, 1.01, 1, 0.7, 0.6, 0.55, 0.5, 0.45, 0.4 };

        // rudderCoef[] = { 0.5, 1.8, 2.6, 2.75, 2.8, 2.85, 2.9, 2.95, 2.98, 3.01, 2.7, 1.1, 0.9, 0.7, 0.5, 0.3 };  // f-18
        // rudderCoef[] = { 0.7, 1.5, 4, 3, 2, 1, 0.6 }; // f-35
        rudderCoef[] = { 0.5, 1.8, 2.6, 2.75, 2.8, 2.85, 2.9, 2.95, 2.98, 3.01, 2.7, 1.1, 0.9, 0.7, 0.5, 0.3 };
        angleOfIndicence = "rad 1";
        landingAoa = "rad 10";
        flapsFrictionCoef = 0.4;
        airBrake = 1;
        brakeDistance = 65;
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
                initPhase = 0;
            };
            class afterburner_stretch {
                source = "user";
                animPeriod = 1e-30;
                initPhase = 0;
            };
            class refuel_hatch_1 {
                animPeriod = 4;
                source = "user";
                initPhase = 0;
            };
            class lights_formation {
                animPeriod = 1;
                source = "user";
                initPhase = 1;
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
            class ejection_seat_hide : canopy_hide {};
            class ejection_seat_motion {
                source = "user";
                animPeriod = 0.25;
                initPhase = 0;
            };
            class Damper_1_source {
                source = "damper";
                wheel = "Wheel_1";
            };
            class Damper_2_source {
                source = "damper";
                wheel = "Wheel_2";
            };
            class Damper_3_source {
                source = "damper";
                wheel = "Wheel_3";
            };
            class Wheel_1_source {
                source = "wheel";
                wheel = "Wheel_1";
            };
            class Wheel_2_source {
                source = "wheel";
                wheel = "Wheel_2";
            };
            class Wheel_3_source {
                source = "wheel";
                wheel = "Wheel_3";
            };
            class CollisionLightGreen_source {
                source = "MarkerLight";
                markerLight = "CollisionLightGreen";
            };
            class CollisionLightGreenWhite_source {
                source = "MarkerLight";
                markerLight = "CollisionLightGreenWhite";
            };
            class CollisionLightRed_source {
                source = "MarkerLight";
                markerLight = "CollisionLightRed";
            };
            class CollisionLightRedWhite_source {
                source = "MarkerLight";
                markerLight = "CollisionLightRedWhite";
            };
            class HitAvionics {
                source = "Hit";
                hitpoint = "HitAvionics";
                raw = 1;
            };
            class HitEngine {
                source = "Hit";
                hitpoint = "HitEngine";
                raw = 1;
            };
            class HitEngine2 {
                source = "Hit";
                hitpoint = "HitEngine2";
                raw = 1;
            };
            class ext_pylons_hide {
                animPeriod = 1e-30;
                source = "user";
                initPhase = 0;
            };
            class GBU53_deploy {
                animPeriod = 1;
                source = "user";
                initPhase = 0;
            };
            class GBU53_roll {
                animPeriod = 1;
                source = "user";
                initPhase = 0;
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
                animPeriod = 0;
                source = "user";
                initPhase = 0;
            };
            class mfd_fuel_slider_large {
                animPeriod = 1e-30;
                source = "user";
                initPhase = 0;
            };
            class mfd_fuel_hiders {
                animPeriod = 1e-30;
                source = "user";
                initPhase = 0;
            };
            class mfd_fuel_hiders2 {
                animPeriod = 1e-30;
                source = "user";
                initPhase = 0;
            };
            class switch_GPS_TGT_CLEAR {
                source = "user";
                animPeriod = 0.001;
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
                innerAngle = 30;
                outerAngle = 90;
                coneFadeCoef = 10;
                intensity = 100;
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
        class MarkerLights {
            class CollisionLightGreen {
                color[] = { 0, 0.8, 0 };
                ambient[] = { 0, 0.1, 0 };
                name = "lights_collision_green_pos";
                intensity = 100;
                drawLight = 1;
                drawLightSize = 0.25;
                drawLightCenterSize = 0.05;
                activeLight = 0;
                blinking = 1;
                blinkingStartsOn = 1;
                blinkingPattern[] = { 1, 1.5 };
                blinkingPatternGuarantee = 1;
                dayLight = 0;
                useFlare = 0;
                class Attenuation {
                    start = 0;
                    constant = 0;
                    linear = 25;
                    quadratic = 50;
                    hardLimitStart = 0.75;
                    hardLimitEnd = 1;
                };
            };
            class CollisionLightGreenWhite : CollisionLightGreen {
                color[] = { 1, 1, 1 };
                ambient[] = { 0.05, 0.05, 0.05 };
                blinkingStartsOn = 0;
                blinkingPattern[] = { 1.5, 1 };
                drawLightSize = 0.3;
            };
            class CollisionLightRed : CollisionLightGreen {
                color[] = { 0.8, 0, 0 };
                ambient[] = { 0.1, 0, 0 };
                name = "lights_collision_red_pos";
            };
            class CollisionLightRedWhite : CollisionLightGreenWhite {
                name = "lights_collision_red_pos";
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
            EjectionSeatClass = QGVAR(ejection_seat);
            CanopyClass = QGVAR(canopy);
            EjectionSeatHideAnim = "ejection_seat_hide";
            EjectionSeatRailAnim = "ejection_seat_motion";
            CanopyHideAnim = "canopy_hide";
            EjectionSeatPos = "pos_eject";
            CanopyPos = "pos_eject_canopy";
            EjectionSoundExt = "Plane_Fighter_01_ejection_ext_sound";
            EjectionSoundInt = "Plane_Fighter_01_ejection_in_sound";
            EjectionParachute = "Steerable_Parachute_F";
            EjectionSeatForce = 50;
            CanopyForce = 30;
        };
        soundSetSonicBoom[] = { QGVAR(sonicboom_soundset) };
        class Sounds {
            soundSets[] = {
                QGVAR(enginelowext_soundset),
                QGVAR(enginehighext_soundset),
                QGVAR(forsageext_soundset),
                QGVAR(windnoiseext_soundset),
                QGVAR(engineext_middle_soundset),
                QGVAR(engineext_dist_front_soundset),
                QGVAR(engineext_dist_rear_soundset),
                "Plane_Fighter_04_EngineLowInt_SoundSet",
                "Plane_Fighter_04_EngineHighInt_SoundSet",
                "Plane_Fighter_04_ForsageInt_SoundSet",
                "Plane_Fighter_04_WindNoiseInt_SoundSet",
                "Plane_Fighter_04_VelocityInt_SoundSet"
            };
        };
        maxOmega = 2000;
        class Wheels {
            class Wheel_1 {
                boneName = "Wheel_1";
                steering = 1;
                side = "left";
                center = "Wheel_1_center";
                boundary = "Wheel_1_rim";
                width = 0.4;
                mass = 80;
                MOI = 8.09629;
                dampingRate = 0.25;
                dampingRateDamaged = 1;
                dampingRateDestroyed = 1000;
                maxBrakeTorque = 6000;
                suspTravelDirection[] = { 0, -0.7, 0 };
                suspForceAppPointOffset = "Wheel_1_center";
                tireForceAppPointOffset = "Wheel_1_center";
                maxCompression = 0.2;
                maxDroop = 0.15;
                sprungMass = 8350;
                springStrength = 835000;
                springDamperRate = 16700;
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
                mass = 80;
                width = 0.6;
                maxCompression = 0.2;
                maxDroop = 0.2;
                sprungMass = 4175;
                springStrength = 417500;
                springDamperRate = 83500;
                latStiffY = 50;
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
                visual = "";
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
                visual = "";
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
                visual = "";
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
                name = "HitAvionics";
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
                name = "HitGlass1";
                visual = "glass_1";
            };
        };
        weapons[] = { "UK3CB_BAF_Safe", "CMFlareLauncher_Singles" };
        magazines[] = { "240Rnd_CMFlare_Chaff_Magazine" };
        class ViewPilot {
            initFov = 1;
            minFov = 0.6;
            maxFov = 1;
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
            speedZoomMaxSpeed = 0;
            speedZoomMaxFOV = 1;
        };
        class UserActions {
            class Plane_Fighter_01_Eject {
                priority = 0.05;
                shortcut = "Eject";
                displayName = "Eject";
                condition = "player in this && {speed this > 1}";
                statement = "[this] spawn bis_fnc_planeEjection";
                position = "pilotcontrol";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                hideOnUse = 1;
            };
            delete Plane_Fighter_01_tailhook_down;
            delete Plane_Fighter_01_tailhook_up;
            delete Plane_Fighter_01_fold_wings;
            delete Plane_Fighter_01_unfold_wings;
        };
        tailHook = 0;
        delete CarrierOpsCompatability;
        #include "includes\Components.hpp"
    };
    class GVAR(raf) : GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35B Lightning II";
        //faction = "CUP_B_GB";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\exterior_1_co.paa),
            QPATHTOF(data\name_0_ca.paa),
            QPATHTOF(data\interior_mfd_engine_co.paa),
            QPATHTOF(data\interior_mfd_fcs_co.paa),
            QPATHTOF(data\interior_mfd_sms_co.paa),
            QPATHTOF(data\interior_mfd_fuel_ca.paa),
            QPATHTOF(data\interior_mfd_co.paa),
            QPATHTOF(data\interior_mfd_co.paa),
            "#(rgb,8,8,3)color(0,0,0,0)"
        };
    };
    class GVAR(usmc) : GVAR(base) {
        scope = 2;
        scopeCurator = 2;
        displayName = "F-35B Lightning II";
        //faction = "CUP_B_USMC";
        hiddenSelectionsTextures[] = {
            QPATHTOF(data\exterior_1_usmc_co.paa),
            QPATHTOF(data\name_0_ca.paa),
            QPATHTOF(data\interior_mfd_engine_co.paa),
            QPATHTOF(data\interior_mfd_fcs_co.paa),
            QPATHTOF(data\interior_mfd_sms_co.paa),
            QPATHTOF(data\interior_mfd_fuel_ca.paa),
            QPATHTOF(data\interior_mfd_co.paa),
            QPATHTOF(data\interior_mfd_co.paa),
            "#(rgb,8,8,3)color(0,0,0,0)"
        };
    };
    class Plane_Canopy_Base_F;
    class GVAR(canopy) : Plane_Canopy_Base_F {
        scope = 1;
        author = QUOTE(UKSF);
        displayName = "F-35 Canopy";
        model = QPATHTOF(data\uksf_f35_plane_canopy.p3d);
    };
    class B_Ejection_Seat_Plane_Fighter_01_F;
    class GVAR(ejection_seat) : B_Ejection_Seat_Plane_Fighter_01_F {
        author = QUOTE(UKSF);
        model = QPATHTOF(data\uksf_f35_plane_ejection_seat.p3d);
    };
    class Plane_Fighter_01_wreck_F;
    class GVAR(wreck) : Plane_Fighter_01_wreck_F {
        author = QUOTE(UKSF);
        model = QPATHTOF(data\uksf_f35_plane_wreck.p3d);
    };
};
