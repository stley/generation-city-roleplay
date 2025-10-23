enum jInfo
{
	//	———————— username
	jSQLID, // ID base datos
	jNombre[MAX_PLAYER_NAME], // username
	jAdmin, // Admin
	jStaff[32], // Variable Admin
	jEncargado[5], // Variables de encargado
	jClave[BCRYPT_HASH_LENGTH], // Contraseña
	jEmail[255], // Correo
	jIP[17], // IP
	jCuenta_1[MAX_PLAYER_NAME], // personaje 1
	jCuenta_2[MAX_PLAYER_NAME], // personaje 2
	jCuenta_3[MAX_PLAYER_NAME], // personaje 3
	pfechaUreg[32],


	//———————— personaje
	jNombrePJ[32], // Nombre_Apellido
    charSQLID,
	jRegistrado, // Registrado
	Float: jPosicion_X, // PosX
	Float: jPosicion_Y, // PosY
	Float: jPosicion_Z, // PosZ
	Float: jPosicion_R, // PosR
	Float: jSangre, // Vida
	Float: jChaleco, // Chaleco
	jInterior, // Interior
	jVirtualWorld, // VirtualWorld
	jSexo, // Sexo
	jRaza, //Raza
	jEdad, // Edad
	jCiudad, // Ciudad
	jHablar, // Estilo de hablar
	jEstilo, // Estilo de caminar
	jPelea, // Estilo de pelea
	jSed, // Sed
	Float: jHambre, // Hambre
	jAlcohol, // Alcohol
	jFuerza, // Fuerza
	jDinero, // Dinero
	jBanco, // Dinero Banco
	jCheques, // Paga de cheque
	jDebito, // Número tarjeta de débito
	jPuntosRol[2],
	jNivel, // Nivel
	jExperiencia, // Experiencia
	j_Horas, // Horas Conectado
	jMulticuenta, // .
	jBaneado, // Baneado
	jBtiempo,
	jBculpable[32],
	jBrazon[128],
	jBmomento[150],
	jAlmacen,
	jCasaKey, // Casa
	jCasaKey2, // Casa 2
	jAlquiler, // Casa en renta
	j_timeunrent, // Casa en renta
	jCasaLlaves, // Llaves de casa
	jCasa2Llaves, // Llaves de casa
	j2CasaLlaves, // Llaves de casa 2
	j2Casa2Llaves, // Llaves de casa 2
	jNegocioKey, // Negocio
	jNegocioKey2, // Negocio 2
	jNegocioLlaves, // Llaves de casa
	jNegocio2Llaves, // Llaves de casa
	jEmpresaKey, // Empresa
	jEmpresaLlaves, // Llaves de empresa
	jEmpresa2Llaves, // Llaves de empresa
	jContrato, // Contrato en empresa
	jHorasE,
	jLlaveCoche[6],
	j2Vehiculos[6],
	j2Vehixculos[6],
	jPremium, // Sistema vip
	jColorP, // Color vip
	jD_premium, // Día del fin del vip
	jM_premium, // Mes del fin del vip
	jBolsillo[10], //
	jBolsilloCant[10], //
	jm_Izquierda, //
	jm_IzquierdaCant, //
	jm_Derecha, //
	jm_DerechaCant, //
	jEspalda, //
	jEspaldaCant, //
	jCinturon[6], //
	jCinturonCant[6], //
	jRopa, // Ropa
	jSkin, // Ropa
	jRopaArmario[MAX_ROPA], // Ropa armarios
	jPayday, // Tiempo payday
	jtimeP, // Tiempo payday
	jLider, // Lider fac
	jMiembro, // Miembro fac
	jRango, // Rango fac
	jLiderFam, // Lider fam
	jMiembroFam, // Miembro fam
	jRangoFam, // Rango fam
	jMuerto, // Muerto
	jMuerto2, // Muerto
	jTelefono, // Número de teléfono
	jSaldo, // Saldo de teléfono
	jFrecuencia, // Frecuencia de radio
	jBoombox, // Equipo de sonido
	jLoteria, // número de loteria
	jMascara, // Mascara
	jEstrellas, // Busqueda policial
	jArrestos, // Arrestos IC
	jPuntosLic,
	jSanciones, // Arrestos OOC
	jEncarcelado, // Encarcelado
	jJrazon[128],
	jJmomento[150],
	jJculpable[50], //- Sancionador ooc
	jTiempoCarcel, // Tiempo de arresto
	jtiempito, // tiempo pf
	jCargas, // Cargas realizadas
	jTroncos, // troncos
	jPescados, // Pescados
	jMuebles, // Cosechas de granjero
	jCosechas, // Cosechas de granjero
	jTrabajo1, // Trabajo 1
	jTrabajo2, // Trabajo 2
	jTrabajo3, // Trabajo 3
	jLicencias[7], // Licencias
	jHabilidad[10], // Habilidades
	jHabilidad2[10], // Habilidades
	jAdiccion[10],
	jEstado[128], // Estado - Texto
	jDocumento, // Documento legal
	jCasado[32], // Casado
	jf_Edad, // Edad ilegal
	jf_Dni, // Documento ilegal
	jf_Nombre[32], // Nombre del documento ilegal
	jDelito[10], // Antecedente
	jContacto[20], // Contactos de agenda telefónica
	jContactoN1[32], // Contactos de agenda telefónica
	jContactoN2[32], // Contactos de agenda telefónica
	jContactoN3[32], // Contactos de agenda telefónica
	jContactoN4[32], // Contactos de agenda telefónica
	jContactoN5[32], // Contactos de agenda telefónica
	jContactoN6[32], // Contactos de agenda telefónica
	jContactoN7[32], // Contactos de agenda telefónica
	jContactoN8[32], // Contactos de agenda telefónica
	jContactoN9[32], // Contactos de agenda telefónica
	jContactoN10[32], // Contactos de agenda telefónica
	jContactoN11[32], // Contactos de agenda telefónica
	jContactoN12[32], // Contactos de agenda telefónica
	jContactoN13[32], // Contactos de agenda telefónica
	jContactoN14[32], // Contactos de agenda telefónica
	jContactoN15[32], // Contactos de agenda telefónica
	jContactoN16[32], // Contactos de agenda telefónica
	jContactoN17[32], // Contactos de agenda telefónica
	jContactoN18[32], // Contactos de agenda telefónica
	jContactoN19[32], // Contactos de agenda telefónica
	jContactoN20[32], // Contactos de agenda telefónica
	jTiempos[22], // Tiempos
	jHoras, // Última hora conectado
	jMinutos, // Último minuto conectado
	jSegundos, // Último segundo conectado
	jDias, // Último día conectado
	jMeses, // Último mes conectado
	jAnos, // Último Año conectado
	jEmpeno[5],
	jEmpeno2[5],
	job_PF[12], //
	job_PFCant[12], //
	jDineroPF, //
	ObjetosRep,
	jDtipo,
	jDtiempo,
	jDpower,
	jDbonus[2],
	pAbstinenceEffect,
	pAbstinenceTime,

	/*jPDR_1[128],
	jPDR_2[128],
	jPDR_3[128],
	jPDR_4[128],
	jPDR_5[128],
	jPDR_6[128],
	jPDR_7[128],
	jPDR_8[128],
	jPDR_9[128],
	jPDR_10[128],*/

	pHud, // 0 = tipo, 1 = ?, 2 = ?
	jFianza,

	j_uTelefono,
	j_uManos,
	j_uMP,
	j_uMP2[32],
	j_uRadio,
	j_uAudio,
	j_uSAN,
	j_uOOC,
	pUseHud,
	ptimegame,
	pfechareg[128],
	jCoche[2],
	jGraffito,
	

	//- no guardable
	jMascaraPD, // Mascara usando
	jRescatePolicial, // Llamado policial
	jTiempoGuardado, // Tiempo de guardado
	jTiempoCurar, // Tiempo en curar
	j_Mascara, // Mascara usando
	jTiempoServicio, // Tiempo en servicio
	//-
	State,
	pLenador_free,
	Float:pLenador_free_PROG,
	bool:pt_PLAYER_CARRYING_TREE,
	//licencias
    bool:Started,
    Vehicle,
	Type,
	Checkpoint,
	pEditingMode,
	pSelectedItem,
	EditandoM,
	pAFKTime,
	pUseGUI,
	pMostrarTexto,
	pFooterTimer,
};
new user[MAX_PLAYERS][jInfo];
new ORM:accountORM[MAX_PLAYERS];
new ORM:charORM[MAX_PLAYERS];

