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

params ["_plane"];

if (isServer) then {
    [_plane] call FUNC(setMfdLoadout);    
};

if (hasInterface || isServer) then {
    [{
        params ["_args", "_idPFH"];
        _args params ["_plane"];
        
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
        };
    }, 0, [_plane]] call CBA_fnc_addPerFrameHandler;

    [{
        params ["_args", "_idPFH"];
        _args params ["_plane"];
        
        if (!alive _plane) exitWith {
            [_idPFH] call CBA_fnc_removePerFrameHandler;
        };

        if (local _plane) then {
            // Afterburner effects
            [_plane] call FUNC(afterburner);
        };
    }, 0.03, [_plane]] call CBA_fnc_addPerFrameHandler;
};
