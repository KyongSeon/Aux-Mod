#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Adds a unit's jetpack name and picture to an ACE interaction.
 *
 * Arguments:
 * See https://ace3.acemod.org/wiki/framework/interactionmenu-framework
 *
 * Return Value:
 * None
 *
 * Examples:
 * modifierFunction = QUOTE(_this call FUNC(modifyInteraction);)
 */

params ["_target", "_player", "_params", "_actionData"];
private ["_jetpackName", "_picture"];
TRACE_4("fnc_modifyInteraction",_target,_player,_params,_actionData);

_jetpackName = getText (configFile >> "CfgVehicles" >> backpack _target >> "displayName");
_picture = getText (configFile >> "CfgVehicles" >> backpack _target >> "picture");

_actionData set [1, format [_actionData#1, _jetpackName]];
_actionData set [2, _picture];