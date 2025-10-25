

//- Anti amx
AntiAmx()
{
    new a[][] = {
        "Unarmed (Fist)",
        "Brass K"
    };
    #pragma unused a
}

//- Scriptfiles
#define beta_version			"1.7.34"
//#define DATOS_CUENTAS			"Cuentas/%s.rp"
//#define DATOS_Personajes		"Personajes/%s.rp"
#define DATOS_VEHICULOS			"Vehiculos/Veh_%d.rp"
#define DATOS_CASAS				"Casas/Casa_%d.rp"
#define DATOS_GARAGES			"Garages/Garage_%d.rp"
#define DATOS_NEGOCIOS			"Negocios/Negocio_%d.rp"
#define DATOS_FAMILIAS			"Facciones/Fac_%d.rp"
#define DATOS_VEHICULOS_F		"Vehiculos_F/Veh_%d.rp"
#define DATOS_MARIA				"Plantas/s_%d.rp"
#define DATOS_EMPRESAS			"Empresas/Empresa_%d.rp"
#define DATOS_PUERTAS			"Puertas/Puerta_%d.rp"
#define DATOS_CAJAS				"Cajas/Caja_%d.rp"
#define DATOS_GRAFFITIS			"Graffitis/Graffiti_%d.rp"
#define DATOS_ALMACENES			"Almacenes/Almacen_%d.rp"

#define data_codes				"Codes/%s.rp"

//- Limites -
#undef MAX_ACTORS
#define MAX_POBJETOS				(200)
#define MAX_ACTORS					(100)
#define MAX_PEAJES					(20)
#define MAX_PUERTAS					(36) //> 20
#define MAX_ROPA					(8)
#define MAX_CASAS					(970)
#define MAX_ALMACENES				(30)
#define MAX_MUEBLES_C				(300)
#define MAX_MUEBLES_N				(200)
#define MAX_MUEBLES_G				(50)
#define MAX_MUEBLES_E				(200)
#define MAX_GARAJES					(100)
#define	MAX_VEHJUGADOR				(5)
#define	MAX_VEHICULOS				(5000)
#define MAX_GASOLINERAS				(30)
#define	MAX_MODVEHICULOS			(15)
#define MAX_CAJAS					(200)
#define MAX_EMPRESAS				(30)
#define MAX_NEGOCIOS				(100)
#define	MAX_BARRERAS				(30)
#define	MAX_FACCIONES				(20)
#define	MAX_FAMILIAS				(11)
#define MAX_OBJETOS_S				(500)
#define MAX_GRAFFITIS				(100) //grafitis
#define	MAX_uACCESORIOS				(7) //limite a usuarios: 7
#define	MAX_ACCESORIOS				(8) //la id 7 es para /espalda
#define	MAX_VEHFAMILIAS				(10)
#define MAX_VEH_VENTA				(111)
#define MAX_VEH_USADO				(100)
#define MAX_ZONE_NAME				(28)
#define MAX_TEXT_CHAT				(150)
#define MAX_TELEFONOS				(30)
#define MAX_INCENDIOS				(15)
#define MAX_PLANTAS					(1000)
#define MAX_MEMBERS					(30)
#define TOTAL_MODS					(36)

//- Timer's e Invalid's
#define TIEMPO_RESPAWN 			   (9999)

#define INVALID_CASA_ID 		   (-1)
#define INVALID_NEGOCIO_ID		   (-1)
#define INVALID_MUEBLES_ID 	       (0)
#define INVALID_PLAYER_VEHICLE_ID  (0)
#define CHECKPOINT_NONE 		   (0)
#define CHECKPOINT_RETURNTRUCK 	   (600)

//- Estilos
#define WALK_DEFAULT    1
#define WALK_PED        2
#define WALK_GANGSTA    3
#define WALK_GANGSTA2   4
#define WALK_OLD        5
#define WALK_FAT_OLD    6
#define WALK_FAT        7
#define WALK_LADY      	8
#define WALK_LADY2      9
#define WALK_WHORE      10
#define WALK_WHORE2     11
#define WALK_DRUNK     	12
#define WALK_BLIND     	13

