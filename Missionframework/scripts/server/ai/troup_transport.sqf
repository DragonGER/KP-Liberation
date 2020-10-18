params [
    ["_transVeh", objNull, [objNull]]
];

if (isNull _transVeh) exitWith {};
sleep 1;

private _transGrp = (group (driver _transVeh));
private _start_pos = getpos _transVeh;
private _objPos =  [getpos _transVeh] call KPLIB_fnc_getNearestBluforObjective;
private _unload_distance = 500;
private _crewcount = count crew _transVeh;

waitUntil {
    sleep 2;
    !(alive _transVeh) ||
    !(alive (driver _transVeh)) ||
    (((_transVeh distance _objPos) < _unload_distance) && !(surfaceIsWater (getpos _transVeh)))
};

if ((alive _transVeh) && (alive (driver _transVeh))) then {
    _infGrp = createGroup [GRLIB_side_enemy, true];

    {
        [_x, _start_pos, _infGrp, "PRIVATE", 0.5] call KPLIB_fnc_createManagedUnit;
    } foreach ([] call KPLIB_fnc_getSquadComp);

    {_x moveInCargo _transVeh} forEach (units _infGrp);

    while {(count (waypoints _infGrp)) != 0} do {deleteWaypoint ((waypoints _infGrp) select 0);};
    while {(count (waypoints _transGrp)) != 0} do {deleteWaypoint ((waypoints _transGrp) select 0);};

    [_transVeh, _objPos, false, 200, 5, false] remoteExec ["lambs_wp_fnc_taskAssault", _transVeh];

    sleep 10;

    [_infGrp] spawn battlegroup_ai;
};
