#include <hook>

//<=================================> sistema de vehículos

enum vInfo
{
	vID,
	vPatente,
	vDueno[32],
	vLlave,
	vModelo,
	Float: vVida,
	Float: vPosicionX,
	Float: vPosicionY,
	Float: vPosicionZ,
	Float: vPosicionR,
	vVirtualWorld,
	vInterior,
	vPrecio,
	vGuantera[6],
	vGuanteraCantidad[6],
	vMaletero[15],
	vMaleteroCantidad[15],
	vMaxMaletero,
	vUSeguro,
	vPaintJob,
	vColor_1,
	vColor_2,
	vStereo,
	vNeon,
	vGasolina,
	vEnDeposito,
	vMulta,
	vDanioSuperficie,
	vDanioPuertas,
	vDanioLuces,
	vDanioRuedas,
	vModificaciones[MAX_MODVEHICULOS],
	vSpawned,
	v_Guantera,
	v_reload,
	//
	v_timer,
	v_robo,
};
new i_Vehiculo[MAX_VEHICULOS][vInfo];

stock vehicleSave(vid, todo = 1)
{
	new vehd[64];
	format(vehd, 64, DATOS_VEHICULOS, vid);
	new INI: File = INI_Open(vehd);
	INI_SetTag(File, "Informacion");
	if (todo == 0)
	{
		INI_WriteInt(File, "VirtualWorld", i_Vehiculo[vid][vVirtualWorld]);
		INI_WriteInt(File, "Interior", i_Vehiculo[vid][vInterior]);
	}
	if (todo == 1)
	{
		INI_WriteInt(File, "Patente", i_Vehiculo[vid][vPatente]);
		INI_WriteString(File, "Dueño", i_Vehiculo[vid][vDueno]);
		INI_WriteInt(File, "Llave", i_Vehiculo[vid][vLlave]);
		INI_WriteInt(File, "Modelo", i_Vehiculo[vid][vModelo]);
		INI_WriteFloat(File, "Vida", i_Vehiculo[vid][vVida]);
		INI_WriteFloat(File, "PosicionX", i_Vehiculo[vid][vPosicionX]);
		INI_WriteFloat(File, "PosicionY", i_Vehiculo[vid][vPosicionY]);
		INI_WriteFloat(File, "PosicionZ", i_Vehiculo[vid][vPosicionZ]);
		INI_WriteFloat(File, "PosicionR", i_Vehiculo[vid][vPosicionR]);
		INI_WriteInt(File, "VirtualWorld", i_Vehiculo[vid][vVirtualWorld]);
		INI_WriteInt(File, "Interior", i_Vehiculo[vid][vInterior]);
		INI_WriteInt(File, "Precio", i_Vehiculo[vid][vPrecio]);
		INI_WriteInt(File, "Guantera_1", i_Vehiculo[vid][vGuantera][0]);
		INI_WriteInt(File, "Guantera_2", i_Vehiculo[vid][vGuantera][1]);
		INI_WriteInt(File, "Guantera_3", i_Vehiculo[vid][vGuantera][2]);
		INI_WriteInt(File, "Guantera_4", i_Vehiculo[vid][vGuantera][3]);
		INI_WriteInt(File, "Guantera_5", i_Vehiculo[vid][vGuantera][4]);
		INI_WriteInt(File, "Guantera_6", i_Vehiculo[vid][vGuantera][5]);
		INI_WriteInt(File, "Guantera_Cantidad_1", i_Vehiculo[vid][vGuanteraCantidad][0]);
		INI_WriteInt(File, "Guantera_Cantidad_2", i_Vehiculo[vid][vGuanteraCantidad][1]);
		INI_WriteInt(File, "Guantera_Cantidad_3", i_Vehiculo[vid][vGuanteraCantidad][2]);
		INI_WriteInt(File, "Guantera_Cantidad_4", i_Vehiculo[vid][vGuanteraCantidad][3]);
		INI_WriteInt(File, "Guantera_Cantidad_5", i_Vehiculo[vid][vGuanteraCantidad][4]);
		INI_WriteInt(File, "Guantera_Cantidad_6", i_Vehiculo[vid][vGuanteraCantidad][5]);
		INI_WriteInt(File, "Maletero_1", i_Vehiculo[vid][vMaletero][0]);
		INI_WriteInt(File, "Maletero_2", i_Vehiculo[vid][vMaletero][1]);
		INI_WriteInt(File, "Maletero_3", i_Vehiculo[vid][vMaletero][2]);
		INI_WriteInt(File, "Maletero_4", i_Vehiculo[vid][vMaletero][3]);
		INI_WriteInt(File, "Maletero_5", i_Vehiculo[vid][vMaletero][4]);
		INI_WriteInt(File, "Maletero_6", i_Vehiculo[vid][vMaletero][5]);
		INI_WriteInt(File, "Maletero_7", i_Vehiculo[vid][vMaletero][6]);
		INI_WriteInt(File, "Maletero_8", i_Vehiculo[vid][vMaletero][7]);
		INI_WriteInt(File, "Maletero_9", i_Vehiculo[vid][vMaletero][8]);
		INI_WriteInt(File, "Maletero_10", i_Vehiculo[vid][vMaletero][9]);
		INI_WriteInt(File, "Maletero_11", i_Vehiculo[vid][vMaletero][10]);
		INI_WriteInt(File, "Maletero_12", i_Vehiculo[vid][vMaletero][11]);
		INI_WriteInt(File, "Maletero_13", i_Vehiculo[vid][vMaletero][12]);
		INI_WriteInt(File, "Maletero_14", i_Vehiculo[vid][vMaletero][13]);
		INI_WriteInt(File, "Maletero_15", i_Vehiculo[vid][vMaletero][14]);
		INI_WriteInt(File, "Maletero_Cantidad_1", i_Vehiculo[vid][vMaleteroCantidad][0]);
		INI_WriteInt(File, "Maletero_Cantidad_2", i_Vehiculo[vid][vMaleteroCantidad][1]);
		INI_WriteInt(File, "Maletero_Cantidad_3", i_Vehiculo[vid][vMaleteroCantidad][2]);
		INI_WriteInt(File, "Maletero_Cantidad_4", i_Vehiculo[vid][vMaleteroCantidad][3]);
		INI_WriteInt(File, "Maletero_Cantidad_5", i_Vehiculo[vid][vMaleteroCantidad][4]);
		INI_WriteInt(File, "Maletero_Cantidad_6", i_Vehiculo[vid][vMaleteroCantidad][5]);
		INI_WriteInt(File, "Maletero_Cantidad_7", i_Vehiculo[vid][vMaleteroCantidad][6]);
		INI_WriteInt(File, "Maletero_Cantidad_8", i_Vehiculo[vid][vMaleteroCantidad][7]);
		INI_WriteInt(File, "Maletero_Cantidad_9", i_Vehiculo[vid][vMaleteroCantidad][8]);
		INI_WriteInt(File, "Maletero_Cantidad_10", i_Vehiculo[vid][vMaleteroCantidad][9]);
		INI_WriteInt(File, "Maletero_Cantidad_11", i_Vehiculo[vid][vMaleteroCantidad][10]);
		INI_WriteInt(File, "Maletero_Cantidad_12", i_Vehiculo[vid][vMaleteroCantidad][11]);
		INI_WriteInt(File, "Maletero_Cantidad_13", i_Vehiculo[vid][vMaleteroCantidad][12]);
		INI_WriteInt(File, "Maletero_Cantidad_14", i_Vehiculo[vid][vMaleteroCantidad][13]);
		INI_WriteInt(File, "Maletero_Cantidad_15", i_Vehiculo[vid][vMaleteroCantidad][14]);
		INI_WriteInt(File, "USeguro", i_Vehiculo[vid][vUSeguro]);
		INI_WriteInt(File, "PaintJob", i_Vehiculo[vid][vPaintJob]);
		INI_WriteInt(File, "Color_1", i_Vehiculo[vid][vColor_1]);
		INI_WriteInt(File, "Color_2", i_Vehiculo[vid][vColor_2]);
		INI_WriteInt(File, "Stereo", i_Vehiculo[vid][vStereo]);
		INI_WriteInt(File, "Neon", i_Vehiculo[vid][vNeon]);
		INI_WriteInt(File, "Gasolina", i_Vehiculo[vid][vGasolina]);
		INI_WriteInt(File, "EnDeposito", i_Vehiculo[vid][vEnDeposito]);
		INI_WriteInt(File, "Multa", i_Vehiculo[vid][vMulta]);
		INI_WriteInt(File, "DañoSuperficie", i_Vehiculo[vid][vDanioSuperficie]);
		INI_WriteInt(File, "DañoPuertas", i_Vehiculo[vid][vDanioPuertas]);
		INI_WriteInt(File, "DañoLuces", i_Vehiculo[vid][vDanioLuces]);
		INI_WriteInt(File, "DañoRuedas", i_Vehiculo[vid][vDanioRuedas]);
		for(new m = 0; m < MAX_MODVEHICULOS; m++)
		{
			new key[64];
			format(key, 64, "Modificacion_%d", m);
			INI_WriteInt(File, key, i_Vehiculo[vid][vModificaciones][m]);
		}
		INI_WriteInt(File, "v_reload", i_Vehiculo[vid][v_reload]);
	}
	INI_Close(File);
	return 1;
}

