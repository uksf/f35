/*
    Author:
        Tim Beswick

    Description:
        Get out plane

    Parameter(s):
        0: Plane <OBJECT>

    Return Value:
        Nothing
*/
#include "script_component.hpp"

params ["_plane"];

[GVAR(getInPFH)] call CBA_fnc_removePerFrameHandler;

