#include <hook>

static Map:amxList;
static Map:amxExposedList;
forward amx_Register(Amx:ptr, const name[]);
forward amx_Expose(Amx:ptr, const function[], const form[]);
#define MAX_AMX_NAME    (32)
#define MAX_AMX_SYMBOL  (60)
enum amxScheme
{
    Amx:pointer,
    amxName[MAX_AMX_NAME]
};

enum amxExposed
{
    Amx:pointer,
    functionName[MAX_AMX_SYMBOL],
    fmt_args[24]
};

hook OnGameModeInit(){
    amxList = map_new();
    amxExposedList = map_new();
}


hook OnGameModeExit(){
    map_delete_deep(amxList);
    map_delete_deep(amxExposedList);
}


public amx_Register(Amx:ptr, const name[]){
    new data[amxScheme];
    data[pointer] = ptr;
    strins(data[amxName], name, 0);
    map_set_arr(amxList, name, data);
    return 1;
}

public amx_Expose(Amx:ptr, const function[], const fmt[]){
    new data[amxExposed];
    data[pointer] = ptr;
    strins(data[functionName], funcName, 0);
    strins(data[fmt_args], fmt, 0);
}

stock CallExposedFunction(Amx:machine, const func[], const fmt[]="", ...){
    new arguments[128];
    new buf[12];
    if(numargs() > 2){
        for(new i = 2; i < num_args; i++)
        format(buf, sizeof(buf), getarg(i));
        strcat(arguments, " ");
        strcat(arguments, buf);

    }
    new result;
    amx_try_call_public(machine, func, result, fmt, arguments);
    return 1;
}