// Daños
#define COLT_DAMAGE_TORSO_AND_GROIN (11.0)
#define COLT_DAMAGE_ARMS (5.0)
#define COLT_DAMAGE_LEGS (7.0)
#define DESERT_DAMAGE_TORSO_AND_GROIN (30.0)
#define DESERT_DAMAGE_ARMS (18.0)
#define DESERT_DAMAGE_LEGS (22.0)
#define SHOTGUN_DAMAGE_TORSO_AND_GROIN (35.0)
#define SHOTGUN_DAMAGE_ARMS (20.0)
#define SHOTGUN_DAMAGE_LEGS (24.0)
#define SAWNOFF_DAMAGE_TORSO_AND_GROIN (40.0)
#define SAWNOFF_DAMAGE_ARMS (25.0)
#define SAWNOFF_DAMAGE_LEGS (30.0)
#define SPAS12_DAMAGE_TORSO_AND_GROIN (45.0)
#define SPAS12_DAMAGE_ARMS (30.0)
#define SPAS12_DAMAGE_LEGS (35.0)
#define UZI_DAMAGE_TORSO_AND_GROIN (8.5)
#define UZI_DAMAGE_ARMS (5.0)
#define UZI_DAMAGE_LEGS (6.5)
#define MP5_DAMAGE_TORSO_AND_GROIN (14.0)
#define MP5_DAMAGE_ARMS (7.5)
#define MP5_DAMAGE_LEGS (8.5)
#define AK47_DAMAGE_TORSO_AND_GROIN (25.0)
#define AK47_DAMAGE_ARMS (16.0)
#define AK47_DAMAGE_LEGS (20.0)
#define M4_DAMAGE_TORSO_AND_GROIN (28.0)
#define M4_DAMAGE_ARMS (17.0)
#define M4_DAMAGE_LEGS (21.0)
#define TEC_DAMAGE_TORSO_AND_GROIN (8.4)
#define TEC_DAMAGE_ARMS (5.0)
#define TEC_DAMAGE_LEGS (6.3)
#define RIFLE_DAMAGE_TORSO_AND_GROIN (48.0)
#define RIFLE_DAMAGE_ARMS (38.0)
#define RIFLE_DAMAGE_LEGS (40.0)
#define SNIPER_DAMAGE_TORSO_AND_GROIN (65.0)
#define SNIPER_DAMAGE_ARMS (45.0)
#define SNIPER_DAMAGE_LEGS (55.0)
#define ug_paintball_DAMAGE_TORSO_AND_GROIN (3.0)
#define ug_paintball_DAMAGE_ARMS (1.0)
#define ug_paintball_DAMAGE_LEGS (0.5)


new walktime[MAX_PLAYERS];
new WalkStyle[MAX_PLAYERS];

//- Macros
#define SetPVarInt(%0,%1,0); 		        DeletePVar(%0,%1);
#define _GiveWeapon							GivePlayerWeapon
#define ColocarObject                       SetPlayerAttachedObject
#define ReiniciarDinero                     ResetPlayerMoney
#define ActualizarDinero 				    GivePlayerMoney
#define textgame_player   					GameTextForPlayer
#define ComprobarDineroJ(%0) 			    GetPVarInt(%0, "Money")
#define Mensaje_ 			                SendClientMessage
#define EnviarMensajeTodos 			        SendClientMessageToAll
#define funcion%0(%1) 				        forward %0(%1); public %0(%1)
#define Loop(%0,%1,%2)                      for(new %0 = %2; %0 < %1; %0++)
#define NombreVehiculo(%0) 			        nombre_vehiculo[GetVehicleModel(%0)-400]
#define	en_pos(%2,%1,%3,%4,%5)			  	IsPlayerInRangeOfPoint(%2,%1,%3,%4,%5)
#define set_checkpoint                      SetPlayerCheckpoint
#define Formato(%1,              			format(%1,sizeof(%1),
#define TOTAL_MODS  (36)
#define IsValidComponent(%1)  \
									(1000 <= (%1) <= 1193)
