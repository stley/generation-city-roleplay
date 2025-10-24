//MySQL
forward Task:orm_async_update(ORM:id); //orm_update
forward OnORMTaskUpdate(Task:t, ORM:id);

forward Task:orm_async_insert(ORM:id); //orm_insert
forward OnORMTaskInsert(Task:t, ORM:id);

native orm_addvar_string_s(ORM:id, var[], var_maxlen, AmxString:columnname) = orm_addvar_string;

stock Task:orm_async_update(ORM:id){
    new Task:t = task_new();
    orm_update(id, "OnORMTaskUpdate", "dd", _:t, _:id);
    return t;
}

public OnORMTaskUpdate(Task:t, ORM:id){
    if(id != MYSQL_INVALID_ORM)
        task_set_result(t, _:orm_errno(id));
    else task_set_result(t, _:ERROR_INVALID);
    return 1;
}


stock Task:orm_async_insert(ORM:id){
    new Task:t = task_new();
    orm_insert(id, "OnORMTaskInsert", "dd", _:t, _:id);
    return t;
}

public OnORMTaskInsert(Task:t, ORM:id){
    if(id != MYSQL_INVALID_ORM)
        task_set_result(t, _:orm_errno(id));
    else task_set_result(t, _:ERROR_INVALID);
    return 1;
}

hook native orm_destroy(&ORM:id){
    new ret = orm_destroy(id);
    if(id != MYSQL_INVALID_ORM)
    id = MYSQL_INVALID_ORM;
    return ret;
}

hook native orm_addvar_string(ORM:id, var[], var_maxlen, const columnname[]){
    new String:column = str_convert(str_new(columnname), "ansi", "utf8");
    new buf[128];
    str_get(column, buf);
    return orm_addvar_string(id, var, var_maxlen, buf);
}



//BCrypt
forward Task:bcrypt_ahash(playerid, const input[]);
forward OnAsyncHash(playerid, Task:t);

forward Task:bcrypt_averify(playerid, const input[], const hash[]);
forward OnAsyncHashVerify(playerid, bool:success, Task:t);


stock Task:bcrypt_ahash(playerid, const input[]){
    new Task:t = task_new();
    bcrypt_hash(playerid, "OnAsyncHash", input, BCRYPT_COST, "d", _:t);
    return t;
}

public OnAsyncHash(playerid, Task:t){
    new hashed[BCRYPT_HASH_LENGTH];
    bcrypt_get_hash(hashed);
    task_set_result_str(t, hashed);
    return 1;
}


stock Task:bcrypt_averify(playerid, const input[], const hash[]){
    new Task:t = task_new();
    bcrypt_verify(playerid, "OnAsyncHashVerify", input, hash, "d", _:t);
    return t;
}

public OnAsyncHashVerify(playerid, bool:success, Task:t){
    task_set_result(t, success);
    return 1;
}