funcion CargarVehiculos()
{
	new Totalvehs, vehd[64];
	for (new vid = 0; vid < sizeof(i_Vehiculo); vid++)
	{
		format(vehd, 64, DATOS_VEHICULOS, vid);
		INI_ParseFile(vehd, "CargarVehiculos_data", .bExtra = true, .extra = vid);
		if (i_Vehiculo[vid][vModelo] > 0)
		{
			Totalvehs++;
		}
	}
	printf("» Sistema de vehículos cargado (%d).",Totalvehs);
	return 1;
}

funcion vehicleLoad(sqlid)
{
	/*
	INI_Int("Patente", i_Vehiculo[vid][vPatente]);
	INI_String("Dueño", i_Vehiculo[vid][vDueno], 32);
	INI_Int("Llave", i_Vehiculo[vid][vLlave]);
	INI_Int("Modelo", i_Vehiculo[vid][vModelo]);
	INI_Float("Vida", i_Vehiculo[vid][vVida]);
	INI_Float("PosicionX", i_Vehiculo[vid][vPosicionX]);
	INI_Float("PosicionY", i_Vehiculo[vid][vPosicionY]);
	INI_Float("PosicionZ", i_Vehiculo[vid][vPosicionZ]);
	INI_Float("PosicionR", i_Vehiculo[vid][vPosicionR]);
	INI_Int("VirtualWorld", i_Vehiculo[vid][vVirtualWorld]);
	INI_Int("Interior", i_Vehiculo[vid][vInterior]);
	INI_Int("Precio", i_Vehiculo[vid][vPrecio]);
	INI_Int("Guantera_1", i_Vehiculo[vid][vGuantera][0]);
	INI_Int("Guantera_2", i_Vehiculo[vid][vGuantera][1]);
	INI_Int("Guantera_3", i_Vehiculo[vid][vGuantera][2]);
	INI_Int("Guantera_4", i_Vehiculo[vid][vGuantera][3]);
	INI_Int("Guantera_5", i_Vehiculo[vid][vGuantera][4]);
	INI_Int("Guantera_6", i_Vehiculo[vid][vGuantera][5]);
	INI_Int("Guantera_Cantidad_1", i_Vehiculo[vid][vGuanteraCantidad][0]);
	INI_Int("Guantera_Cantidad_2", i_Vehiculo[vid][vGuanteraCantidad][1]);
	INI_Int("Guantera_Cantidad_3", i_Vehiculo[vid][vGuanteraCantidad][2]);
	INI_Int("Guantera_Cantidad_4", i_Vehiculo[vid][vGuanteraCantidad][3]);
	INI_Int("Guantera_Cantidad_5", i_Vehiculo[vid][vGuanteraCantidad][4]);
	INI_Int("Guantera_Cantidad_6", i_Vehiculo[vid][vGuanteraCantidad][5]);
	INI_Int("Maletero_1", i_Vehiculo[vid][vMaletero][0]);
	INI_Int("Maletero_2", i_Vehiculo[vid][vMaletero][1]);
	INI_Int("Maletero_3", i_Vehiculo[vid][vMaletero][2]);
	INI_Int("Maletero_4", i_Vehiculo[vid][vMaletero][3]);
	INI_Int("Maletero_5", i_Vehiculo[vid][vMaletero][4]);
	INI_Int("Maletero_6", i_Vehiculo[vid][vMaletero][5]);
	INI_Int("Maletero_7", i_Vehiculo[vid][vMaletero][6]);
	INI_Int("Maletero_8", i_Vehiculo[vid][vMaletero][7]);
	INI_Int("Maletero_9", i_Vehiculo[vid][vMaletero][8]);
	INI_Int("Maletero_10", i_Vehiculo[vid][vMaletero][9]);
	INI_Int("Maletero_11", i_Vehiculo[vid][vMaletero][10]);
	INI_Int("Maletero_12", i_Vehiculo[vid][vMaletero][11]);
	INI_Int("Maletero_13", i_Vehiculo[vid][vMaletero][12]);
	INI_Int("Maletero_14", i_Vehiculo[vid][vMaletero][13]);
	INI_Int("Maletero_15", i_Vehiculo[vid][vMaletero][14]);
	INI_Int("Maletero_Cantidad_1", i_Vehiculo[vid][vMaleteroCantidad][0]);
	INI_Int("Maletero_Cantidad_2", i_Vehiculo[vid][vMaleteroCantidad][1]);
	INI_Int("Maletero_Cantidad_3", i_Vehiculo[vid][vMaleteroCantidad][2]);
	INI_Int("Maletero_Cantidad_4", i_Vehiculo[vid][vMaleteroCantidad][3]);
	INI_Int("Maletero_Cantidad_5", i_Vehiculo[vid][vMaleteroCantidad][4]);
	INI_Int("Maletero_Cantidad_6", i_Vehiculo[vid][vMaleteroCantidad][5]);
	INI_Int("Maletero_Cantidad_7", i_Vehiculo[vid][vMaleteroCantidad][6]);
	INI_Int("Maletero_Cantidad_8", i_Vehiculo[vid][vMaleteroCantidad][7]);
	INI_Int("Maletero_Cantidad_9", i_Vehiculo[vid][vMaleteroCantidad][8]);
	INI_Int("Maletero_Cantidad_10", i_Vehiculo[vid][vMaleteroCantidad][9]);
	INI_Int("Maletero_Cantidad_11", i_Vehiculo[vid][vMaleteroCantidad][10]);
	INI_Int("Maletero_Cantidad_12", i_Vehiculo[vid][vMaleteroCantidad][11]);
	INI_Int("Maletero_Cantidad_13", i_Vehiculo[vid][vMaleteroCantidad][12]);
	INI_Int("Maletero_Cantidad_14", i_Vehiculo[vid][vMaleteroCantidad][13]);
	INI_Int("Maletero_Cantidad_15", i_Vehiculo[vid][vMaleteroCantidad][14]);
	INI_Int("USeguro", i_Vehiculo[vid][vUSeguro]);
	INI_Int("PaintJob", i_Vehiculo[vid][vPaintJob]);
	INI_Int("Color_1", i_Vehiculo[vid][vColor_1]);
	INI_Int("Color_2", i_Vehiculo[vid][vColor_2]);
	INI_Int("Stereo", i_Vehiculo[vid][vStereo]);
	INI_Int("Neon", i_Vehiculo[vid][vNeon]);
	INI_Int("Gasolina", i_Vehiculo[vid][vGasolina]);
	INI_Int("EnDeposito", i_Vehiculo[vid][vEnDeposito]);
	INI_Int("Multa", i_Vehiculo[vid][vMulta]);
	INI_Int("DañoSuperficie", i_Vehiculo[vid][vDanioSuperficie]);
	INI_Int("DañoPuertas", i_Vehiculo[vid][vDanioPuertas]);
	INI_Int("DañoLuces", i_Vehiculo[vid][vDanioLuces]);
	INI_Int("DañoRuedas", i_Vehiculo[vid][vDanioRuedas]);
	for(new m = 0; m < MAX_MODVEHICULOS; m++)
	{
		new key[64];
		format(key, 64, "Modificacion_%d", m);
		INI_Int(key, i_Vehiculo[vid][vModificaciones][m]);
	}
	INI_Int("v_reload", i_Vehiculo[vid][v_reload]);*/
	return 1;
}