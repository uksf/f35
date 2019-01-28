class CfgSoundSets {
    class GVAR(sonicboom_soundset) {
        soundShaders[] = { "Plane_Fighter_SonicBoom_SoundShader" };
        volumeFactor = 4; // 2
        spatial = 1;
        loop = 0;
        speedOfSound = 0;
        sound3DProcessingType = "JetExt_Distant_3DProcessingType";
    };
    class GVAR(enginelowext_soundset) {
        soundShaders[] = { "Plane_Fighter_04_EngineLowExt_SoundShader" };
        volumeFactor = 1 * 1.5; // 1
        spatial = 1;
        loop = 1;
        sound3DProcessingType = "JetExt_Close_3DProcessingType";
    };
    class GVAR(enginehighext_soundset) {
        soundShaders[] = { "Plane_Fighter_04_EngineHighExt_SoundShader" };
        volumeFactor = 1.1 * 1.5; // 1.1
        spatial = 1;
        loop = 1;
        sound3DProcessingType = "JetExt_Close_3DProcessingType";
        occlusionFactor = 0.45;
        obstructionFactor = 0.35;
    };
    class GVAR(forsageext_soundset) {
        soundShaders[] = { "Plane_Fighter_04_ForsageExt_SoundShader" };
        volumeFactor = 1.15 * 1.5; // 1.15
        spatial = 1;
        loop = 1;
        volumeCurve = "InverseSquare1Curve";
        sound3DProcessingType = "JetExt_Close_3DProcessingType";
        occlusionFactor = 0.45;
        obstructionFactor = 0.35;
    };
    class GVAR(windnoiseext_soundset) {
        soundShaders[] = { "Plane_Fighter_04_WindNoiseExt_SoundShader" };
        volumeFactor = 1 * 1.5; // 1
        spatial = 1;
        loop = 1;
        sound3DProcessingType = "JetExt_Close_3DProcessingType";
    };
    class GVAR(engineext_middle_soundset) {
        soundShaders[] = { "Plane_Fighter_04_EngineExt_Middle_SoundShader" };
        volumeFactor = 1.4 * 1.5; // 1.4
        spatial = 1;
        loop = 1;
        shape = "FrontSemispace10";
        volumeCurve = "InverseSquare3Curve";
        sound3DProcessingType = "JetExt_Middle_3DProcessingType";
        occlusionFactor = 0.5;
        obstructionFactor = 0;
    };
    class GVAR(engineext_dist_front_soundset) {
        soundShaders[] = { "Plane_Fighter_04_EngineExt_Dist_Front_SoundShader" };
        volumeFactor = 1.3 * 1.5; // 1.3
        spatial = 1;
        loop = 1;
        volumeCurve = "InverseSquare3Curve";
        shape = "FrontSemispace60";
        sound3DProcessingType = "JetExt_Distant_3DProcessingType";
        occlusionFactor = 0.5;
        obstructionFactor = 0;
    };
    class GVAR(engineext_dist_rear_soundset) {
        soundShaders[] = { "Plane_Fighter_04_EngineExt_Dist_Rear_SoundShader" };
        volumeFactor = 1.5 * 1.5; // 1.5
        spatial = 1;
        loop = 1;
        volumeCurve = "InverseSquare1Curve";
        shape = "RearSemispace20";
        sound3DProcessingType = "JetExt_Distant_3DProcessingType";
        occlusionFactor = 0.5;
        obstructionFactor = 0;
    };
};