//---antecendentes
new p_delito[MAX_PLAYERS][10][80];

new
	username[MAX_PLAYERS][MAX_PLAYER_NAME],
    LoggedIn[MAX_PLAYERS],
    charLoggedIn[MAX_PLAYERS],
	tipo_carga[MAX_PLAYERS],
	conectado[MAX_PLAYERS]
;

//<=================================> sistema de accesorios
enum aInfo
{
	aModelo,
	aParte,
	Float: aPosicionX,
	Float: aPosicionY,
	Float: aPosicionZ,
	Float: aRotacionX,
	Float: aRotacionY,
	Float: aRotacionZ,
	Float: aEscalaX,
	Float: aEscalaY,
	Float: aEscalaZ,
	aColocado,
};
new InfoAccesorio[MAX_PLAYERS][MAX_ACCESORIOS][aInfo];

new
    _BombAcept[MAX_PLAYERS],
	_Bomb2Call[MAX_PLAYERS],
	NumeroFaccion[MAX_PLAYERS],
	NumeroFamilia[MAX_PLAYERS],
	NumeroEmpresa[MAX_PLAYERS],
	NombreFaccion[MAX_PLAYERS][40],
	TomandoTrabajo[MAX_PLAYERS],
	fInvitadoP[MAX_PLAYERS],
	fIDfamilia[MAX_PLAYERS],
	VehicleWindows[MAX_VEHICLES] = 0,
	PrivadosB[MAX_PLAYERS] = 0,
	B_Pecho[MAX_PLAYERS],
	B_VIP[MAX_PLAYERS],
	B_Admin[MAX_PLAYERS],
	B_Radito[MAX_PLAYERS],
	B_Faccion[MAX_PLAYERS],
	B_Familia[MAX_PLAYERS],
	B_WSP[MAX_PLAYERS],
	VerPrivados[MAX_PLAYERS],
	B_SANMUSIC[MAX_PLAYERS],
	JugadorSentado[MAX_PLAYERS],
	EnGarajeID[MAX_PLAYERS],
	EnCasaID[MAX_PLAYERS],
	Saludo_ID[MAX_PLAYERS],
	Saludo2_ID[MAX_PLAYERS],
	Beso_ID[MAX_PLAYERS],
	Beso2_ID[MAX_PLAYERS],
	alcoholemia[MAX_PLAYERS],
	EnServicio[MAX_PLAYERS],
	EnServicioPD[MAX_PLAYERS],
	EnServicioADM[MAX_PLAYERS],
	CasaOffer[MAX_PLAYERS],
	CasaPrice[MAX_PLAYERS],
	NegocioOffer[MAX_PLAYERS],
	NegocioPrice[MAX_PLAYERS],
	_VehID[MAX_PLAYERS],
	_Vehprecio[MAX_PLAYERS],
	_Vehdueno[MAX_PLAYERS],
	QuienManejo[MAX_PLAYERS],
	PagarTiempo[MAX_PLAYERS],
	CederTiempo[MAX_PLAYERS],
	QuienMato[MAX_PLAYERS][24],
	MusicaEsc[MAX_PLAYERS],
	VehGuanteraPlayer[MAX_PLAYERS],
	VehMaleteroPlayer[MAX_PLAYERS],
	SolicitaRefuerzos[MAX_PLAYERS],
	BotonPanico[MAX_PLAYERS],
	_Entrevista[MAX_PLAYERS],
	_2Entrevista[MAX_PLAYERS],
	con_animacion[MAX_PLAYERS],
	es_hablando[MAX_PLAYERS],
	SirenObject[MAX_VEHICLES], //objeto
	bool:SirenOn[MAX_VEHICLES], //bool sirena
	JetPack[MAX_PLAYERS],
	CurrentMoney[MAX_PLAYERS],
	Intentar[MAX_PLAYERS],
	Intentar2[MAX_PLAYERS],
	IntentarD[MAX_PLAYERS],
	UsandoOptiwand[MAX_PLAYERS],
	TipoOptiwand[MAX_PLAYERS],
	_mirilla[MAX_PLAYERS],
	tipo_m[MAX_PLAYERS],
	xMeses[MAX_PLAYERS],
	xDias[MAX_PLAYERS],
	xAnos[MAX_PLAYERS],
	algomas[MAX_PLAYERS],
	Taximetro[MAX_PLAYERS],
	EnTaxi[MAX_PLAYERS],
	PasajeroTaxi[MAX_PLAYERS],
	bool:EnServicioTaxi[MAX_PLAYERS],
	EmpresaLlamada[MAX_PLAYERS],
    _MedicAcept[MAX_PLAYERS],
	_Medic2Call[MAX_PLAYERS],
    HaciendoPressBanca[MAX_PLAYERS],
	ProgresoPressBanca[MAX_PLAYERS],
	RepeticionesPressBanca[MAX_PLAYERS],
	Spectando[MAX_PLAYERS],
	Spectate[MAX_PLAYERS],
	SpectadorID[MAX_PLAYERS],
	Atado[MAX_PLAYERS],
	Vendado[MAX_PLAYERS],
	VendasYSoga[MAX_PLAYERS],
	ReporteA[MAX_PLAYERS],
	ReporteB[MAX_PLAYERS],
	TiempoReporte[MAX_PLAYERS],
	ReporteT[MAX_PLAYERS][128],
	DudaTimer[MAX_PLAYERS],
	DudaA[MAX_PLAYERS] = 0,
	DudaB[MAX_PLAYERS] = 0,
	DudaT[MAX_PLAYERS][128],
	Casco[MAX_PLAYERS],
	VisitaTimer[MAX_PLAYERS],
	VisitaTimer2[MAX_PLAYERS],
	MuebleActual[MAX_PLAYERS],
	Granjero[MAX_PLAYERS],
	Carguero[MAX_PLAYERS],
	VehSeguro[MAX_VEHICLES],
	TruckDeliver[MAX_PLAYERS],
	_Contenido[MAX_VEHICLES] = 0,
	_CamVeh[MAX_PLAYERS] = INVALID_VEHICLE_ID,
    _Logeo[MAX_PLAYERS],
	_rVeh[MAX_PLAYERS],
	usandoYo[MAX_PLAYERS],
	pescando[MAX_PLAYERS],
	pescador[MAX_PLAYERS],
	pesca[MAX_PLAYERS],
	_Pesca[MAX_PLAYERS],
	cocherobo[MAX_PLAYERS],
	checkcoche[MAX_PLAYERS],
	veh_robo[MAX_PLAYERS],
	veh_asiento[MAX_PLAYERS],
	r_negocio[MAX_PLAYERS],
	tipo_reparto[MAX_PLAYERS],
	r_vehiculo[MAX_PLAYERS],
	compra_Veh[MAX_PLAYERS],
	Float:TallerX[MAX_VEHICLES],
	Float:TallerY[MAX_VEHICLES],
	Float:TallerZ[MAX_VEHICLES],
	Float:TallerAngulo[MAX_VEHICLES],
	EnTaller[MAX_PLAYERS],
	IsTaller[MAX_PLAYERS],
	asesino[MAX_PLAYERS],
	p_drogas[MAX_PLAYERS],
	p_armas[MAX_PLAYERS],
	_arma[MAX_PLAYERS],
	PrestadorCoche[MAX_PLAYERS],
	LlavePrestada[MAX_PLAYERS],
	PlayerText:TextTrabajo[MAX_PLAYERS],
	NumeroMensaje[MAX_PLAYERS],
	EnLlamada[MAX_PLAYERS],
	ToqueLlamada[MAX_PLAYERS],
	PersonaEnLlamada[MAX_PLAYERS],
	ToqueLlamadaTimer[MAX_PLAYERS],
	Altavoz[MAX_PLAYERS],
	CasaActual[MAX_PLAYERS] = {INVALID_CASA_ID, ...},
	OBJ_MuebleC[MAX_PLAYERS][MAX_MUEBLES_C],
	NegocioActual[MAX_PLAYERS] = {INVALID_NEGOCIO_ID, ...},
	OBJ_MuebleN[MAX_PLAYERS][MAX_MUEBLES_N],
	GarageActual[MAX_PLAYERS] = {INVALID_CASA_ID, ...},
	OBJ_MuebleG[MAX_PLAYERS][MAX_MUEBLES_G],
	EmpresaActual[MAX_PLAYERS] = {INVALID_CASA_ID, ...},
	OBJ_MuebleE[MAX_PLAYERS][MAX_MUEBLES_E],
	DentroCasa[MAX_PLAYERS],
	DentroAlmacen[MAX_PLAYERS],
	DentroNegocio[MAX_PLAYERS],
	DentroEmpresa[MAX_PLAYERS],
	DentroGarage[MAX_PLAYERS],
	IDNegocio[MAX_PLAYERS],
	BuscarTrabajo[MAX_PLAYERS],
	YaAviso[MAX_PLAYERS],
	TipoTunning[MAX_PLAYERS][TOTAL_MODS],
	TestErrores[MAX_PLAYERS],
	JugadorEnSeccion[MAX_PLAYERS char],
	VehCallSign[MAX_VEHICLES],
	Text3D:TextCallSign[MAX_VEHICLES],
	estacionp[MAX_PLAYERS],
	escuchandop[MAX_PLAYERS],
	estacionveh[MAX_VEHICLES],
	Esposado[MAX_PLAYERS],
	RecargarTiempo[MAX_PLAYERS],
	VehiculoGasolina[MAX_PLAYERS],
	veh_gasolina[MAX_VEHICLES] = 200,
	arr_Engine[MAX_VEHICLES char],
	Float: _vVelocidad[MAX_PLAYERS],
	Taseado[MAX_PLAYERS],
	_Gomas[MAX_PLAYERS],
	TaserRecarga[MAX_PLAYERS],
	RanuraSeleccionadaA[MAX_PLAYERS],
	EditandoObjetoJ[MAX_PLAYERS],
	RanuraSeleccionada[MAX_PLAYERS],
	MultaPrecio[MAX_PLAYERS],
	MultaOfrecer[MAX_PLAYERS],
	FacturaMulta[MAX_PLAYERS],
	MostrarNombre[MAX_PLAYERS],
    UsandoGym2[MAX_PLAYERS]