#define IsVehicleValidModel(%1) \
									(400 <= (%1) <= 611)
									// PRESSED(keys)
#define PRESSED(%0) \
	(((newkeys & (%0)) == (%0)) && ((oldkeys & (%0)) != (%0)))
									// RELEASED(keys)
#define RELEASED(%0) \
	(((newkeys & (%0)) != (%0)) && ((oldkeys & (%0)) == (%0)))
//- Dialog's
#define D_INVALIDO      		   (0)

#define D_INGRESO					(1)
#define D_REGISTRO					(2)
#define D_EMAIL						(3)
#define D_FIN_REG					(4)
#define crear_personaje				(5)
#define D_SEXO						(6)
#define D_EDAD						(7)
#define D_fin_regpj					(8)
#define D_personajes				(9)


#define D_TEST0						(10)
#define D_TEST1						(11)
#define D_TEST2						(12)
#define D_TEST3						(13)
#define D_TEST4						(14)
#define D_TEST5						(15)
#define D_TEST6						(16)
#define D_TEST7						(17)
#define D_TEST8						(18)
#define D_TEST9						(19)
#define D_Habilidad                 (20)
#define	D_CUENTA					(21)
#define D_CUENTA3					(22)
#define D_CUENTA4					(23)
#define D_CUENTA5					(24)
#define D_CUENTA6					(25)
#define D_Iempresa					(26)
#define D_VehEmpresa				(27)
#define D_INVENTARIO				(28)
#define D_CINTURON					(29)
#define D_Caja                      (30)
#define D_TELEFONO					(31)
#define D_TELEFONO2					(32)
#define D_TELEFONO3					(33)
#define D_TELEFONO4					(34)
#define D_TELEFONO5					(35)
#define D_TELEFONO6					(36)
#define D_TELEFONO7					(37)
#define D_TELEFONO8					(38)
#define D_TELEFONO9					(39)
#define D_AYUDA						(40)
#define D_AYUDA2					(41)
#define	D_BANCO						(42)
#define D_BANCOR					(43)
#define D_BANCOD					(44)
#define D_BANCOT					(45)
#define D_BANCOT2					(46)
#define D_Carmario					(47)
#define D_Carmario2					(48)
#define D_ArmarioN					(49)
#define D_Farmario					(50)
#define D_TRABAJOS					(51)
#define D_LUGARES					(52)
#define D_LUGARES_2					(53)
#define D_LUGARES_3					(54)
#define D_LUGARES_4					(55)
#define D_LUGARES_5					(56)
#define D_GPS						(57)
#define D_Cuotas					(58)
#define DialogLicense               (59)
#define D_PDmecanico				(60)
#define D_gArmario					(61)
#define D_gArmario2					(62)
#define D_Cvehiculo					(63)
#define D_Cvehiculo2				(64)
#define D_Uvehiculo1				(65)
#define D_Uvehiculo2				(66)
#define D_PUERTO					(67)
#define D_AYUNTAMIENTO				(68)
#define D_PuntosP					(69)
#define D_VEHMENU					(70)
#define D_opVeh_1					(71)
#define D_opVeh_2					(72)
#define D_opVeh_3					(73)
#define D_opVeh_4					(74)
#define D_VEH2MENU					(75)
#define D_op2Veh_1					(76)
#define D_BOOMBOX					(77)
#define D_BOOMBOX1					(78)
#define D_BOOMBOX2					(79)
#define D_Mnegro					(80)
#define D_Cdnifalso					(81)
#define D_Cdnifalso2				(82)
#define D_Ifamilia					(83)
#define D_Ifaccion					(84)
#define	D_Tmecanico0				(85)
#define	D_Tmecanico1				(86)
#define	D_Tmecanico2				(87)
#define	D_Tmecanico3				(88)
#define	D_Tmecanico4				(89)
#define D_MusiCar					(90)
#define D_MusiCar2					(91)
#define D_MusiCar3					(92)
#define D_Ilista					(93)
#define D_Ibuscar					(94)
#define D_ACCESORIOS				(95)
#define D_ACCESORIOS2				(96)
#define D_ACCESORIOS3				(97)
#define D_ACCESORIOS4				(98)
#define D_ACCESORIOS5				(99)
#define D_Toys						(100)
#define D_cToys						(101)
#define D_vToys						(102)
#define D_COMPRARTOYVIP				(103)
#define D_COMPRARTOYVIP2			(104)
#define D_COMPRARTOYPD				(105)
#define D_COMPRARTOYPD2				(106)
#define D_COMPRARTOYPD3				(107)
#define D_ESTEREO					(108)
#define D_ESTEREO2					(109)
#define D_CASIVIPSKIN				(110)
#define D_SALDO						(111)
#define D_vip_locker				(112)
#define D_VIPTRABAJO				(113)
#define D_VIPTRABAJO2				(114)
#define	D_MULTA						(115)
#define D_CAMELLO					(116)
#define D_cJoyeria					(117)
#define D_Praticar					(118)
#define D_MENUMALETERO				(119)
#define D_MENUMALETERO2				(120)
#define D_MENUMALETERO3				(121)
#define D_MENUMALETERO4				(122)
#define D_MENUMALETERO5				(123)
#define D_MENUMALETEROF				(124)
#define D_MENUGUANTERA				(125)
#define D_Heridos					(126)
#define D_robos						(127)
#define D_AGENDA					(128)
#define D_AGENDA2					(129)
#define D_AGENDA3					(130)
#define D_AGENDA4					(131)
#define D_ELEGIRROPA				(132)
#define D_EDITARROPA				(133)
#define D_EDITARROPA2				(134)
#define D_Comprar_Muebles			(135)
#define D_Comprar_Muebles2			(136)
#define D_Cacheo                    (137)
#define DIALOG_EDIT_BONE			(138)
#define D_TIENDA247					(139)
#define D_nrLOTERIA					(140)
#define D_ROPA						(141)
#define D_RESTAURANTES				(142)
#define D_AMMUNATION				(143)
#define D_CLUCKINBELL				(144)
#define D_BURGERSHOT				(145)
#define D_PIZZASTACK				(146)
#define D_SEXSHOP					(147)
#define D_SEXSHOP2					(148)
#define D_SEXSHOP3					(149)
#define D_SEXSHOP4					(150)
#define D_GASOLINERA				(151)
#define D_ELECTRONICA				(152)
#define D_FERRETERIA				(153)
#define D_AMMUNATION2				(154)
#define D_COMPRAELCVEH				(155)
#define	D_Peluqueria				(156)
#define	D_cPeluqueria				(157)
#define D_Empeno					(158)
#define D_Empeno2					(159)
#define D_NEG_CLUBS					(160)
#define D_QUITARTUNNING				(161)
#define D_cmdPanel					(162)
#define	D_Computador0				(163)
#define	D_Computador1				(164)
#define	D_Computador2				(165)
#define	D_Computador3				(166)
#define	D_Computador4				(167)
#define	D_Computador5				(168)
#define D_Cdnifalso3				(169)
#define D_PDarmario					(170)
#define D_PDgarmario				(171)
#define D_CAMELLO2					(172)
#define D_cmdPanel2					(173)
#define D_personajes2				(174)
#define D_personajes3				(175)
#define D_vehPatente                (176)
#define D_vehPatente2				(177)
#define D_Cafeteria					(178)
#define D_Talleres                  (179)
#define D_Ascensor					(180)
#define D_AvisoMuerto				(181)
#define D_Anuncios					(182)
#define D_fianza					(183)
#define d_permisosbank				(184)

