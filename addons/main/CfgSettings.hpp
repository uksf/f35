class CfgSettings {
    class CBA {
        class Versioning {
            class uksf_f35 {
                class dependencies {
                    // UKSF F35 will hard exit if this is missing
                    CBA[] = { "cba_main", REQUIRED_CBA_VERSION, "(true)" };
                };
            };
        };
    };
};
