class CfgNonAIVehicles {
    class ProxyWeapon;
    class Proxyuksf_f35_weapons_gunpod : ProxyWeapon {
        model = QPATHTOF(data\uksf_f35_weapons_gunpod.p3d);
        simulation = "maverickweapon";
    };
	class Proxyuksf_f35_weapons_blank: ProxyWeapon {
		model = QPATHTOF(data\uksf_f35_weapons_blank.p3d);
		simulation ="maverickweapon";
	};
};