;


accountORMInit(playerid){
    new ORM:ormid = accountORM[playerid] = orm_create("accounts", mainDatabase);
    orm_addvar_int(ormid, user[playerid][jSQLID], "SQLID");
    orm_addvar_string(ormid, user[playerid][jClave], BCRYPT_HASH_LENGTH, "Clave");
    orm_addvar_string(ormid, user[playerid][jNombre], MAX_PLAYER_NAME, "Nombre");
    orm_addvar_string(ormid, user[playerid][jEmail], 255, "Email");
    orm_addvar_string(ormid, user[playerid][jStaff], 32, "Staff");
    orm_addvar_string(ormid, user[playerid][jIP], 16, "IP");
    orm_addvar_string(ormid, user[playerid][jCuenta_1], MAX_PLAYER_NAME, "Cuenta_1");
    orm_addvar_string(ormid, user[playerid][jCuenta_2], MAX_PLAYER_NAME, "Cuenta_2");
    orm_addvar_string(ormid, user[playerid][jCuenta_3], MAX_PLAYER_NAME, "Cuenta_3");
    orm_addvar_string(ormid, user[playerid][pfechaUreg], 128, "Fecha_Reg");
    orm_addvar_int(ormid, user[playerid][jAdmin], "Admin");
    orm_addvar_int(ormid, user[playerid][jEncargado][0], "Encargado1");
    orm_addvar_int(ormid, user[playerid][jEncargado][1], "Encargado2");
    orm_addvar_int(ormid, user[playerid][jEncargado][2], "Encargado3");
    orm_addvar_int(ormid, user[playerid][jEncargado][3], "Encargado4");
    orm_addvar_int(ormid, user[playerid][jEncargado][4], "Encargado5");
    orm_setkey(ormid, "SQLID");
    return 1;
}

