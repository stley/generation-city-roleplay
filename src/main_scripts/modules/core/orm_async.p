forward Task:orm_async_update(ORM:id); //orm_update
forward OnORMTaskUpdate(Task:t, ORM:id);

forward Task:orm_async_insert(ORM:id); //orm_insert
forward OnORMTaskInsert(Task:t, ORM:id);

Task:orm_async_update(ORM:id){
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
    if(id != MYSQL_INVALID_ORM)
        id = MYSQL_INVALID_ORM;
    return orm_destroy(id);
}