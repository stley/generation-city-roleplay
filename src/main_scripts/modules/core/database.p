#define db_host     "localhost"
#define db_user     "omp-server"
#define db_password    "ANa4SVWDTm45"
#define db_database     "gcrp"

new MySQL:mainDatabase;

#include <hook>


hook OnGameModeInit(){
    new MySQLOpt:options = mysql_init_options();
    mysql_set_option(options, AUTO_RECONNECT, true);
    mainDatabase = mysql_connect(db_host, db_user, db_password, db_database, options);
    if(mysql_errno(mainDatabase)){
        new error[96];
        mysql_error(error);
        serverLogRegister("No se pudo conectar a la base de datos.", "MySQL");
        serverLogSend(error, "MySQL-ERROR");
        SendRconCommand("exit");
    }
    else
        serverLogSend("Conectado a la base de datos.", "MySQL");
}
hook OnGameModeExit(){
    mysql_close(mainDatabase);
}


public OnQueryError(errorid, const error[], const callback[], const query[], MySQL:handle){
    new strlog[256];
    format(strlog, sizeof(strlog), "Ocurrió un error ejecutando una consulta (callback: %s): %s (%d)", callback, error, errorid);
    serverLogRegister(strlog, "MySQL");
    format(strlog, sizeof(strlog), "QUERY DUMP: %s ", query);
    return 1;
}