charORMInit(playerid){
    new ORM:ormpj = charORM[playerid] = orm_create("characters", mainDatabase);
    orm_addvar_int(ormpj, user[playerid][charSQLID], "SQLID");
	orm_addvar_int(ormpj, user[playerid][jRegistrado], "Registrado");
	orm_addvar_int(ormpj, user[playerid][ptimegame], "Time_Game");
	orm_addvar_string(ormpj, user[playerid][pfechareg], 128, "Fecha_reg");
	orm_addvar_float(ormpj, user[playerid][jPosicion_X], "Posicion_X");
	orm_addvar_float(ormpj, user[playerid][jPosicion_Y], "Posicion_Y");
	orm_addvar_float(ormpj, user[playerid][jPosicion_Z], "Posicion_Z");
	orm_addvar_float(ormpj, user[playerid][jPosicion_R], "Posicion_R");
	orm_addvar_float(ormpj, user[playerid][jSangre], "Vida");
	orm_addvar_float(ormpj, user[playerid][jChaleco], "Chaleco");
	orm_addvar_int(ormpj, user[playerid][jInterior], "Interior");
	orm_addvar_int(ormpj, user[playerid][jVirtualWorld], "VirtualWorld");
	orm_addvar_int(ormpj, user[playerid][jSexo], "Sexo");
	orm_addvar_int(ormpj, user[playerid][jRaza], "Raza");
	orm_addvar_int(ormpj, user[playerid][jEdad], "Edad");
	orm_addvar_int(ormpj, user[playerid][jCiudad], "Ciudad");
	orm_addvar_int(ormpj, user[playerid][jHablar], "Hablar");
	orm_addvar_int(ormpj, user[playerid][jEstilo], "Estilo");
	orm_addvar_int(ormpj, user[playerid][jPelea], "Pelea");
	orm_addvar_int(ormpj, user[playerid][jSed], "Sed");
	orm_addvar_float(ormpj, user[playerid][jHambre], "Hambre");
	orm_addvar_int(ormpj, user[playerid][jAlcohol], "Alcohol");
	orm_addvar_int(ormpj, user[playerid][jFuerza], "Fuerza");
	orm_addvar_int(ormpj, user[playerid][jDinero], "Dinero");
	SetPVarInt(playerid, "Money", user[playerid][jDinero]);
	orm_addvar_int(ormpj, user[playerid][jBanco], "Banco");
	orm_addvar_int(ormpj, user[playerid][jCheques], "Cheques");
	orm_addvar_int(ormpj, user[playerid][jDebito], "Debito");
	orm_addvar_int(ormpj, user[playerid][jPuntosRol][0], "PuntosRol");
	orm_addvar_int(ormpj, user[playerid][jPuntosRol][1], "PuntosNRol");
	orm_addvar_int(ormpj, user[playerid][jNivel], "Nivel");
	orm_addvar_int(ormpj, user[playerid][jExperiencia], "Experiencia");
	orm_addvar_int(ormpj, user[playerid][j_Horas], "Horas");
	orm_addvar_int(ormpj, user[playerid][jMulticuenta], "Multicuenta");
	orm_addvar_int(ormpj, user[playerid][jBaneado], "Baneado");
	orm_addvar_int(ormpj, user[playerid][jBtiempo], "bTiempo");
	orm_addvar_string(ormpj, user[playerid][jBculpable], 32, "bCulpable");
	orm_addvar_string(ormpj, user[playerid][jBrazon], 128, "bRazon");
	orm_addvar_string(ormpj, user[playerid][jBmomento], 150, "bMomento");
	orm_addvar_int(ormpj, user[playerid][jCasaKey], "Casa");
	orm_addvar_int(ormpj, user[playerid][jCasaKey2], "Casa2");
	orm_addvar_int(ormpj, user[playerid][jAlquiler], "CasaRenta");
	orm_addvar_int(ormpj, user[playerid][j_timeunrent], "timeunrent");
	orm_addvar_int(ormpj, user[playerid][jCasaLlaves], "CasaLlaves");
	orm_addvar_int(ormpj, user[playerid][jCasa2Llaves], "Casa2Llaves");
	orm_addvar_int(ormpj, user[playerid][j2CasaLlaves], "2CasaLlaves");
	orm_addvar_int(ormpj, user[playerid][j2Casa2Llaves], "2Casa2Llaves");
	orm_addvar_int(ormpj, user[playerid][jNegocioKey], "Negocio");
	orm_addvar_int(ormpj, user[playerid][jNegocioKey2], "Negocio2");
	orm_addvar_int(ormpj, user[playerid][jNegocioLlaves], "NegocioLlaves");
	orm_addvar_int(ormpj, user[playerid][jNegocio2Llaves], "Negocio2Llaves");
	orm_addvar_int(ormpj, user[playerid][jEmpresaKey], "Empresa");
	orm_addvar_int(ormpj, user[playerid][jEmpresaLlaves], "EmpresaLlaves");
	orm_addvar_int(ormpj, user[playerid][jEmpresa2Llaves], "Empresa2Llaves");
	orm_addvar_int(ormpj, user[playerid][jContrato], "Contrato");
	orm_addvar_int(ormpj, user[playerid][jHorasE], "HorasE");
	orm_addvar_int(ormpj, user[playerid][jAlmacen], "Almacen");
	for(new i = 0; i < 6; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "Coche%d", i);
		orm_addvar_int(ormpj,user[playerid][jLlaveCoche][i], sql);
		format(sql, sizeof(sql), "CocheLlaves%d", i);
		orm_addvar_int(ormpj,user[playerid][j2Vehiculos][i], sql);
		format(sql, sizeof(sql), "CochexLlaves%d", i);
		orm_addvar_int(ormpj,user[playerid][j2Vehixculos][i], sql);
	}
	orm_addvar_int(ormpj, user[playerid][jPremium], "Premium");
	orm_addvar_int(ormpj, user[playerid][jColorP], "ColorP");
	orm_addvar_int(ormpj, user[playerid][jD_premium], "dPremium");
	orm_addvar_int(ormpj, user[playerid][jM_premium], "mPremium");
	for(new i = 0; i < 10; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "Bolsillo%d", i);
		orm_addvar_int(ormpj, user[playerid][jBolsillo][i], sql);
		format(sql, sizeof(sql), "BolsilloCant%d", i);
		orm_addvar_int(ormpj, user[playerid][jBolsilloCant][i], sql);
	}
	orm_addvar_int(ormpj, user[playerid][jm_Izquierda], "Izquierda");
	orm_addvar_int(ormpj, user[playerid][jm_IzquierdaCant], "IzquierdaCant");
	orm_addvar_int(ormpj, user[playerid][jm_Derecha], "Derecha");
	orm_addvar_int(ormpj, user[playerid][jm_DerechaCant], "DerechaCant");
	orm_addvar_int(ormpj, user[playerid][jEspalda], "Espalda");
	orm_addvar_int(ormpj, user[playerid][jEspaldaCant], "EspaldaCant");
	for(new i = 0; i < 6; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "Cinturon%d", i);
		orm_addvar_int(ormpj,user[playerid][jCinturon][i], sql);
		format(sql, sizeof(sql), "CinturonCant%d", i);
		orm_addvar_int(ormpj,user[playerid][jCinturonCant][i], sql);
	}
	orm_addvar_int(ormpj, user[playerid][jRopa], "Ropa");
	orm_addvar_int(ormpj, user[playerid][jSkin], "Skin");
	orm_addvar_int(ormpj, user[playerid][jRopaArmario][0], "RopaArmario1");
	orm_addvar_int(ormpj, user[playerid][jRopaArmario][1], "RopaArmario2");
	orm_addvar_int(ormpj, user[playerid][jRopaArmario][2], "RopaArmario3");
	orm_addvar_int(ormpj, user[playerid][jRopaArmario][3], "RopaArmario4");
	orm_addvar_int(ormpj, user[playerid][jRopaArmario][4], "RopaArmario5");
	orm_addvar_int(ormpj, user[playerid][jRopaArmario][5], "RopaArmario6");
	orm_addvar_int(ormpj, user[playerid][jRopaArmario][6], "RopaArmario7");
	orm_addvar_int(ormpj, user[playerid][jRopaArmario][7], "RopaArmario8");
	orm_addvar_int(ormpj, user[playerid][jPayday], "Payday");
	orm_addvar_int(ormpj, user[playerid][jtimeP], "timeP");
	orm_addvar_int(ormpj, user[playerid][jLider], "Lider");
	orm_addvar_int(ormpj, user[playerid][jMiembro], "Miembro");
	orm_addvar_int(ormpj, user[playerid][jRango], "Rango");
	orm_addvar_int(ormpj, user[playerid][jLiderFam], "Lider2");
	orm_addvar_int(ormpj, user[playerid][jMiembroFam], "Miembro2");
	orm_addvar_int(ormpj, user[playerid][jRangoFam], "Rango2");
	orm_addvar_int(ormpj, user[playerid][jMuerto], "Muerto");
	orm_addvar_int(ormpj, user[playerid][jMuerto2], "Muerto2");
	orm_addvar_int(ormpj, user[playerid][jTelefono], "Telefono");
	orm_addvar_int(ormpj, user[playerid][jSaldo], "Saldo");
	orm_addvar_int(ormpj, user[playerid][jFrecuencia], "Frecuencia");
	orm_addvar_int(ormpj, user[playerid][jBoombox], "Boombox");
	orm_addvar_int(ormpj, user[playerid][jLoteria], "Loteria");
	orm_addvar_int(ormpj, user[playerid][jMascara], "Mascara");
	orm_addvar_int(ormpj, user[playerid][jMascaraPD], "MascaraPD");
	orm_addvar_int(ormpj, user[playerid][jEstrellas], "Estrellas");
	orm_addvar_int(ormpj, user[playerid][jArrestos], "Arrestos");
	orm_addvar_int(ormpj, user[playerid][jPuntosLic], "PuntosLic");
	orm_addvar_int(ormpj, user[playerid][jSanciones], "Sanciones");
	orm_addvar_int(ormpj, user[playerid][jEncarcelado], "Encarcelado");
	orm_addvar_string(ormpj, user[playerid][jJculpable], 128, "jCulpable");
	orm_addvar_string(ormpj, user[playerid][jJrazon], 150, "jRazon");
	orm_addvar_string(ormpj, user[playerid][jJmomento], 32, "jMomento");
	orm_addvar_int(ormpj, user[playerid][jTiempoCarcel], "TiempoCarcel");
	orm_addvar_int(ormpj, user[playerid][jtiempito], "tiempito");
	orm_addvar_int(ormpj, user[playerid][jCargas], "Cargas");
	orm_addvar_int(ormpj, user[playerid][jTroncos], "Troncos");
	orm_addvar_int(ormpj, user[playerid][jPescados], "Pescados");
	orm_addvar_int(ormpj, user[playerid][jMuebles], "Cosechas");
	orm_addvar_int(ormpj, user[playerid][jCosechas], "cosechitas");
	orm_addvar_int(ormpj, user[playerid][jTrabajo1], "Trabajo1");
	orm_addvar_int(ormpj, user[playerid][jTrabajo2], "Trabajo2");
	orm_addvar_int(ormpj, user[playerid][jTrabajo3], "Trabajo3");
	orm_addvar_int(ormpj, user[playerid][jLicencias][0], "Licencias1");
	orm_addvar_int(ormpj, user[playerid][jLicencias][1], "Licencias2");
	orm_addvar_int(ormpj, user[playerid][jLicencias][2], "Licencias3");
	orm_addvar_int(ormpj, user[playerid][jLicencias][3], "Licencias4");
	orm_addvar_int(ormpj, user[playerid][jLicencias][4], "Licencias5");
	orm_addvar_int(ormpj, user[playerid][jLicencias][5], "Licencias6");
	orm_addvar_int(ormpj, user[playerid][jLicencias][6], "Licencias7");
	for(new i = 0; i < 10; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "Habilidad%d", i);
		orm_addvar_int(ormpj, user[playerid][jHabilidad][i], sql);
		format(sql, sizeof(sql), "Habilidadx%d", i);
		orm_addvar_int(ormpj, user[playerid][jHabilidad2][i], sql);
		format(sql, sizeof(sql), "Adiccion%d", i);
		orm_addvar_int(ormpj, user[playerid][jAdiccion][i], sql);
	}
	orm_addvar_string(ormpj, user[playerid][jEstado], 128, "Estado");
	orm_addvar_int(ormpj, user[playerid][jDocumento], "Documento");
	orm_addvar_int(ormpj, user[playerid][jf_Edad], "fEdad");
	orm_addvar_int(ormpj, user[playerid][jf_Dni], "fDocumento");
	orm_addvar_string(ormpj, user[playerid][jf_Nombre], 32, "fNombre");
	orm_addvar_string(ormpj, p_delito[playerid][0], 80, "Delito1");
	orm_addvar_string(ormpj, p_delito[playerid][1], 80, "Delito2");
	orm_addvar_string(ormpj, p_delito[playerid][2], 80, "Delito3");
	orm_addvar_string(ormpj, p_delito[playerid][3], 80, "Delito4");
	orm_addvar_string(ormpj, p_delito[playerid][4], 80, "Delito5");
	orm_addvar_string(ormpj, p_delito[playerid][5], 80, "Delito6");
	orm_addvar_string(ormpj, p_delito[playerid][6], 80, "Delito7");
	orm_addvar_string(ormpj, p_delito[playerid][7], 80, "Delito8");
	orm_addvar_string(ormpj, p_delito[playerid][8], 80, "Delito9");
	orm_addvar_string(ormpj, p_delito[playerid][9], 80, "Delito10");
	orm_addvar_int(ormpj, user[playerid][jDelito][0], "Delitox1");
	orm_addvar_int(ormpj, user[playerid][jDelito][1], "Delitox2");
	orm_addvar_int(ormpj, user[playerid][jDelito][2], "Delitox3");
	orm_addvar_int(ormpj, user[playerid][jDelito][3], "Delitox4");
	orm_addvar_int(ormpj, user[playerid][jDelito][4], "Delitox5");
	orm_addvar_int(ormpj, user[playerid][jDelito][5], "Delitox6");
	orm_addvar_int(ormpj, user[playerid][jDelito][6], "Delitox7");
	orm_addvar_int(ormpj, user[playerid][jDelito][7], "Delitox8");
	orm_addvar_int(ormpj, user[playerid][jDelito][8], "Delitox9");
	orm_addvar_int(ormpj, user[playerid][jDelito][9], "Delitox10");
	for(new i = 0; i < 20; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "Contacto%d", i);
		orm_addvar_int(ormpj, user[playerid][jContacto][i], sql);
	}
	orm_addvar_string(ormpj, user[playerid][jContactoN1], 32, "ContactoN1");
	orm_addvar_string(ormpj, user[playerid][jContactoN2], 32, "ContactoN2");
	orm_addvar_string(ormpj, user[playerid][jContactoN3], 32, "ContactoN3");
	orm_addvar_string(ormpj, user[playerid][jContactoN4], 32, "ContactoN4");
	orm_addvar_string(ormpj, user[playerid][jContactoN5], 32, "ContactoN5");
	orm_addvar_string(ormpj, user[playerid][jContactoN6], 32, "ContactoN6");
	orm_addvar_string(ormpj, user[playerid][jContactoN7], 32, "ContactoN7");
	orm_addvar_string(ormpj, user[playerid][jContactoN8], 32, "ContactoN8");
	orm_addvar_string(ormpj, user[playerid][jContactoN9], 32, "ContactoN9");
	orm_addvar_string(ormpj, user[playerid][jContactoN10], 32, "ContactoN10");
	orm_addvar_string(ormpj, user[playerid][jContactoN11], 32, "ContactoN11");
	orm_addvar_string(ormpj, user[playerid][jContactoN12], 32, "ContactoN12");
	orm_addvar_string(ormpj, user[playerid][jContactoN13], 32, "ContactoN13");
	orm_addvar_string(ormpj, user[playerid][jContactoN14], 32, "ContactoN14");
	orm_addvar_string(ormpj, user[playerid][jContactoN15], 32, "ContactoN15");
	orm_addvar_string(ormpj, user[playerid][jContactoN16], 32, "ContactoN16");
	orm_addvar_string(ormpj, user[playerid][jContactoN17], 32, "ContactoN17");
	orm_addvar_string(ormpj, user[playerid][jContactoN18], 32, "ContactoN18");
	orm_addvar_string(ormpj, user[playerid][jContactoN19], 32, "ContactoN19");
	orm_addvar_string(ormpj, user[playerid][jContactoN20], 32, "ContactoN20");
	for(new i = 0; i < 22; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "Tiempos%d", i);
		orm_addvar_int(ormpj, user[playerid][jTiempos][i], sql);
	}
	orm_addvar_int(ormpj, user[playerid][jHoras], "uHora");
	orm_addvar_int(ormpj, user[playerid][jMinutos], "uMinuto");
	orm_addvar_int(ormpj, user[playerid][jSegundos], "uSegundo");
	orm_addvar_int(ormpj, user[playerid][jDias], "uDia");
	orm_addvar_int(ormpj, user[playerid][jMeses], "uMes");
	orm_addvar_int(ormpj, user[playerid][jAnos], "uAno");
	for(new i = 0; i < 5; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "Empeno%d", i);
		orm_addvar_int(ormpj, user[playerid][jEmpeno][i], sql);
		format(sql, sizeof(sql), "Empenox%d", i);
		orm_addvar_int(ormpj, user[playerid][jEmpeno2][i], sql);
	}
	for(new i = 0; i < 12; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "obPF%d", i);
		orm_addvar_int(ormpj, user[playerid][job_PF][i], sql);
		format(sql, sizeof(sql), "obPFCant%d", i);
		orm_addvar_int(ormpj, user[playerid][job_PFCant][i], sql);
	}
	orm_addvar_int(ormpj, user[playerid][jDineroPF], "DineroPF");
	orm_addvar_int(ormpj, user[playerid][ObjetosRep], "ObjetosRep");
	orm_addvar_int(ormpj, user[playerid][jDtipo], "Droga_tipo");
	orm_addvar_int(ormpj, user[playerid][jDtiempo], "Droga_tiempo");
	orm_addvar_int(ormpj, user[playerid][jDpower], "Droga_power");
	orm_addvar_int(ormpj, user[playerid][jDbonus][0], "Droga_bonus1");
	orm_addvar_int(ormpj, user[playerid][jDbonus][1], "Droga_bonus2");
	orm_addvar_int(ormpj, user[playerid][pAbstinenceEffect], "AbstinenceEffect");
	orm_addvar_int(ormpj, user[playerid][pAbstinenceTime], "AbstinenceTime");
	orm_addvar_int(ormpj, user[playerid][pHud], "Textdraw_T");
	orm_addvar_int(ormpj, user[playerid][jFianza], "Fianza");
	orm_addvar_int(ormpj, user[playerid][j_uTelefono], "uTelefono");
	orm_addvar_int(ormpj, user[playerid][j_uManos], "uManos");
	orm_addvar_int(ormpj, user[playerid][j_uMP], "uMP");
	orm_addvar_string(ormpj, user[playerid][j_uMP2], 32, "uMP2");
	orm_addvar_int(ormpj, user[playerid][j_uRadio], "uRadio");
	orm_addvar_int(ormpj, user[playerid][j_uAudio], "uAudio");
	orm_addvar_int(ormpj, user[playerid][j_uSAN], "uSAN");
	orm_addvar_int(ormpj, user[playerid][j_uOOC], "uOOC");
	orm_addvar_int(ormpj, user[playerid][pUseHud], "uTextdraw");
	orm_addvar_int(ormpj, user[playerid][jCoche][0], "rand_veh1");
	orm_addvar_int(ormpj, user[playerid][jCoche][1], "rand_veh2");
	orm_addvar_string(ormpj, user[playerid][jCasado], 32, "Casado");
	orm_addvar_int(ormpj, user[playerid][jGraffito], "Graffito");
	for(new v = 0; v < MAX_ACCESORIOS; v++)
	{
		new string[128];
		format(string, 128, "%d_Modelo", v);
		orm_addvar_int(ormpj, InfoAccesorio[playerid][v][aModelo], string);
		format(string, 128, "%d_Parte", v);
		orm_addvar_int(ormpj, InfoAccesorio[playerid][v][aParte], string);
		format(string, 128, "%d_Posicion_X", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aPosicionX], string);
		format(string, 128, "%d_Posicion_Y", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aPosicionY], string);
		format(string, 128, "%d_Posicion_Z", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aPosicionZ], string);
		format(string, 128, "%d_Rotacion_X", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aRotacionX], string);
		format(string, 128, "%d_Rotacion_Y", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aRotacionY], string);
		format(string, 128, "%d_Rotacion_Z", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aRotacionZ], string);
		format(string, 128, "%d_Escala_X", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aEscalaX], string);
		format(string, 128, "%d_Escala_Y", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aEscalaY], string);
		format(string, 128, "%d_Escala_Z", v);
		orm_addvar_float(ormpj, InfoAccesorio[playerid][v][aEscalaZ], string);
		format(string, 128, "%d_Colocado", v);
		orm_addvar_int(ormpj, InfoAccesorio[playerid][v][aColocado], string);
	}
    orm_setkey(ormpj, "SQLID");
}



