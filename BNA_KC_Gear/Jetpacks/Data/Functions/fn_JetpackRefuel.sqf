/*
 * Author: DartRuffian
 * Refuels either a specific jetpack object, or a player's jetpack.
 *
 * Arguments:
 * _jetpackOrUnit: Object - Either jetpack object or unit.
 * _fuelAmount: Number - Amount of fuel to set the jetpack to, caps at the jetpack's maximum fuel
 *
 * Return Value:
 * None
 *
 * Examples:
 * [backpackContainer unit3, 100] call BNAKC_fnc_JetpackRefuel; // Sets unit3's jetpack to 100 fuel points
 * [ace_player, 100] call BNAKC_fnc_JetpackRefuel; // Sets ace_player's jetpack to 100 fuel points
 */


#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
params ["_jetpackOrUnit", "_fuelAmount"];

// Determine if given object is a unit or a backpack object
private _jetpack = objNull;
private _jetpackClass = "";
if (_jetpackOrUnit isKindOf "Man") then
{
	_jetpack = backpackContainer _jetpackOrUnit;
	_jetpackClass = backpack _jetpackOrUnit;
}
else
{
	_jetpack = _jetpackOrUnit;
	_jetpackClass = typeOf _jetpack;
};

// Don't set fuel value for non-jetpacks
if (GET_NUMBER(configFile >> "CfgVehicles" >> _jetpackClass >> "BNA_KC_Jet_isJetpack", 0) isEqualTo 0) exitWith {};

private _maxFuel = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpackClass >> "BNA_KC_Jet_fuel", 100);
_fuelAmount = _fuelAmount min _maxFuel; // Prevents the jetpack being "over-filled"

// TODO: Display to unit (if a unit is passed) that their jetpack has been refilled

_jetpack setVariable ["BNA_KC_Jet_currentFuel", _fuelAmount];
["BNA_KC_Jet_FuelChanged", [ace_player, _jetpack, _oldFuel, _fuel]] call CBA_fnc_GlobalEvent;