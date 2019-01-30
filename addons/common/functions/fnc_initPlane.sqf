/*
    Author:
        Tim Beswick

    Description:
        Initialises plane

    Parameter(s):
        0: Plane <OBJECT>

    Return Value:
        Nothing
*/
#include "script_component.hpp"

#define AFTERBURNER_DELAY 0.03

params ["_plane"];

if (isServer) then {
    [_plane] call FUNC(setMfdLoadout);
};

if (ACE_player in _plane) then {
    [_plane] call FUNC(getIn);
};

if (hasInterface || isServer) then {
    [{
        params ["_args", "_idPFH"];
        _args params ["_plane", "_delta"];
        
        if (!alive _plane) exitWith {
            [_idPFH] call CBA_fnc_removePerFrameHandler;
        };

        if (local _plane) then {
            private _newThrustVector = _plane animationPhase "source_thrustVector";
            private _newSpeedBrake = _plane animationPhase "source_speedBrake";

            // Thrustvector animations
            [_plane, _newThrustVector, _newSpeedBrake] call FUNC(animateThrustVector);

            // Speedbrake animations
            [_plane, _newSpeedBrake] call FUNC(animateSpeedBreak);

            // Afterburner effects
            if (diag_tickTime > _delta) then {
                [_plane] call FUNC(afterburner);
                _args set [1, _delta + AFTERBURNER_DELAY];
            };
        };
    }, 0, [_plane, diag_tickTime]] call CBA_fnc_addPerFrameHandler;
};
