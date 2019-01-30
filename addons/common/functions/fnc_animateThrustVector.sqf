/*
    Author:
        Tim Beswick

    Description:
        Animates thrustvector components

    Parameter(s):
        0: Plane <OBJECT>

    Return Value:
        Nothing
*/
#include "script_component.hpp"

params ["_plane", "_newThrustVector", "_newSpeedBrake"];

if (_newThrustVector > -1 && {airplaneThrottle _plane > 0.89}) then {
    _plane setAirplaneThrottle 0.89;
};

private _previousThrustVector = _plane getVariable [QGVAR(previousThrustVector), -1];
if (_newThrustVector == _previousThrustVector) exitWith {}; // || {speed _plane > 500 && {_newSpeedBrake > 0}}) exitWith {};

_plane setVariable [QGVAR(previousThrustVector), _newThrustVector];
_plane animateSource ["animationsource_thrustVector", _newThrustVector, true]; // abs (_newThrustVector - _previousThrustVector) * 10000];
