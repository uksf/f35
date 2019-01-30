class Pylon4 {
    condition = "pylonMagazineEmpty4<1";
    class GreenWPN {
        color[] = { 0, 1, 0, 1 };
        condition = "pylonSelected4<1";
        class Pylon_Sidewinder {
            condition = "(user4>0)*(user4<2)";
            class Sidewinder {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\sidewinder.paa";
                points[] = {
                    {
                        { "Station4", { -0.07, "-0.12" }, 1 },
                        { "Station4", { 0.07, "-0.12" }, 1 },
                        { "Station4", { 0.07, "0.12" }, 1 },
                        { "Station4", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class SidewinderDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station4D", { -0.008, "-0.0056" }, 1 },
                        { "Station4D", { 0.008, "-0.0056" }, 1 },
                        { "Station4D", { 0.008, "0.0056" }, 1 },
                        { "Station4D", { -0.008, "0.0056" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station4D", { -0.012, -0.0084 }, 1 },
                    { "Station4D", { 0.012, 0.0084 }, 1 },
                    {},
                    { "Station4D", { 0.012, -0.0084 }, 1 },
                    { "Station4D", { -0.012, 0.0084 }, 1 },
                    {}
                };
            };
        };
        class Pylon_Ammram {
            condition = "(user4>1)*(user4<3)";
            class Ammram {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\amraam.paa";
                points[] = {
                    {
                        { "Station4", { -0.07, "-0.12" }, 1 },
                        { "Station4", { 0.07, "-0.12" }, 1 },
                        { "Station4", { 0.07, "0.12" }, 1 },
                        { "Station4", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class AmmramDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station4D", { -0.011, "-0.0077" }, 1 },
                        { "Station4D", { 0.011, "-0.0077" }, 1 },
                        { "Station4D", { 0.011, "0.0077" }, 1 },
                        { "Station4D", { -0.011, "0.0077" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station4D", { -0.016, -0.0112 }, 1 },
                    { "Station4D", { 0.016, 0.0112 }, 1 },
                    {},
                    { "Station4D", { 0.016, -0.0112 }, 1 },
                    { "Station4D", { -0.016, 0.0112 }, 1 },
                    {}
                };
            };
        };
    };
    class WhiteWPN {
        color[] = { 1, 1, 1, 1 };
        condition = "pylonSelected4";
        class Pylon_Sidewinder {
            condition = "(user4>0)*(user4<2)";
            class Sidewinder {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\sidewinder.paa";
                points[] = {
                    {
                        { "Station4", { -0.07, "-0.12" }, 1 },
                        { "Station4", { 0.07, "-0.12" }, 1 },
                        { "Station4", { 0.07, "0.12" }, 1 },
                        { "Station4", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class SidewinderDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station4D", { -0.008, "-0.0056" }, 1 },
                        { "Station4D", { 0.008, "-0.0056" }, 1 },
                        { "Station4D", { 0.008, "0.0056" }, 1 },
                        { "Station4D", { -0.008, "0.0056" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station4D", { -0.012, -0.0084 }, 1 },
                    { "Station4D", { 0.012, 0.0084 }, 1 },
                    {},
                    { "Station4D", { 0.012, -0.0084 }, 1 },
                    { "Station4D", { -0.012, 0.0084 }, 1 },
                    {}
                };
            };
        };
        class Pylon_Ammram {
            condition = "(user4>1)*(user4<3)";
            class Ammram {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\amraam.paa";
                points[] = {
                    {
                        { "Station4", { -0.07, "-0.12" }, 1 },
                        { "Station4", { 0.07, "-0.12" }, 1 },
                        { "Station4", { 0.07, "0.12" }, 1 },
                        { "Station4", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class AmmramDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station4D", { -0.011, "-0.0077" }, 1 },
                        { "Station4D", { 0.011, "-0.0077" }, 1 },
                        { "Station4D", { 0.011, "0.0077" }, 1 },
                        { "Station4D", { -0.011, "0.0077" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station4D", { -0.016, -0.0112 }, 1 },
                    { "Station4D", { 0.016, 0.0112 }, 1 },
                    {},
                    { "Station4D", { 0.016, -0.0112 }, 1 },
                    { "Station4D", { -0.016, 0.0112 }, 1 },
                    {}
                };
            };
        };
    };
};
