#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Sets the fuel level of a unit's jetpack.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 * 1: Fuel amount <NUMBER>
 *
 * Return Value:
 * None
 *
 * Examples:
 * [ace_player, 100] call FUNC(setFuel);
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]],
    ["_fuelAmount", -1, [0]]
];
private ["_jetpack", "_maxFuel", "_oldFuel"];
TRACE_2("fnc_setFuel",_unit,_fuelAmount);

_jetpack = backpackContainer _unit;

if (isNull _unit or
    {_fuelAmount < 0} or
    {!(_unit call FUNC(hasJetpack))}
) exitWith {"Failed in setFuel"};

_maxFuel = _jetpack getVariable [QGVAR(maxFuel), 100]; // TODO: replace with macro default
_oldFuel = _jetpack getVariable [QGVAR(fuel), _maxFuel];
_fuelAmount = CLAMP(_fuelAmount,0,_maxFuel);

_jetpack setVariable [QGVAR(fuel), _fuelAmount, true];
[QGVAR(fuelChanged), [_unit, _jetpack, _oldFuel, _fuelAmount], _unit] call CBA_fnc_targetEvent;