forward accountPasswordHash(playerid);


public accountPasswordHash(playerid){
    if(LoggedIn[playerid])
		bcrypt_get_hash(user[playerid][jClave]);
    if(accountORM[playerid] != MYSQL_INVALID_ORM){
        new hash[BCRYPT_HASH_LENGTH];
        bcrypt_get_hash(hash);
        bcrypt_verify(playerid, "accountPasswordVerify", hash, user[playerid][jClave], "d", playerid);
        return 1;
    }
    else{
        bcrypt_get_hash(user[playerid][jClave]);
		StopAudioStreamForPlayer(playerid);
		ExPlayerDialog(playerid, D_EMAIL, DIALOG_STYLE_INPUT, "Correo electrónico:",
		"Escribe tu correo electrónico\n\nFormato: email@dominio.com\n", "Continuar", "Salir");
        return 1;
    }
    
}

forward accountPasswordVerify(playerid, bool:success);
public accountPasswordVerify(playerid, bool:success){
    if(success){
        LoggedIn[playerid] = 1;
        ver_personajes(playerid);
    }
    else{
        new cuenta2[200];
		format(cuenta2, sizeof(cuenta2), "%s, la contraseña escrita no es válida\nPor favor intente de nuevo.\n\nIntroduzca su contraseña:", username[playerid]);
		ExPlayerDialog(playerid, D_INGRESO, DIALOG_STYLE_PASSWORD, "Iniciar Sesión", cuenta2, "Ingresar", "Salir");
		_Logeo[playerid] += 1;
    }
    return 1;
}


