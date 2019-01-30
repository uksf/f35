class Pylon2 {
    condition = "pylonMagazineEmpty2<1";
    class GreenWPN {
        color[] = { 0, 1, 0, 1 };
        condition = "pylonSelected2<1";
        class Pylon_Sidewinder {
            condition = "(user2>0)*(user2<2)";
            class Sidewinder {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\sidewinder.paa";
                points[] = {
                    {
                        { "Station2", { -0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "0.12" }, 1 },
                        { "Station2", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class SidewinderDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.008, "-0.0056" }, 1 },
                        { "Station2D", { 0.008, "-0.0056" }, 1 },
                        { "Station2D", { 0.008, "0.0056" }, 1 },
                        { "Station2D", { -0.008, "0.0056" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.012, -0.0084 }, 1 },
                    { "Station2D", { 0.012, 0.0084 }, 1 },
                    {},
                    { "Station2D", { 0.012, -0.0084 }, 1 },
                    { "Station2D", { -0.012, 0.0084 }, 1 },
                    {}
                };
            };
        };
        class Pylon_Ammram {
            condition = "(user2>1)*(user2<3)";
            class Ammram {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\amraam.paa";
                points[] = {
                    {
                        { "Station2", { -0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "0.12" }, 1 },
                        { "Station2", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class AmmramDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.011, "-0.0077" }, 1 },
                        { "Station2D", { 0.011, "-0.0077" }, 1 },
                        { "Station2D", { 0.011, "0.0077" }, 1 },
                        { "Station2D", { -0.011, "0.0077" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.016, -0.0112 }, 1 },
                    { "Station2D", { 0.016, 0.0112 }, 1 },
                    {},
                    { "Station2D", { 0.016, -0.0112 }, 1 },
                    { "Station2D", { -0.016, 0.0112 }, 1 },
                    {}
                };
            };
        };
        class Pylon_JDAM {
            condition = "(user2>2)*(user2<4)";
            class JDAM {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\jdam.paa";
                points[] = {
                    {
                        { "Station2", { -0.06, "-0.103" }, 1 },
                        { "Station2", { 0.06, "-0.103" }, 1 },
                        { "Station2", { 0.06, "0.103" }, 1 },
                        { "Station2", { -0.06, "0.103" }, 1 }
                    }
                };
            };
            class JdamDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.016, "-0.0112" }, 1 },
                        { "Station2D", { 0.016, "-0.0112" }, 1 },
                        { "Station2D", { 0.016, "0.0112" }, 1 },
                        { "Station2D", { -0.016, "0.0112" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.018, -0.0126 }, 1 },
                    { "Station2D", { 0.018, 0.0126 }, 1 },
                    {},
                    { "Station2D", { 0.018, -0.0126 }, 1 },
                    { "Station2D", { -0.018, 0.0126 }, 1 },
                    {}
                };
            };
        };
        class Pylon_GBU {
            condition = "(user2>3)*(user2<5)";
            class GBU {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\gbu.paa";
                points[] = {
                    {
                        { "Station2", { -0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "0.12" }, 1 },
                        { "Station2", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class GBUDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.016, "-0.0112" }, 1 },
                        { "Station2D", { 0.016, "-0.0112" }, 1 },
                        { "Station2D", { 0.016, "0.0112" }, 1 },
                        { "Station2D", { -0.016, "0.0112" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.018, -0.0126 }, 1 },
                    { "Station2D", { 0.018, 0.0126 }, 1 },
                    {},
                    { "Station2D", { 0.018, -0.0126 }, 1 },
                    { "Station2D", { -0.018, 0.0126 }, 1 },
                    {}
                };
            };
        };
    };
    class Pylon_SDB {
        condition = "(user2>7)*(user2<9)";
        color[] = { 0, 1, 0, 1 };
        class ammo4 {
            condition = "pylonAmmo2>3";
            class SDB {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\sdb.paa";
                points[] = {
                    {
                        { "Station2", { -0.02, "0" }, 1 },
                        { "Station2", { 0.055, "0" }, 1 },
                        { "Station2", { 0.055, "0.12" }, 1 },
                        { "Station2", { -0.02, "0.12" }, 1 }
                    }
                };
            };
        };
        class ammo3 {
            condition = "pylonAmmo2>2";
            class SDB {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\sdb.paa";
                points[] = {
                    {
                        { "Station2", { 0.055, "-0.12" }, 1 },
                        { "Station2", { -0.02, "-0.12" }, 1 },
                        { "Station2", { -0.02, "0.0" }, 1 },
                        { "Station2", { 0.055, "0.0" }, 1 }
                    }
                };
            };
            class SDBDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { "-0.011+0.018", "-0.0077" }, 1 },
                        { "Station2D", { "0.011+0.018", "-0.0077" }, 1 },
                        { "Station2D", { "0.011+0.018", "0.0077" }, 1 },
                        { "Station2D", { "-0.011+0.018", "0.0077" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { "-0.015+0.018", -0.005 }, 1 },
                    { "Station2D", { "0.015+0.018", 0.005 }, 1 },
                    {},
                    { "Station2D", { "-0.015+0.018", 0.005 }, 1 },
                    { "Station2D", { "0.015+0.018", -0.005 }, 1 },
                    {}
                };
            };
        };
        class ammo2 {
            condition = "pylonAmmo2>1";
            class SDB {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\sdb.paa";
                points[] = {
                    {
                        { "Station2", { -0.055, "0.0" }, 1 },
                        { "Station2", { 0.02, "0.0" }, 1 },
                        { "Station2", { 0.02, "0.12" }, 1 },
                        { "Station2", { -0.055, "0.12" }, 1 }
                    }
                };
            };
        };
        class ammo1 {
            condition = "pylonAmmo2>0";
            class SDB {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\sdb.paa";
                points[] = {
                    {
                        { "Station2", { -0.055, "-0.12" }, 1 },
                        { "Station2", { 0.02, "-0.12" }, 1 },
                        { "Station2", { 0.02, "0.0" }, 1 },
                        { "Station2", { -0.055, "0.0" }, 1 }
                    }
                };
            };
            class SDBDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { "-0.011-0.018", "-0.0077" }, 1 },
                        { "Station2D", { "0.011-0.018", "-0.0077" }, 1 },
                        { "Station2D", { "0.011-0.018", "0.0077" }, 1 },
                        { "Station2D", { "-0.011-0.018", "0.0077" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { "-0.015-0.018", -0.005 }, 1 },
                    { "Station2D", { "0.015-0.018", 0.005 }, 1 },
                    {},
                    { "Station2D", { "-0.015-0.018", 0.005 }, 1 },
                    { "Station2D", { "0.015-0.018", -0.005 }, 1 },
                    {}
                };
            };
        };
    };
    class Pylon_2JDAM {
        color[] = { 0, 1, 0, 1 };
        condition = "(user2>9)*(user2<11)";
        class ammo2 {
            condition = "pylonAmmo2>1";
            class JDAM {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\jdam.paa";
                points[] = {
                    {
                        { "Station2", { -0.085, "-0.103" }, 1 },
                        { "Station2", { 0.035, "-0.103" }, 1 },
                        { "Station2", { 0.035, "0.103" }, 1 },
                        { "Station2", { -0.085, "0.103" }, 1 }
                    }
                };
            };
            class JDAMDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { 0.036, "-0.0112" }, 1 },
                        { "Station2D", { 0.004, "-0.0112" }, 1 },
                        { "Station2D", { 0.004, "0.0112" }, 1 },
                        { "Station2D", { 0.036, "0.0112" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { 0.04, -0.0126 }, 1 },
                    { "Station2D", { 0.000, 0.0126 }, 1 },
                    {},
                    { "Station2D", { 0.000, -0.0126 }, 1 },
                    { "Station2D", { 0.04, 0.0126 }, 1 },
                    {}
                };
            };
        };
        class ammo1 {
            condition = "pylonAmmo2>0";
            class JDAM {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\jdam.paa";
                points[] = {
                    {
                        { "Station2", { 0.085, "-0.103" }, 1 },
                        { "Station2", { -0.035, "-0.103" }, 1 },
                        { "Station2", { -0.035, "0.103" }, 1 },
                        { "Station2", { 0.085, "0.103" }, 1 }
                    }
                };
            };
            class JDAMDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.036, "-0.0112" }, 1 },
                        { "Station2D", { -0.004, "-0.0112" }, 1 },
                        { "Station2D", { -0.004, "0.0112" }, 1 },
                        { "Station2D", { -0.036, "0.0112" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.04, -0.0126 }, 1 },
                    { "Station2D", { 0.000, 0.0126 }, 1 },
                    {},
                    { "Station2D", { 0.000, -0.0126 }, 1 },
                    { "Station2D", { -0.04, 0.0126 }, 1 },
                    {}
                };
            };
        };
    };
    class WhiteWPN {
        color[] = { 1, 1, 1, 1 };
        condition = "pylonSelected2";
        class Pylon_Sidewinder {
            condition = "(user2>0)*(user2<2)";
            class Sidewinder {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\sidewinder.paa";
                points[] = {
                    {
                        { "Station2", { -0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "0.12" }, 1 },
                        { "Station2", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class SidewinderDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.008, "-0.0056" }, 1 },
                        { "Station2D", { 0.008, "-0.0056" }, 1 },
                        { "Station2D", { 0.008, "0.0056" }, 1 },
                        { "Station2D", { -0.008, "0.0056" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.012, -0.0084 }, 1 },
                    { "Station2D", { 0.012, 0.0084 }, 1 },
                    {},
                    { "Station2D", { 0.012, -0.0084 }, 1 },
                    { "Station2D", { -0.012, 0.0084 }, 1 },
                    {}
                };
            };
        };
        class Pylon_Ammram {
            condition = "(user2>1)*(user2<3)";
            class Ammram {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\amraam.paa";
                points[] = {
                    {
                        { "Station2", { -0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "0.12" }, 1 },
                        { "Station2", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class AmmramDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.011, "-0.0077" }, 1 },
                        { "Station2D", { 0.011, "-0.0077" }, 1 },
                        { "Station2D", { 0.011, "0.0077" }, 1 },
                        { "Station2D", { -0.011, "0.0077" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.016, -0.0112 }, 1 },
                    { "Station2D", { 0.016, 0.0112 }, 1 },
                    {},
                    { "Station2D", { 0.016, -0.0112 }, 1 },
                    { "Station2D", { -0.016, 0.0112 }, 1 },
                    {}
                };
            };
        };
        class Pylon_JDAM {
            condition = "(user2>2)*(user2<4)";
            class JDAM {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\jdam.paa";
                points[] = {
                    {
                        { "Station2", { -0.06, "-0.103" }, 1 },
                        { "Station2", { 0.06, "-0.103" }, 1 },
                        { "Station2", { 0.06, "0.103" }, 1 },
                        { "Station2", { -0.06, "0.103" }, 1 }
                    }
                };
            };
            class JdamDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.016, "-0.0112" }, 1 },
                        { "Station2D", { 0.016, "-0.0112" }, 1 },
                        { "Station2D", { 0.016, "0.0112" }, 1 },
                        { "Station2D", { -0.016, "0.0112" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.018, -0.0126 }, 1 },
                    { "Station2D", { 0.018, 0.0126 }, 1 },
                    {},
                    { "Station2D", { 0.018, -0.0126 }, 1 },
                    { "Station2D", { -0.018, 0.0126 }, 1 },
                    {}
                };
            };
        };
        class Pylon_GBU {
            condition = "(user2>3)*(user2<5)";
            class GBU {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\gbu.paa";
                points[] = {
                    {
                        { "Station2", { -0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "-0.12" }, 1 },
                        { "Station2", { 0.07, "0.12" }, 1 },
                        { "Station2", { -0.07, "0.12" }, 1 }
                    }
                };
            };
            class GBUDown {
                type = "polygon";
                texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                points[] = {
                    {
                        { "Station2D", { -0.016, "-0.0112" }, 1 },
                        { "Station2D", { 0.016, "-0.0112" }, 1 },
                        { "Station2D", { 0.016, "0.0112" }, 1 },
                        { "Station2D", { -0.016, "0.0112" }, 1 }
                    }
                };
            };
            class Fins {
                type = "line";
                width = 5;
                points[] = {
                    { "Station2D", { -0.018, -0.0126 }, 1 },
                    { "Station2D", { 0.018, 0.0126 }, 1 },
                    {},
                    { "Station2D", { 0.018, -0.0126 }, 1 },
                    { "Station2D", { -0.018, 0.0126 }, 1 },
                    {}
                };
            };
        };
        class Pylon_SDB {
            condition = "(user2>7)*(user2<9)";
            class ammo4 {
                condition = "(pylonAmmo2>3)*(pylonAmmo2<5)";
                class SDB {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\sdb.paa";
                    points[] = {
                        {
                            { "Station2", { -0.02, "0" }, 1 },
                            { "Station2", { 0.055, "0" }, 1 },
                            { "Station2", { 0.055, "0.12" }, 1 },
                            { "Station2", { -0.02, "0.12" }, 1 }
                        }
                    };
                };
                class SDBDown {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                    points[] = {
                        {
                            { "Station2D", { "-0.011+0.018", "-0.0077" }, 1 },
                            { "Station2D", { "0.011+0.018", "-0.0077" }, 1 },
                            { "Station2D", { "0.011+0.018", "0.0077" }, 1 },
                            { "Station2D", { "-0.011+0.018", "0.0077" }, 1 }
                        }
                    };
                };
                class Fins {
                    type = "line";
                    width = 5;
                    points[] = {
                        { "Station2D", { "-0.015+0.018", -0.005 }, 1 },
                        { "Station2D", { "0.015+0.018", 0.005 }, 1 },
                        {},
                        { "Station2D", { "-0.015+0.018", 0.005 }, 1 },
                        { "Station2D", { "0.015+0.018", -0.005 }, 1 },
                        {}
                    };
                };
            };
            class ammo3 {
                condition = "(pylonAmmo2>2)*(pylonAmmo2<4)";
                class SDB {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\sdb.paa";
                    points[] = {
                        {
                            { "Station2", { 0.055, "-0.12" }, 1 },
                            { "Station2", { -0.02, "-0.12" }, 1 },
                            { "Station2", { -0.02, "0.0" }, 1 },
                            { "Station2", { 0.055, "0.0" }, 1 }
                        }
                    };
                };
                class SDBDown {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                    points[] = {
                        {
                            { "Station2D", { "-0.011+0.018", "-0.0077" }, 1 },
                            { "Station2D", { "0.011+0.018", "-0.0077" }, 1 },
                            { "Station2D", { "0.011+0.018", "0.0077" }, 1 },
                            { "Station2D", { "-0.011+0.018", "0.0077" }, 1 }
                        }
                    };
                };
                class Fins {
                    type = "line";
                    width = 5;
                    points[] = {
                        { "Station2D", { "-0.015+0.018", -0.005 }, 1 },
                        { "Station2D", { "0.015+0.018", 0.005 }, 1 },
                        {},
                        { "Station2D", { "-0.015+0.018", 0.005 }, 1 },
                        { "Station2D", { "0.015+0.018", -0.005 }, 1 },
                        {}
                    };
                };
            };
            class ammo2 {
                condition = "(pylonAmmo2>1)*(pylonAmmo2<3)";
                class SDB {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\sdb.paa";
                    points[] = {
                        {
                            { "Station2", { -0.055, "0.0" }, 1 },
                            { "Station2", { 0.02, "0.0" }, 1 },
                            { "Station2", { 0.02, "0.12" }, 1 },
                            { "Station2", { -0.055, "0.12" }, 1 }
                        }

                    };
                };
                class SDBDown {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                    points[] = {
                        {
                            { "Station2D", { "-0.011-0.018", "-0.0077" }, 1 },
                            { "Station2D", { "0.011-0.018", "-0.0077" }, 1 },
                            { "Station2D", { "0.011-0.018", "0.0077" }, 1 },
                            { "Station2D", { "-0.011-0.018", "0.0077" }, 1 }
                        }
                    };
                };
                class Fins {
                    type = "line";
                    width = 5;
                    points[] = {
                        { "Station2D", { "-0.015-0.018", -0.005 }, 1 },
                        { "Station2D", { "0.015-0.018", 0.005 }, 1 },
                        {},
                        { "Station2D", { "-0.015-0.018", 0.005 }, 1 },
                        { "Station2D", { "0.015-0.018", -0.005 }, 1 },
                        {}
                    };
                };
            };
            class ammo1 {
                condition = "(pylonAmmo2>0)*(pylonAmmo2<2)";
                class SDB {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\sdb.paa";
                    points[] = {
                        {
                            { "Station2", { -0.055, "-0.12" }, 1 },
                            { "Station2", { 0.02, "-0.12" }, 1 },
                            { "Station2", { 0.02, "0.0" }, 1 },
                            { "Station2", { -0.055, "0.0" }, 1 }
                        }
                    };
                };
                class SDBDown {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                    points[] = {
                        {
                            { "Station2D", { "-0.011-0.018", "-0.0077" }, 1 },
                            { "Station2D", { "0.011-0.018", "-0.0077" }, 1 },
                            { "Station2D", { "0.011-0.018", "0.0077" }, 1 },
                            { "Station2D", { "-0.011-0.018", "0.0077" }, 1 }
                        }
                    };
                };
                class Fins {
                    type = "line";
                    width = 5;
                    points[] = {
                        { "Station2D", { "-0.015-0.018", -0.005 }, 1 },
                        { "Station2D", { "0.015-0.018", 0.005 }, 1 },
                        {},
                        { "Station2D", { "-0.015-0.018", 0.005 }, 1 },
                        { "Station2D", { "0.015-0.018", -0.005 }, 1 },
                        {}
                    };
                };
            };
        };
        class Pylon_2JDAM {
            condition = "(user2>9)*(user2<11)";
            class ammo2 {
                condition = "(pylonAmmo2>1)*(pylonAmmo2<3)";
                class JDAM {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\jdam.paa";
                    points[] = {
                        {
                            { "Station2", { -0.085, "-0.103" }, 1 },
                            { "Station2", { 0.035, "-0.103" }, 1 },
                            { "Station2", { 0.035, "0.103" }, 1 },
                            { "Station2", { -0.085, "0.103" }, 1 }
                        }
                    };
                };
                class JDAMDown {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                    points[] = {
                        {
                            { "Station2D", { 0.036, "-0.0112" }, 1 },
                            { "Station2D", { 0.004, "-0.0112" }, 1 },
                            { "Station2D", { 0.004, "0.0112" }, 1 },
                            { "Station2D", { 0.036, "0.0112" }, 1 }
                        }
                    };
                };
                class Fins {
                    type = "line";
                    width = 5;
                    points[] = {
                        { "Station2D", { 0.04, -0.0126 }, 1 },
                        { "Station2D", { 0.000, 0.0126 }, 1 },
                        {},
                        { "Station2D", { 0.000, -0.0126 }, 1 },
                        { "Station2D", { 0.04, 0.0126 }, 1 },
                        {}
                    };
                };
            };
            class ammo1 {
                condition = "(pylonAmmo2>0)*(pylonAmmo2<2)";
                class JDAM {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\jdam.paa";
                    points[] = {
                        {
                            { "Station2", { 0.085, "-0.103" }, 1 },
                            { "Station2", { -0.035, "-0.103" }, 1 },
                            { "Station2", { -0.035, "0.103" }, 1 },
                            { "Station2", { 0.085, "0.103" }, 1 }
                        }
                    };
                };
                class JDAMDown {
                    type = "polygon";
                    texture = "u\uksf_f35\addons\plane\mfd\circle.paa";
                    points[] = {
                        {
                            { "Station2D", { -0.036, "-0.0112" }, 1 },
                            { "Station2D", { -0.004, "-0.0112" }, 1 },
                            { "Station2D", { -0.004, "0.0112" }, 1 },
                            { "Station2D", { -0.036, "0.0112" }, 1 }
                        }
                    };
                };
                class Fins {
                    type = "line";
                    width = 5;
                    points[] = {
                        { "Station2D", { -0.04, -0.0126 }, 1 },
                        { "Station2D", { 0.000, 0.0126 }, 1 },
                        {},
                        { "Station2D", { 0.000, -0.0126 }, 1 },
                        { "Station2D", { -0.04, 0.0126 }, 1 },
                        {}
                    };
                };
            };
        };
    };
};
