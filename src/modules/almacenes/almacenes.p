/* sistema de almacenes */
enum alm_Info
{
	aComprado,
	aComprador[32],
	aSeguro,
	aTipo,
	aDinero,
	a_Int,
	a_VW,
	Float: aExteriorX,
	Float: aExteriorY,
	Float: aExteriorZ,
	Float: aExteriorA,
	Float: aExteriorX_V,
	Float: aExteriorY_V,
	Float: aInteriorX,
	Float: aInteriorY,
	Float: aInteriorZ,
	Float: aInteriorA,
	aArmario[50],
	aArmarioCant[50],
};

new
	i_Almacen[MAX_ALMACENES][alm_Info]
;

stock save_Almacen(id, bool:Todo = true, ranura = -1)
{
	new almd[64];
	format(almd, 64, DATOS_ALMACENES, id);
	new INI: File = INI_Open(almd);
	INI_SetTag(File, "Informacion");
	if(Todo)
	{
		INI_WriteString(File, "Dueño", i_Almacen[id][aComprador]);
		INI_WriteInt(File, "Comprado", i_Almacen[id][aComprado]);
		INI_WriteInt(File, "Seguro", i_Almacen[id][aSeguro]);
		INI_WriteInt(File, "Tipo", i_Almacen[id][aTipo]);
		INI_WriteInt(File, "Dinero", i_Almacen[id][aDinero]);
		INI_WriteInt(File, "Interior", i_Almacen[id][a_Int]);
		INI_WriteInt(File, "VirtualWorld", i_Almacen[id][a_VW]);
		INI_WriteFloat(File, "ExteriorX", i_Almacen[id][aExteriorX]);
		INI_WriteFloat(File, "ExteriorY", i_Almacen[id][aExteriorY]);
		INI_WriteFloat(File, "ExteriorZ", i_Almacen[id][aExteriorZ]);
		INI_WriteFloat(File, "ExteriorA", i_Almacen[id][aExteriorA]);
		INI_WriteFloat(File, "ExteriorX_V", i_Almacen[id][aExteriorX_V]);
		INI_WriteFloat(File, "ExteriorY_V", i_Almacen[id][aExteriorY_V]);
		INI_WriteFloat(File, "InteriorX", i_Almacen[id][aInteriorX]);
		INI_WriteFloat(File, "InteriorY", i_Almacen[id][aInteriorY]);
		INI_WriteFloat(File, "InteriorZ", i_Almacen[id][aInteriorZ]);
		INI_WriteFloat(File, "InteriorA", i_Almacen[id][aInteriorA]);

	}
	if(ranura != -1 && ranura < 50)
	{
		new sql[100];
		format(sql, sizeof(sql), "Armario_%d", ranura);
		INI_WriteInt(File, sql, i_Almacen[id][aArmario][ranura]);
		format(sql, sizeof(sql), "ArmarioCant_%d", ranura);
		INI_WriteInt(File, sql, i_Almacen[id][aArmarioCant][ranura]);
	}
	INI_Close(File);
	return 1;
}

new totalalmacenes;
funcion cargar_almacenes()
{
	new almd[64];
	for (new id = 0; id < sizeof(i_Almacen); id++)
	{
		format(almd, 64, DATOS_ALMACENES, id);
		INI_ParseFile(almd, "CargarAlmacenes_data", .bExtra = true, .extra = id);
		if (i_Almacen[id][aTipo] != 0)
		{
			totalalmacenes++;
		}
	}
	printf("|- Almacenes [%d]", totalalmacenes);
	return 1;
}

funcion CargarAlmacenes_data(id, name[], value[])
{
	INI_String("Dueño", i_Almacen[id][aComprador], 32);
	INI_Int("Comprado", i_Almacen[id][aComprado]);
	INI_Int("Seguro", i_Almacen[id][aSeguro]);
	INI_Int("Tipo", i_Almacen[id][aTipo]);
	INI_Int("Dinero", i_Almacen[id][aDinero]);
	INI_Int("Interior", i_Almacen[id][a_Int]);
	INI_Int("VirtualWorld", i_Almacen[id][a_VW]);
	INI_Float("ExteriorX", i_Almacen[id][aExteriorX]);
	INI_Float("ExteriorY", i_Almacen[id][aExteriorY]);
	INI_Float("ExteriorZ", i_Almacen[id][aExteriorZ]);
	INI_Float("ExteriorA", i_Almacen[id][aExteriorA]);
	INI_Float("ExteriorX_V", i_Almacen[id][aExteriorX_V]);
	INI_Float("ExteriorY_V", i_Almacen[id][aExteriorY_V]);
	INI_Float("InteriorX", i_Almacen[id][aInteriorX]);
	INI_Float("InteriorY", i_Almacen[id][aInteriorY]);
	INI_Float("InteriorZ", i_Almacen[id][aInteriorZ]);
	INI_Float("InteriorA", i_Almacen[id][aInteriorA]);
	for(new i = 0; i < 50; i++)
	{
		new sql[100];
		format(sql, sizeof(sql), "Armario_%d", i);
		INI_Int(sql, i_Almacen[id][aArmario][i]);
		format(sql, sizeof(sql), "ArmarioCant_%d", i);
		INI_Int(sql, i_Almacen[id][aArmarioCant][i]);
	}
	return 1;
}