accountSave(playerid)
{
	if(!JugadorEnSeccion {playerid}) return 1;
    if(!LoggedIn[playerid]) return 1;
	yield 1;
	if(accountORM[playerid] != MYSQL_INVALID_ORM){
        new log[96];
		new err = await orm_async_update(accountORM[playerid]);
		if(err != _:ERROR_OK){
			
			format(log, sizeof(log), "Ocurrió un error al guardar los datos del usuario %s. (err %d)", username[playerid], err);
			serverLogRegister(log, "account");
		}
        else{
            format(log, sizeof(log), "Guardados los datos del usuario %s (SQLID: %d)", username[playerid], user[playerid][jSQLID]);
			serverLogRegister(log, "account");
        }
	}
	return 1;
}

characterSave(playerid)
{
	if(user[playerid][jMascaraPD] == 1) return 1;
	if(!JugadorEnSeccion {playerid}) return 1;
    if(!charLoggedIn[playerid]) return 1;

	new personaje = GetPVarInt(playerid, "crear_pj");

	new playername[50 + MAX_PLAYER_NAME];

	switch (personaje)
	{
		case 1: alm(playername, user[playerid][jCuenta_1]);
		case 2: alm(playername, user[playerid][jCuenta_2]);
		case 3: alm(playername, user[playerid][jCuenta_3]);
	}
    yield 1;
	if(charORM[playerid] != MYSQL_INVALID_ORM){
        new log[96];
		new err = await orm_async_update(charORM[playerid]);
		if(err != _:ERROR_OK){
			
			format(log, sizeof(log), "Ocurrió un error al guardar los datos del personaje %s. (err %d)", user[playerid][jNombrePJ], err);
			serverLogRegister(log, "account");
		}
        else{
            format(log, sizeof(log), "Guardados los datos del personaje %s (SQLID: %d)", user[playerid][jNombrePJ], user[playerid][charSQLID]);
			serverLogRegister(log, "account");
        }
	}
	return 1;
}
