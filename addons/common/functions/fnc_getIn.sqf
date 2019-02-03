/*
    Author:
        Tim Beswick

    Description:
        Get in plane

    Parameter(s):
        0: Plane <OBJECT>

    Return Value:
        Nothing
*/
#include "script_component.hpp"

params ["_plane"];

[{_this call FUNC(setNamePlate)}, _this] call CBA_fnc_execNextFrame;

