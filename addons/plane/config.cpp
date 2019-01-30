#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {
            QGVAR(raf),
            QGVAR(raf_stealth),
            QGVAR(usmc),
            QGVAR(usmc_stealth)
        };
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "uksf_f35_weapons"
        };
        author = QUOTE(UKSF);
        authors[] = { "Beswick.T" };
        url = URL;
        VERSION_CONFIG;
    };
};

#include "CfgCloudlets.hpp"
#include "CfgMoves.hpp"
#include "CfgSoundSets.hpp"
#include "CfgVehicles.hpp"
