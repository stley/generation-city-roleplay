#define FILTERSCRIPT
#include <open.mp>
#include <PawnPlus>

//static Map:amxList;
//static Map:amxExposedList;
forward amxMan_Register(Amx:ptr, const name[]);
forward amxMan_Expose(Amx:ptr, const function[], const fmt[]);
#define MAX_AMX_NAME    (32)
#define MAX_AMX_SYMBOL  (60)
#define MAX_AMX_POINTERS    (64)
#define MAX_AMX_EXPOSED     (128)

enum amxScheme
{
    Amx:pointer,
    amxName[MAX_AMX_NAME],
    List:amxPublics
};

static amxManifest[MAX_AMX_POINTERS][amxScheme];

enum amxExposed
{
    Amx:pointer,
    functionName[MAX_AMX_SYMBOL],
    fmt_args[24]
};
static exposedManifest[MAX_AMX_EXPOSED][amxExposed];

public OnFilterScriptInit(){
    printf("amxManager started");
}


public OnFilterScriptExit(){
    printf("amxManager stopped");
    
}


public amxMan_Register(Amx:ptr, const name[]){
    for(new i; i < MAX_AMX_POINTERS; i++){
        if(!amxManifest[i][pointer]){
            amxManifest[i][pointer] = ptr;
            strcopy(amxManifest[i][amxName], name);
            printf("amx Registered: %s, pointer %d", amxManifest[i][amxName], _:amxManifest[i][pointer]);
            break;
        }
    }
    return 1;
}

forward amxMan_Unregister(Amx:ptr);
public amxMan_Unregister(Amx:ptr){
    if(!ptr) return 0;
    new idex = isAmxRegistered(ptr);
    if(idex != -1){
        amxManifest[idex][pointer] = Amx:0;
        amxManifest[idex][amxName] = EOS;
    }
    return 1;
}

static isAmxRegistered(Amx:_ptr){
    if(!_ptr){
        for(new i; i < MAX_AMX_POINTERS; i++){
            if(amxManifest[i][pointer] == _ptr) return i;
            continue;
        }
    }
    return -1;
}

public amxMan_Expose(Amx:ptr, const function[], const fmt[]){
    if(isAmxRegistered(ptr) == -1) return 1;
    for(new i; i < MAX_AMX_EXPOSED; i++){
        if(!(exposedManifest[i][pointer])){
            exposedManifest[i][pointer] = ptr;
            strcopy(exposedManifest[i][functionName], function);
            strcopy(exposedManifest[i][fmt_args], fmt);
            printf("Exposed AMX public from pointer %d: %s with args \"%s\"", _:ptr, function, fmt);
            return 1;
        }
    }
    return 0;
}



public OnRconCommand(cmd[]){
    if(strequal(cmd, "amx-list")){
        printf("AMX List:");
        for(new i; i < MAX_AMX_POINTERS; i++){
            if(!amxManifest[i][pointer]) continue;
            printf("%s (pointer %d)", amxManifest[i][amxName], _:amxManifest[i][pointer]);
            
        }
        return 1;
    }
    return 0;
}