#define d_codes (190)
#define d_Almacen (191)
#define d_alquiler (192)
//casa
#define D_Casa_Opciones				(200)
#define D_Casa_Nombre				(201)
#define D_Casa_Dinero				(202)
#define D_Casa_iMuebles				(203)
#define D_Casa_oMuebles				(204)
#define D_Casa_tMuebles				(205)
#define D_Casa_mTexturizar			(206)
#define D_Casa_mTexturizar2			(207)

//negocio
#define D_Neg_Opciones				(210)
#define D_Neg_Nombre				(211)
#define D_Neg_Dinero				(212)
#define D_Neg_Productos				(213)
#define D_Neg_iMuebles				(214)
#define D_Neg_oMuebles				(215)
#define D_Neg_tMuebles				(216)
#define D_Neg_mTexturizar			(217)
#define D_Neg_mTexturizar2			(218)

//garaje
#define D_Garaje_iMuebles			(220)
#define D_Garaje_oMuebles			(221)
#define D_Garaje_tMuebles			(222)

//empresa
#define D_empresa_O					(230)
#define D_empresa_O2				(231)
#define D_empresa_O3				(232)
#define D_empresa_O4				(233)
#define D_empresa_O5				(234)
#define D_empresa_O6				(235)
#define D_empresa_O7				(236)
#define D_Empresa_iMuebles			(237)
#define D_Empresa_oMuebles			(238)
#define D_Empresa_tMuebles			(239)
#define DIALOGO_EMPRESA				(240)
#define DIALOGO_EMPRESA2			(241)
#define D_Emp_mTexturizar			(242)
#define D_Emp_mTexturizar2			(243)

