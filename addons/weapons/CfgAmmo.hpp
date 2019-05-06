class CfgAmmo {
    class B_35mm_AA;
    class GVAR(gunpod_25mm_apex) : B_35mm_AA {
        warheadName = "APEX";
        ace_rearm_caliber = 25;
        caliber = 7;
        typicalSpeed = 970;
        hit = 80;
        indirectHit = 10;
        indirectHitRange = 1.5;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerEndTime = 3;
        class CamShakeExplode {
            power = 6;
            duration = 1;
            frequency = 20;
            distance = 67.8178;
        };
        class CamShakeHit {
            power = 30;
            duration = 0.4;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire {
            power = 2.34035;
            duration = 1;
            frequency = 20;
            distance = 43.8178;
        };
        class CamShakePlayerFire {
            power = 0.01;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
};