#define D_Repartos		(261)
#define D_TAXI			(262)

#define D_Centralita				(270)
#define D_Centralita2				(271)
#define D_Textdraw					(272)
#define D_Textdraw2					(273)
#define D_Buscados					(274)
#define D_Historial					(276)
#define D_informes					(277)

#define D_Graffiti                  (280)
#define D_tGraffiti                 (281)
#define D_fGraffiti                 (282)


#define D_graffitis					(303)

#define D_vehGranjero               (360)
#define D_vehPescador               (361)
#define teleport_staff              (362)
#define teleport_pf					(363)

//equipo
#define D_equipoPDySD				(400)
#define D_equipoPDySD2				(401)
#define D_equipoPDySD3				(402)
#define D_equipoSADOC				(403)
#define D_equipoSADOC2				(404)
#define D_equipo_ED					(405)
#define D_equipo_noticias			(406)

//Model's
#define	D_UNIFORMESPD				(500)
#define	D_UNIFORMESnoticias			(501)
#define	D_UNIFORMESFD				(503)
#define	D_OBJETOS_TRAFICO			(504)
#define D_OBJETOSADMIN				(505)
#define	D_MODELOS					(507)
#define Models_cVehiculo			(508)
#define D_joyeria					(510)

//Colores
#define C_VIP 					(0xC93CCEFF)
#define C_GRIS                  (0xb0b0b0FF)
#define C_ROJO                  (0xFF0000FF)
#define C_LIGHTBLUE 	        (0x33CCFFFF)
#define C_UGRP                  (0x00C200FF)
#define C_AZUL 					(0x2641FEFF)

#define C_FADE1 				(0xE6E6E6FF)
#define C_FADE2 				(0xC8C8C8FF)
#define C_FADE3 				(0xAAAAAAFF)
#define C_FADE4 				(0x8C8C8CFF)
#define C_FADE5 				(0x6E6E6EFF)
#define C_GRAD1 				(0xB4B5B7FF)
#define C_GRAD2 				(0xBFC0C2FF)
#define C_GRAD3 				(0xCBCCCEFF)
#define C_GRAD4 				(0xD8D8D8FF)
#define C_GRAD5 				(0xE3E3E3FF)
#define C_GRAD6 				(0xF0F0F0FF)
#define C_VERDE		 			(0x1EB032FF)
#define C_ROJO2 				(0xFF6F6FFF)
#define C_BLANCO 			    (0xFFFFFFFF)
#define C_PLAYERBLANCO 			(0xFFFFFF00)
#define C_AMARILLO 	     	    (0xFFF000FF)
#define C_COLORPOLICIA   		(0x8D8DFFFF)
#define C_COLORRADIO    		(0x9B9BFFFF)


#include "core/database.p"
#include "core/async.p"
#include "core/other.p"
#include "almacenes/almacenes.p"
#include "anuncios/anuncios.p"
#include "player/player.p"
#include "vehicles/vehicle.p"
#include "player/admin.p"