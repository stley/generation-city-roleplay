#include <a_samp>
#include <streamer>
#include <sscanf2>
#define FILTERSCRIPT

#pragma tabsize 0

new MAX_OBJECT_FIJOS;

#define MAX_RADIO_STREAM			(500)
#define MAX_RADIO_STREAM_MIN		(250)

forward RemoveBuildingForPlayerEx(playerid);

public RemoveBuildingForPlayerEx(playerid) // total: 135
{
	//Remove Buildings - PF EXTERIOR - 0/0
	RemoveBuildingForPlayer(playerid, 16090, 315.773, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 16091, 289.742, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 16089, 342.125, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 16087, 358.679, 1430.449, 11.617, 0.250);
	RemoveBuildingForPlayer(playerid, 16088, 368.429, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 16092, 394.156, 1431.089, 5.273, 0.250);
	RemoveBuildingForPlayer(playerid, 3426, 419.445, 1411.880, 6.765, 0.250);
	RemoveBuildingForPlayer(playerid, 3428, 419.445, 1411.880, 6.765, 0.250);
	RemoveBuildingForPlayer(playerid, 3255, 246.563, 1410.540, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3291, 246.563, 1410.540, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3255, 246.563, 1385.890, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3291, 246.563, 1385.890, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3255, 246.563, 1435.199, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3291, 246.563, 1435.199, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3259, 262.507, 1465.199, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3424, 262.507, 1465.199, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 253.820, 1458.109, 10.117, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 253.820, 1456.130, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 255.531, 1472.979, 19.757, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 254.679, 1468.209, 18.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 254.679, 1464.630, 22.468, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 252.125, 1473.890, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 252.813, 1473.829, 11.406, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 255.531, 1454.550, 19.148, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 253.820, 1458.109, 23.781, 0.250);
	RemoveBuildingForPlayer(playerid, 3673, 247.929, 1461.859, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3682, 247.929, 1461.859, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3674, 247.554, 1471.089, 35.898, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 222.507, 1444.699, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 222.507, 1444.699, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3259, 210.414, 1444.839, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3424, 210.414, 1444.839, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 16086, 232.289, 1434.479, 13.500, 0.250);
	RemoveBuildingForPlayer(playerid, 3257, 223.179, 1421.189, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3288, 223.179, 1421.189, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 212.078, 1426.030, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 212.078, 1426.030, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 204.641, 1409.849, 11.406, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 203.953, 1409.910, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 205.647, 1394.130, 10.117, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 206.507, 1404.229, 18.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 205.647, 1392.160, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 207.358, 1390.569, 19.148, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 205.647, 1394.130, 23.781, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 206.507, 1400.660, 22.468, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 206.507, 1387.849, 27.492, 0.250);
	RemoveBuildingForPlayer(playerid, 3673, 199.757, 1397.880, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3682, 199.757, 1397.880, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3674, 199.382, 1407.119, 35.898, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 254.679, 1451.829, 27.492, 0.250);
	RemoveBuildingForPlayer(playerid, 3255, 246.563, 1361.239, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3291, 246.563, 1361.239, 9.687, 0.250);
	RemoveBuildingForPlayer(playerid, 3257, 221.570, 1374.969, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3288, 221.570, 1374.969, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3259, 220.647, 1355.189, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3424, 220.647, 1355.189, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 207.539, 1371.239, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 207.539, 1371.239, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 221.179, 1390.300, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 221.179, 1390.300, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3259, 221.703, 1404.510, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3424, 221.703, 1404.510, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 196.022, 1462.020, 10.117, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 199.585, 1463.729, 19.148, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 181.156, 1463.729, 19.757, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 196.022, 1462.020, 23.781, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 198.000, 1462.020, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 189.500, 1462.880, 22.468, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 185.921, 1462.880, 18.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 180.242, 1460.319, 16.296, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 180.304, 1461.010, 11.406, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 202.304, 1462.880, 27.492, 0.250);
	RemoveBuildingForPlayer(playerid, 3674, 183.039, 1455.750, 35.898, 0.250);
	RemoveBuildingForPlayer(playerid, 3673, 192.272, 1456.130, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3682, 192.272, 1456.130, 33.414, 0.250);
	RemoveBuildingForPlayer(playerid, 3256, 218.257, 1467.540, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3290, 218.257, 1467.540, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3258, 183.742, 1444.869, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3289, 183.742, 1444.869, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3256, 190.914, 1371.770, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3290, 190.914, 1371.770, 9.585, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 166.789, 1356.989, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 166.789, 1356.989, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 166.789, 1392.160, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 166.789, 1392.160, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 133.742, 1392.160, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 133.742, 1392.160, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 16392, 150.078, 1378.339, 11.843, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 133.742, 1356.989, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 133.742, 1356.989, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 133.742, 1426.910, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 133.742, 1426.910, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 133.742, 1459.640, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 133.742, 1459.640, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3636, 166.789, 1426.910, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 3683, 166.789, 1426.910, 17.093, 0.250);
	RemoveBuildingForPlayer(playerid, 16394, 238.272, 1452.939, 11.835, 0.250);
	RemoveBuildingForPlayer(playerid, 16393, 149.375, 1452.939, 11.851, 0.250);
	RemoveBuildingForPlayer(playerid, 16392, 150.078, 1378.339, 11.843, 0.250);
	RemoveBuildingForPlayer(playerid, 16391, 239.296, 1367.989, 11.835, 0.250);
	RemoveBuildingForPlayer(playerid, 3675, 207.358, 1409.000, 19.757, 0.250);
	//continuar
	RemoveBuildingForPlayer(playerid, 3562, 2232.3984, -1464.7969, 25.6484, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2247.5313, -1464.7969, 25.5469, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2263.7188, -1464.7969, 25.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2243.7109, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2230.6094, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 3562, 2256.6641, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 713, 2275.3906, -1438.6641, 22.5547, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2230.6094, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2243.7109, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 645, 2237.5313, -1395.4844, 23.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2256.6641, -1401.7813, 25.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 1224, 2224.8438, -1229.5938, 23.5625, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 2227.3594, -1230.1797, 23.4063, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 2225.4688, -1231.1406, 23.4063, 0.25);
	RemoveBuildingForPlayer(playerid, 1221, 2222.8750, -1229.4219, 23.4063, 0.25);
	RemoveBuildingForPlayer(playerid, 645, 2239.5703, -1468.8047, 22.6875, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2232.3984, -1464.7969, 25.6484, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2247.5313, -1464.7969, 25.5469, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2267.4688, -1470.1953, 21.7188, 0.25);
	RemoveBuildingForPlayer(playerid, 3582, 2263.7188, -1464.7969, 25.4375, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1428.1328, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1428.1328, 30.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1413.8984, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1413.8984, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1395.2656, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1395.2656, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1379.8281, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1379.8281, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2490.6953, -1362.6563, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3699, 2471.6719, -1362.6563, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1428.1328, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1413.8984, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1395.2656, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1379.8281, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1428.1328, 30.5156, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1413.8984, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1395.2656, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1379.8281, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2471.6719, -1362.6563, 30.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 3698, 2490.6953, -1362.6563, 30.8125, 0.25);

    //pressban /entrenar
    RemoveBuildingForPlayer(playerid, 2631, 772.9922, 5.3828, 999.7266, 0.25);

	//PEAJE LV-LS / 121 objetos
	RemoveBuildingForPlayer(playerid, 620, 2889.5234, -692.9141, 9.4844, 0.25);

	//PEAJE SF-PUEBLOS / 19 objetos / EdinsonWalker
	RemoveBuildingForPlayer(playerid, 9868, -2681.3516, 1274.6094, 57.4219, 0.25);
	RemoveBuildingForPlayer(playerid, 9623, -2681.3516, 1274.6094, 57.4219, 0.25);

	//arreglo bug del bar dillimore - 3
	RemoveBuildingForPlayer(playerid, 14650, 681.4766, -456.4141, -24.5625, 0.25);
	RemoveBuildingForPlayer(playerid, 14653, 681.4453, -455.1719, -25.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 14654, 681.4531, -457.6172, -23.7969, 0.25);

	//portones pay'n'spray y garajes bomba - 18objs
	RemoveBuildingForPlayer(playerid, 5043, 1843.3672, -1856.3203, 13.8750, 0.25);
	RemoveBuildingForPlayer(playerid, 5340, 2644.8594, -2039.2344, 14.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 5422, 2071.4766, -1831.4219, 14.5625, 0.25);
	RemoveBuildingForPlayer(playerid, 5856, 1024.9844, -1029.3516, 33.1953, 0.25);
	RemoveBuildingForPlayer(playerid, 5779, 1041.3516, -1025.9297, 32.6719, 0.25);
	RemoveBuildingForPlayer(playerid, 6400, 488.2813, -1734.6953, 12.3906, 0.25);
	RemoveBuildingForPlayer(playerid, 10575, -2716.3516, 217.4766, 5.3828, 0.25);
	RemoveBuildingForPlayer(playerid, 11313, -1935.8594, 239.5313, 35.3516, 0.25);
	RemoveBuildingForPlayer(playerid, 11319, -1904.5313, 277.8984, 42.9531, 0.25);
	RemoveBuildingForPlayer(playerid, 9625, -2425.7266, 1027.9922, 52.2813, 0.25);
	RemoveBuildingForPlayer(playerid, 9093, 2386.6563, 1043.6016, 11.5938, 0.25);
	RemoveBuildingForPlayer(playerid, 8957, 2393.7656, 1483.6875, 12.7109, 0.25);
	RemoveBuildingForPlayer(playerid, 7707, 2006.0000, 2317.6016, 11.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 7709, 2006.0000, 2303.7266, 11.3125, 0.25);
	RemoveBuildingForPlayer(playerid, 7891, 1968.7422, 2162.4922, 12.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 3294, -1420.5469, 2591.1563, 57.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 3294, -100.0000, 1111.4141, 21.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 13028, 720.0156, -462.5234, 16.8594, 0.25);

	//ferreteria - 19
	RemoveBuildingForPlayer(playerid, 2358, 285.6328, -112.7344, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.8203, -112.6250, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.7656, -112.6016, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.8047, -112.6172, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 285.6719, -112.7344, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 285.6875, -112.7344, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 286.5469, -112.7266, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 286.5078, -112.7344, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 286.5938, -112.7422, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.0703, -112.4531, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.0781, -112.4922, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 284.0781, -112.5078, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2359, 284.4141, -111.9141, 1000.7344, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 287.3438, -112.7266, 1000.8906, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 287.3125, -112.7422, 1000.6406, 0.25);
	RemoveBuildingForPlayer(playerid, 2358, 287.3984, -112.7266, 1001.1328, 0.25);
	RemoveBuildingForPlayer(playerid, 2619, 295.4063, -112.6875, 1003.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 18044, 287.8672, -109.9922, 1002.2344, 0.25);
	RemoveBuildingForPlayer(playerid, 18048, 290.2266, -105.3203, 1000.9922, 0.25);

	//stake park - 15
	RemoveBuildingForPlayer(playerid, 5466, 1881.7969, -1315.5391, 37.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1837.1328, -1369.9844, 12.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 5400, 1913.1328, -1370.5000, 17.7734, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1926.0313, -1350.5469, 16.2031, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1876.9219, -1350.6875, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1861.7422, -1330.8906, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1861.7891, -1305.2109, 12.8672, 0.25);
	RemoveBuildingForPlayer(playerid, 5463, 1881.7969, -1315.5391, 37.9453, 0.25);
	RemoveBuildingForPlayer(playerid, 5644, 1881.8203, -1315.9219, 30.8359, 0.25);
	RemoveBuildingForPlayer(playerid, 5464, 1902.4297, -1309.5391, 29.9141, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1967.0859, -1331.0469, 23.1641, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1836.7500, -1271.0078, 12.6875, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1946.2266, -1270.7656, 19.8047, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1861.7891, -1251.0078, 12.7031, 0.25);
	RemoveBuildingForPlayer(playerid, 1308, 1908.9766, -1251.0156, 12.6094, 0.25);
	//surtidores explosivos - 2
	RemoveBuildingForPlayer(playerid, 1676, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1686, 0.0, 0.0, 0.0, 6000.0);
	//teléfonos públicos - 2
	RemoveBuildingForPlayer(playerid, 1216, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1363, 0.0, 0.0, 0.0, 6000.0);
	//graffitis
	RemoveBuildingForPlayer(playerid, 1524, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1525, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1526, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1527, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1528, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1529, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1530, 0.0, 0.0, 0.0, 6000.0);
	RemoveBuildingForPlayer(playerid, 1531, 0.0, 0.0, 0.0, 6000.0);
	
	//deposito - 11
	RemoveBuildingForPlayer(playerid, 1278, -533.5391, -559.6953, 38.5469, 0.25);
	RemoveBuildingForPlayer(playerid, 1415, -541.4297, -561.2266, 24.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1415, -513.7578, -561.0078, 24.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1441, -503.6172, -540.5313, 25.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1441, -502.4063, -513.0156, 25.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, -553.6875, -481.6328, 25.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1441, -554.4531, -496.1797, 25.1641, 0.25);
	RemoveBuildingForPlayer(playerid, 1441, -537.0391, -469.1172, 25.2266, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, -516.9453, -496.6484, 25.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1440, -503.1250, -509.0000, 25.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 17020, -475.9766, -544.8516, 28.1172, 0.25);
    // ——— leñador
	RemoveBuildingForPlayer(playerid, 1454, -574.3906, -1476.8203, 10.3828, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -577.3438, -1478.5703, 10.6563, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -580.2891, -1480.3125, 10.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 17457, -570.7344, -1490.3203, 15.0703, 0.25);
	RemoveBuildingForPlayer(playerid, 3286, -559.3047, -1486.3281, 12.8359, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -586.1953, -1483.7969, 11.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -584.1328, -1485.9844, 10.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 1454, -583.2422, -1482.0547, 10.7969, 0.25);

	//semáforos
	RemoveBuildingForPlayer(playerid, 1283, 1442.9375, -1871.4219, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1518.8047, -1873.3828, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1311.2734, -1746.1172, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1345.7656, -1740.6172, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1325.7109, -1732.8281, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1335.1953, -1731.7813, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1357.5156, -1732.9375, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1414.4141, -1731.4297, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1530.8828, -1883.2344, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1539.9297, -1871.6406, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1690.0938, -1796.8516, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1762.7891, -1732.8281, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1736.5313, -1731.7969, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1744.4922, -1598.3359, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1753.4453, -1610.8281, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1765.0781, -1604.1875, 15.6250, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2410.7656, -1998.8047, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2416.6641, -2020.9688, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2425.0469, -2006.8438, 15.8125, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2066.1641, -1329.9688, 26.0313, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2072.4531, -1351.8672, 26.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1964.0703, -1261.4453, 25.9609, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1987.3984, -1260.3828, 26.0234, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1975.6484, -1249.5938, 26.2109, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2066.3594, -1290.2578, 26.0078, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2072.3984, -1271.7031, 26.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2072.6172, -1232.4609, 26.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2066.1406, -1210.5625, 26.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1958.7031, -1140.3438, 28.1250, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1974.6875, -1146.8516, 28.0625, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1981.9141, -1131.4297, 28.0859, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1966.2031, -1124.6875, 28.0078, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 1990.6094, -1752.8438, 15.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2013.2891, -1751.7656, 15.5859, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2001.9219, -1683.6172, 15.5391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2001.3594, -1665.5391, 15.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2030.6875, -1612.9063, 15.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2129.9453, -1397.0234, 26.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2123.5703, -1384.0859, 25.9922, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2139.3047, -1383.5781, 26.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2155.6875, -1384.9219, 26.2500, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2178.2422, -1383.9141, 26.2031, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2201.1797, -1385.0781, 26.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2224.1328, -1383.7813, 26.1484, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2282.3750, -1382.2734, 26.0938, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2270.0625, -1289.6875, 26.0156, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2271.7734, -1311.8203, 26.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2272.1484, -1231.4844, 26.0000, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2269.9844, -1209.3516, 26.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2070.2109, -1812.8828, 15.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2080.9375, -1800.9453, 15.6172, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2082.2734, -1823.9141, 15.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2082.0313, -1683.6719, 15.5000, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2081.2109, -1660.9453, 15.5391, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2070.1484, -1612.9219, 15.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2083.8047, -1611.7500, 15.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2103.8359, -1612.7266, 15.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1283, 2092.9922, -1604.1563, 15.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2848.0469, -1664.0078, 13.1250, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2221.8359, -1659.1172, 17.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2235.1719, -1659.2813, 17.6094, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2236.0391, -1650.4219, 17.6016, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2335.3828, -1653.2891, 15.5781, 0.25);
	RemoveBuildingForPlayer(playerid, 1315, 2350.1641, -1664.6875, 15.7500, 0.25);
	RemoveBuildingForPlayer(playerid, 1312, 1312.0469, -1139.7500, 26.8750, 0.25);
	//lspd exterior - 10
	RemoveBuildingForPlayer(playerid, 700, 1192.1016, -1738.0000, 13.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1192.1016, -1733.0156, 14.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 673, 1192.5625, -1723.8828, 12.5234, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1198.3203, -1724.5859, 14.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 700, 1204.4844, -1724.8516, 13.0391, 0.25);
	RemoveBuildingForPlayer(playerid, 1215, 1221.0234, -1722.7656, 13.1016, 0.25);
	RemoveBuildingForPlayer(playerid, 647, 1257.5781, -1724.6875, 14.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 1215, 1233.4844, -1722.7656, 13.1016, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1219.9844, -1717.2344, 15.9141, 0.25);
	RemoveBuildingForPlayer(playerid, 1297, 1251.5703, -1717.2344, 15.9141, 0.25);
	//carpintero 60 objs
    RemoveBuildingForPlayer(playerid, 3672, 2112.9375, -2384.6172, 18.8828, 0.25);
	RemoveBuildingForPlayer(playerid, 1290, 2088.6094, -2350.7344, 18.4766, 0.25);
	RemoveBuildingForPlayer(playerid, 3629, 2112.9375, -2384.6172, 18.8828, 0.25);

	//instituto
	RemoveBuildingForPlayer(playerid, 5221, 2360.7188, -2117.0078, 16.2578, 0.25);
	RemoveBuildingForPlayer(playerid, 5192, 2360.7188, -2117.0078, 16.2578, 0.25);

	//alexandria park
	RemoveBuildingForPlayer(playerid, 17843, 2387.8047, -1695.6484, 13.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2367.6016, -1706.2891, 11.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 620, 2375.0625, -1715.7969, 11.2891, 0.25);
	RemoveBuildingForPlayer(playerid, 17614, 2387.8047, -1695.6484, 13.7422, 0.25);
	RemoveBuildingForPlayer(playerid, 17876, 2393.0625, -1677.5234, 20.8203, 0.25);

	//arias park
	RemoveBuildingForPlayer(playerid, 4965, 1734.3984, -2019.7031, 14.3438, 0.25);
	RemoveBuildingForPlayer(playerid, 4873, 1734.3984, -2019.7031, 14.3438, 0.25);

	return 1;
}

stock cargar_maps()
{
	//instituto
	CreateObject(-10001, 2360.71875, -2117.00781, 16.25780,   0.00000, 0.00000, 0.00000, 1000.000); //Agrega la ID por la que vayas a usar en tu Artconfig.
	//alexandria park
	CreateObject(-10002, 2387.80469, -1695.64844, 13.74220,   0.00000, 0.00000, 0.00000, 1000.000);
	CreateDynamicObjectEx(1412, 2356.16650, -1722.90540, 13.76600,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2353.18652, -1715.93848, 13.70600,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2353.18652, -1706.47913, 13.70600,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2353.18652, -1701.20959, 13.70600,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2374.46362, -1701.07654, 13.76600,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2374.46362, -1706.32813, 13.76600,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2374.45947, -1711.54639, 13.76600,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2374.46362, -1716.79248, 13.76600,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2374.46362, -1720.29773, 13.76600,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2371.84277, -1722.92480, 13.76600,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2366.65527, -1722.92480, 13.76600,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1412, 2361.41943, -1722.92480, 13.76600,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1358, 2352.05347, -1723.18408, 13.73110,   0.00000, 0.00000, 90.00000, 1000.000, 1000.000);

	//arias park
	CreateObject(-10003, 1734.39844, -2019.70313, 14.34380,   0.00000, 0.00000, 0.00000, 1000.000);
	//instituto / 175 objetos / edinsonwalker
	CreateObject(14415, 2677.87305, -1308.46191, 1014.82800,   0.00000, 0.00000, 181.38977);
	CreateObject(14415, 2626.68555, -1326.53418, 1014.82434,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1506, 2610.87354, -1331.08362, 1008.66028,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1506, 2612.37183, -1331.08301, 1008.66028,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2643.50342, -1334.01514, 1008.66028,   0.00000, 0.00000, 90.75000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2643.49561, -1315.50964, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2675.34937, -1297.08472, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.54102, -1332.54822, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.97168, -1321.73218, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2671.83984, -1302.59790, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2207, 2631.64941, -1338.16809, 1008.66028,   0.00000, 359.23096, 178.25484, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2207, 2628.27002, -1315.69250, 1008.66028,   0.00000, 359.23096, 49.13495, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2207, 2663.28687, -1314.96118, 1008.66394,   0.00000, 359.23096, 4.59848, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2630.61768, -1339.62622, 1008.66028,   0.00000, 0.00000, 155.81493, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2627.32251, -1313.93225, 1008.66028,   0.00000, 0.00000, 46.13493, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2663.94385, -1313.42957, 1008.66394,   0.00000, 0.00000, 23.21347, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2662.18848, -1303.05701, 1008.62964,   0.00000, 0.00000, 167.84489, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2698.46411, -1314.16309, 1008.66394,   0.00000, 0.00000, 271.46106, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2698.54541, -1317.18542, 1008.66394,   0.00000, 0.00000, 90.82397, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2693.52344, -1303.51843, 1008.66394,   0.00000, 0.00000, 180.88904, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2690.52490, -1303.59253, 1008.66394,   0.00000, 0.00000, 1.52179, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2685.57764, -1298.57007, 1008.66394,   0.00000, 0.00000, 91.58707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2685.46118, -1295.53320, 1008.66394,   0.00000, 0.00000, 271.45105, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2670.14648, -1312.06909, 1008.66394,   0.00000, 0.00000, 181.38525, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2667.15454, -1312.20410, 1008.66412,   0.00000, 0.00000, 2.27740, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2669.94019, -1303.61340, 1008.66394,   0.00000, 0.00000, 181.38428, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2666.92871, -1303.73438, 1008.66028,   0.00000, 0.00000, 2.27417, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2672.32593, -1297.18286, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2668.83594, -1297.24548, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2673.89136, -1302.48584, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2670.91431, -1302.52209, 1008.66028,   0.00000, 0.00000, 91.52161, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2671.81714, -1301.82361, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2671.82495, -1301.02075, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2674.92578, -1301.76794, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2670.24048, -1297.44421, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2670.24121, -1296.57495, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2670.24365, -1295.77173, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2673.61377, -1295.61499, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2673.69727, -1297.27258, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2673.65430, -1296.45544, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2676.22583, -1297.02161, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2676.20239, -1296.28833, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2676.18652, -1295.52124, 1009.16315,   0.00000, 0.00000, 0.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2641.18213, -1334.04895, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2638.93286, -1334.08105, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2639.02075, -1339.17700, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2641.17920, -1339.14355, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2643.58447, -1339.10889, 1008.66028,   0.00000, 0.00000, 90.74707, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.62500, -1333.31860, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.57642, -1334.12134, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.07471, -1332.57178, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.06860, -1333.29810, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.10791, -1334.06982, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.85889, -1334.12427, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.84570, -1333.35999, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.82104, -1332.54858, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.93921, -1339.29285, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.95093, -1338.46436, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2639.92725, -1337.71655, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.02539, -1337.69873, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.10791, -1338.46484, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2642.03467, -1339.27173, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.43262, -1339.25195, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.42407, -1338.42554, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.42139, -1337.67651, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2640.77393, -1315.47998, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2637.93237, -1315.29956, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2638.06787, -1321.59619, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2640.98608, -1321.68591, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2205, 2643.54175, -1321.64343, 1008.66028,   0.00000, 0.00000, 90.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.98413, -1320.99207, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.95117, -1320.15601, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.87402, -1320.24451, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.80444, -1321.08972, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.86279, -1321.81763, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.41064, -1321.79150, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.41528, -1321.00061, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.39331, -1320.21558, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.44775, -1315.62866, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.42603, -1314.82532, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2644.41553, -1314.05249, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.81494, -1315.39136, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.66821, -1315.58533, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.68140, -1314.71948, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2641.70166, -1313.97534, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.75610, -1314.63611, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2638.76782, -1313.81519, 1009.15948,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2652.29785, -1316.32654, 1008.66394,   0.00000, 0.00000, 270.02414, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2652.37915, -1319.32813, 1008.66394,   0.00000, 0.00000, 92.27206, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2618.66455, -1339.29126, 1008.66394,   0.00000, 0.00000, 90.76868, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2618.62500, -1336.29297, 1008.66394,   0.00000, 0.00000, 270.01343, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2634.49976, -1323.03406, 1008.66394,   0.00000, 0.00000, 358.51096, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2637.49756, -1323.08374, 1008.66394,   0.00000, 0.00000, 179.25806, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2634.49829, -1331.57935, 1008.66394,   0.00000, 0.00000, 0.00586, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1491, 2637.53540, -1331.55444, 1008.66394,   0.00000, 0.00000, 180.00293, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1536, 2707.32666, -1313.97900, 1008.66394,   0.00000, 0.00000, 272.25000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1536, 2707.42798, -1316.96753, 1008.66394,   0.00000, 0.00000, 89.99969, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14657, 2692.33057, -1325.70654, 1009.25031,   0.00000, 0.00000, -88.92000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1984, 2694.62231, -1307.37390, 1008.62347,   0.00000, 0.00000, 90.18000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2452, 2696.66675, -1304.21765, 1008.63135,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2665, 2698.09399, -1306.37769, 1010.66663,   0.00000, 0.00000, -88.62004, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2453, 2694.56445, -1307.41541, 1009.93585,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2419, 2697.43018, -1307.22339, 1008.62640,   0.00000, 0.00000, -86.16000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2367, 2697.53809, -1309.99658, 1008.61041,   0.00000, 0.00000, 0.96000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2367, 2695.45068, -1310.04346, 1008.61041,   0.00000, 0.00000, 0.96000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2367, 2694.66675, -1308.42456, 1008.61035,   0.00000, 0.00000, -90.12000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2421, 2698.22192, -1309.39709, 1009.96381,   0.00000, 0.00000, -88.38002, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1775, 2698.03198, -1318.06042, 1009.73315,   0.00000, 0.00000, 270.41977, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19175, 2688.38062, -1303.97656, 1010.78705,   0.00000, 0.00000, 1.38000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1713, 2689.22095, -1309.63232, 1008.60474,   0.00000, 0.00000, 181.13995, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1713, 2687.47241, -1304.72095, 1008.60468,   0.00000, 0.00000, 1.44000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1827, 2688.63672, -1307.11304, 1008.64691,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2964, 2688.37280, -1314.29724, 1008.64441,   0.00000, 0.00000, -84.23997, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2010, 2686.67798, -1310.38171, 1008.64423,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1713, 2686.68896, -1308.10376, 1008.60468,   0.00000, 0.00000, 90.90004, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1713, 2687.62720, -1311.08936, 1008.60468,   0.00000, 0.00000, 1.20000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2718, 2698.16187, -1312.28674, 1010.18738,   0.00000, 0.00000, -88.55997, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2429, 2698.46094, -1311.17847, 1009.62280,   0.00000, 0.00000, -90.48001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1808, 2686.60400, -1318.50330, 1008.63702,   0.00000, 0.00000, 90.71999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14782, 2697.98828, -1302.85034, 1009.60876,   0.00000, 0.00000, 180.41997, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14657, 2697.09058, -1289.76221, 1009.25031,   0.00000, 0.00000, -88.92000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14782, 2701.64404, -1301.77734, 1009.60876,   0.00000, 0.00000, 271.25995, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14455, 2680.15283, -1315.47424, 1010.29498,   0.00000, 0.00000, 1.44000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3077, 2660.21460, -1298.52930, 1008.60901,   0.00000, 0.00000, -89.87999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2491, 2662.91577, -1298.35840, 1008.03729,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2674.95776, -1302.54639, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2310, 2674.90552, -1300.94727, 1009.16315,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2207, 2663.22632, -1301.59875, 1008.66394,   0.00000, 359.23096, 179.73849, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2164, 2665.28247, -1322.48254, 1008.64783,   0.00000, 0.00000, 180.90001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3077, 2661.48999, -1317.78381, 1008.60901,   0.00000, 0.00000, -89.87999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2491, 2664.06934, -1318.07324, 1008.03729,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2671.23926, -1313.26709, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2671.35327, -1316.54712, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2671.41748, -1319.97705, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2673.76318, -1316.48950, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2673.68311, -1313.18640, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2676.28442, -1313.12158, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2676.35156, -1316.35156, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2673.88354, -1319.95447, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2676.50732, -1319.89343, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2669.13208, -1320.08813, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2185, 2668.95044, -1316.49390, 1008.66766,   0.00000, 0.00000, -88.50001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2670.07813, -1317.33191, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2670.19165, -1320.98779, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2672.61401, -1320.79993, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2675.13623, -1320.85840, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2677.66895, -1320.71484, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2672.40869, -1317.32910, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2675.00708, -1317.27124, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2677.54907, -1317.19482, 1008.67566,   0.00000, 0.00000, 89.10001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2677.52368, -1314.01245, 1008.67566,   0.00000, 0.00000, 92.04001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2675.06006, -1314.02649, 1008.67566,   0.00000, 0.00000, 92.04001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1722, 2672.55933, -1314.08252, 1008.67566,   0.00000, 0.00000, 92.04001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14532, 2662.63477, -1320.74756, 1009.63788,   0.00000, 0.00000, -56.81999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14782, 2602.80444, -1332.03064, 1009.67230,   0.00000, 0.00000, 90.17999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3496, 2602.92578, -1339.76331, 1008.51721,   0.00000, 0.00000, -47.04000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2627, 2607.66187, -1339.07776, 1008.64673,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2627, 2606.21338, -1339.08765, 1008.64673,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2627, 2609.12280, -1339.09290, 1008.64673,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2631, 2606.46021, -1333.16895, 1008.68732,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2632, 2609.81543, -1335.79529, 1008.68732,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2630, 2614.75098, -1332.86877, 1008.66138,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2630, 2616.50439, -1332.84180, 1008.66138,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2915, 2607.94092, -1332.88220, 1008.84375,   0.00000, 0.00000, -28.08000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1808, 2618.24707, -1335.79810, 1008.60956,   0.00000, 0.00000, -90.77998, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2915, 2607.18579, -1333.03418, 1008.84375,   0.00000, 0.00000, -54.23999, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2844, 2610.45850, -1339.95459, 1008.65393,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14782, 2614.84570, -1339.88025, 1009.67230,   0.00000, 0.00000, 179.94002, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3077, 2630.59082, -1318.84875, 1008.61169,   0.00000, 0.00000, -84.96001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2491, 2633.70020, -1318.34973, 1008.03729,   0.00000, 0.00000, 0.00000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1714, 2630.61768, -1339.62622, 1008.66028,   0.00000, 0.00000, 155.81493, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3077, 2629.98560, -1334.88354, 1008.61169,   0.00000, 0.00000, -94.20001, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2491, 2632.52368, -1334.89697, 1008.03729,   0.00000, 0.00000, -9.72000, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14455, 2632.58496, -1331.92871, 1010.14722,   0.00000, 0.00000, 179.87993, -1, 31, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2186, 2660.19995, -1314.01575, 1008.63147,   0.00000, 0.00000, 34.02002, -1, 31, -1, MAX_RADIO_STREAM);
	//interior idlewood int1 - 39 objs
	CreateDynamicObject(14596, 1820.47034, -1055.44849, 22.05060,   0.00000, 0.00000, 180.00000, 56, 56);
	CreateDynamicObject(19456, 1815.97559, -1055.87646, 23.18440,   90.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(1498, 1815.04187, -1055.93420, 22.93605,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19858, 1825.25769, -1059.94202, 24.17264,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(19456, 1825.33105, -1059.25354, 23.18440,   90.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19456, 1825.33105, -1059.25354, 23.18440,   90.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19456, 1826.13696, -1058.91235, 30.95345,   90.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19858, 1826.04529, -1059.89185, 29.94178,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(19858, 1821.75452, -1062.28723, 29.94180,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19858, 1818.11218, -1062.28723, 29.94180,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(19858, 1814.84241, -1060.64465, 29.94180,   0.00000, 0.00000, -90.00000, 56, 56);
	CreateDynamicObject(19858, 1820.49890, -1058.12842, 24.18528,   0.00000, 0.00000, 180.00000, 56, 56);
	CreateDynamicObject(19858, 1823.46204, -1056.62952, 29.94180,   0.00000, 0.00000, 180.00000, 56, 56);
	CreateDynamicObject(19858, 1814.83716, -1048.86938, 27.97093,   0.00000, 0.00000, -90.00000, 56, 56);
	CreateDynamicObject(1764, 1822.11438, -1048.98474, 24.69716,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(2231, 1824.79041, -1048.79749, 24.74630,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(18663, 1824.91052, -1050.54956, 26.03088,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(2671, 1817.44507, -1059.94092, 22.96277,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(2671, 1815.06384, -1057.70032, 22.98669,   0.00000, 0.00000, 33.24000, 56, 56);
	CreateDynamicObject(2671, 1822.83704, -1059.56152, 22.97620,   0.00000, 0.00000, -58.92001, 56, 56);
	CreateDynamicObject(2690, 1822.10767, -1057.49536, 23.08419,   -87.83999, 53.82004, -106.92003, 56, 56);
	CreateDynamicObject(2121, 1814.95374, -1061.55444, 23.46568,   0.00000, 0.00000, 142.67992, 56, 56);
	CreateDynamicObject(2121, 1816.05249, -1061.69958, 23.44081,   0.00000, 0.00000, 193.73993, 56, 56);
	CreateDynamicObject(2692, 1824.38977, -1061.43127, 23.68450,   0.00000, 0.00000, -123.06001, 56, 56);
	CreateDynamicObject(2670, 1823.49573, -1050.50610, 24.84618,   0.00000, 0.00000, 42.06001, 56, 56);
	CreateDynamicObject(4729, 1830.55579, -1056.64270, 30.76050,   0.00000, 0.00000, 289.97992, 56, 56);
	CreateDynamicObject(1711, 1824.79797, -1061.15649, 28.73417,   0.00000, 0.00000, -90.05997, 56, 56);
	CreateDynamicObject(1738, 1815.05090, -1050.97815, 27.37410,   0.00000, 0.00000, -90.00000, 56, 56);
	CreateDynamicObject(1509, 1817.68835, -1058.01978, 28.94992,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(1509, 1817.72266, -1057.57898, 28.94992,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(1509, 1817.60376, -1057.68030, 28.94992,   0.00000, 0.00000, 0.00000, 56, 56);
	CreateDynamicObject(1509, 1817.56653, -1057.90088, 28.78456,   82.14001, -40.32000, 0.00000, 56, 56);
	CreateDynamicObject(0, 1816.41138, -1049.75659, 26.85710,   0.00000, 0.00000, 359.93930, 56, 56);
	CreateDynamicObject(2671, 1823.52246, -1058.60254, 28.77441,   0.00000, 0.00000, -128.63997, 56, 56);
	CreateDynamicObject(2671, 1817.92310, -1060.07910, 28.77441,   0.00000, 0.00000, -232.13995, 56, 56);
	CreateDynamicObject(18664, 1819.29993, -1058.16162, 30.53199,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(18665, 1820.38049, -1058.16467, 30.17990,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(18659, 1819.80505, -1058.16858, 31.25770,   0.00000, 0.00000, 90.00000, 56, 56);
	CreateDynamicObject(1232, 1813.44421, -1054.55884, 32.99968,   -68.69991, 134.45996, 0.00000, 56, 56);

	//interior idlewood int2 - 43objs
	CreateDynamicObject(14596, 1820.47034, -1055.44849, 22.05060,   0.00000, 0.00000, 180.00000, 43, 43);
	CreateDynamicObject(19456, 1815.97559, -1055.87646, 23.18440,   90.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(19858, 1825.25769, -1059.94202, 24.15552,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(19456, 1825.33105, -1059.25354, 23.18440,   90.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19456, 1825.33105, -1059.25354, 23.18440,   90.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19456, 1826.13696, -1058.91235, 30.95345,   90.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19858, 1826.04529, -1059.89185, 29.94178,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(19858, 1821.75452, -1062.28723, 29.94180,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19858, 1818.11218, -1062.28723, 29.94180,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(19858, 1814.84241, -1060.64465, 29.94180,   0.00000, 0.00000, -90.00000, 43, 43);
	CreateDynamicObject(19858, 1823.46204, -1056.62952, 29.94180,   0.00000, 0.00000, 180.00000, 43, 43);
	CreateDynamicObject(19858, 1814.83716, -1048.86938, 27.97093,   0.00000, 0.00000, -90.00000, 43, 43);
	CreateDynamicObject(1764, 1822.11438, -1048.98474, 24.69716,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(2231, 1824.79041, -1048.79749, 24.74630,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(18665, 1824.91052, -1050.54956, 26.03090,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(2671, 1817.44507, -1059.94092, 22.97450,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(2671, 1815.22510, -1057.76160, 22.97450,   0.00000, 0.00000, 29.46000, 43, 43);
	CreateDynamicObject(2671, 1821.43677, -1060.26355, 22.97450,   0.00000, 0.00000, 56.10000, 43, 43);
	CreateDynamicObject(2690, 1824.60974, -1056.00696, 23.08286,   -87.83999, 53.82004, -146.28003, 43, 43);
	CreateDynamicObject(2121, 1815.04578, -1056.80457, 23.44760,   0.00000, 0.00000, 24.66000, 43, 43);
	CreateDynamicObject(2121, 1816.84924, -1057.42322, 23.44756,   0.00000, 0.00000, 317.99985, 43, 43);
	CreateDynamicObject(2693, 1824.38977, -1061.43127, 23.62430,   0.00000, 0.00000, -125.63999, 43, 43);
	CreateDynamicObject(2670, 1823.49573, -1050.50610, 24.84618,   0.00000, 0.00000, 42.06001, 43, 43);
	CreateDynamicObject(4729, 1826.04126, -1059.55322, 30.76050,   0.00000, 0.00000, 199.97984, 43, 43);
	CreateDynamicObject(1727, 1824.53845, -1060.77576, 28.73421,   0.00000, 0.00000, -103.56001, 43, 43);
	CreateDynamicObject(1738, 1815.05090, -1050.97815, 27.37410,   0.00000, 0.00000, -90.00000, 43, 43);
	CreateDynamicObject(1509, 1817.68835, -1058.01978, 28.94992,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(1509, 1817.72266, -1057.57898, 28.94992,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(1509, 1817.60376, -1057.68030, 28.94992,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(1509, 1817.56653, -1057.90088, 28.78456,   82.14001, -40.32000, 0.00000, 43, 43);
	CreateDynamicObject(0, 1816.41138, -1049.75659, 26.85710,   0.00000, 0.00000, 359.93930, 43, 43);
	CreateDynamicObject(2671, 1823.52246, -1058.60254, 28.77441,   0.00000, 0.00000, -128.63997, 43, 43);
	CreateDynamicObject(2671, 1817.92310, -1060.07910, 28.77441,   0.00000, 0.00000, -232.13995, 43, 43);
	CreateDynamicObject(18663, 1819.29993, -1058.16162, 30.53200,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(18665, 1820.38049, -1058.16467, 30.17990,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(18660, 1819.80505, -1058.16858, 31.25770,   0.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(1232, 1813.44421, -1054.55884, 32.99968,   -68.69991, 134.45996, 0.00000, 43, 43);
	CreateDynamicObject(19456, 1816.34167, -1062.35181, 23.18440,   90.00000, 0.00000, 90.00000, 43, 43);
	CreateDynamicObject(1536, 1814.84094, -1062.31775, 22.92750,   0.00000, 0.00000, 0.00000, 43, 43);
	CreateDynamicObject(1536, 1817.85498, -1062.28992, 22.92751,   0.00000, 0.00000, -180.47998, 43, 43);
	CreateDynamicObject(1289, 1819.12720, -1058.37122, 23.44770,   0.00000, 0.00000, 180.00000, 43, 43);
	CreateDynamicObject(1287, 1819.59802, -1058.36365, 23.44769,   0.00000, 0.00000, 180.00000, 43, 43);
	CreateDynamicObject(1286, 1820.06970, -1058.35669, 23.44770,   0.00000, 0.00000, 180.00000, 43, 43);
	//interior motel idlewood 60objs
	CreateDynamicObject(18038, -2114.66357, -233.90077, 36.55182,   0.00000, 0.00000, -90.00000, 78, 78);
	CreateDynamicObject(1536, -2129.83521, -231.59261, 34.29290,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(1536, -2129.88599, -228.60802, 34.29285,   0.00000, 0.00000, -90.00000, 78, 78);
	CreateDynamicObject(18665, -2128.38184, -232.69693, 35.63936,   0.00000, 0.00000, -90.11999, 78, 78);
	CreateDynamicObject(19875, -2117.13867, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(19875, -2114.68774, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(19875, -2112.02783, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1287, -2119.05469, -221.43694, 34.83226,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1432, -2128.05493, -220.74716, 34.40093,   0.00000, 0.00000, 32.93999, 78, 78);
	CreateDynamicObject(1432, -2127.23022, -217.34068, 34.37304,   0.00000, 0.00000, 94.32002, 78, 78);
	CreateDynamicObject(19364, -2129.95825, -215.07866, 35.60093,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(955, -2129.47949, -214.61510, 34.70210,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(2662, -2129.84058, -215.73227, 36.36358,   0.00000, 0.00000, 90.00003, 78, 78);
	CreateDynamicObject(11706, -2129.59009, -216.07639, 34.31742,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(19456, -2108.72388, -221.52025, 35.60090,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(19875, -2101.44946, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(19875, -2099.36011, -218.40271, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(4227, -2099.31543, -235.21388, 34.95421,   0.00000, 0.00000, 269.92035, 78, 78);
	CreateDynamicObject(1289, -2099.38208, -217.97321, 34.83230,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(2103, -2129.59912, -223.40999, 35.32550,   0.00000, 0.00000, 87.24001, 78, 78);
	CreateDynamicObject(1738, -2100.75195, -221.22658, 34.88366,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1761, -2108.54761, -213.70160, 34.28360,   0.00000, 0.00000, 359.87982, 78, 78);
	CreateDynamicObject(1762, -2111.89526, -213.99394, 34.28358,   0.00000, 0.00000, 14.99986, 78, 78);
	CreateDynamicObject(2231, -2109.25830, -213.25789, 34.31827,   0.00000, 0.00000, 5.94000, 78, 78);
	CreateDynamicObject(2231, -2110.11841, -213.33311, 34.31827,   0.00000, 0.00000, 19.08000, 78, 78);
	CreateDynamicObject(1788, -2109.86328, -213.69200, 35.29000,   0.00000, 0.00000, 12.12000, 78, 78);
	CreateDynamicObject(14840, -2099.39282, -216.89699, 35.61135,   0.00000, 0.00000, 179.87991, 78, 78);
	CreateDynamicObject(19875, -2099.36011, -213.61050, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(2677, -2128.75049, -224.29030, 34.67017,   0.00000, 0.00000, -22.86000, 78, 78);
	CreateDynamicObject(2677, -2126.70728, -214.66646, 34.61025,   0.00000, 0.00000, -103.14000, 78, 78);
	CreateDynamicObject(1815, -2107.84302, -221.04935, 34.29751,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1750, -2107.47998, -220.82988, 34.77369,   0.00000, 0.00000, -169.20000, 78, 78);
	CreateDynamicObject(19814, -2107.98682, -221.41179, 34.94300,   0.00000, 0.00000, 180.00000, 78, 78);
	CreateDynamicObject(1764, -2104.31348, -220.62875, 34.29314,   0.00000, 0.00000, 182.39998, 78, 78);
	CreateDynamicObject(2121, -2120.60303, -213.39059, 34.80999,   0.00000, 0.00000, 23.46000, 78, 78);
	CreateDynamicObject(2121, -2119.18286, -213.76292, 34.80999,   0.00000, 0.00000, -30.60000, 78, 78);
	CreateDynamicObject(2121, -2119.49731, -215.47533, 34.80999,   0.00000, 0.00000, -146.51997, 78, 78);
	CreateDynamicObject(2121, -2121.31030, -215.02448, 34.80999,   0.00000, 0.00000, -221.57993, 78, 78);
	CreateDynamicObject(2670, -2119.43433, -214.65594, 34.41192,   0.00000, 0.00000, 8.87999, 78, 78);
	CreateDynamicObject(2671, -2114.02222, -214.43098, 34.33338,   0.00000, 0.00000, 5.04000, 78, 78);
	CreateDynamicObject(19875, -2119.35254, -222.23920, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(19875, -2119.35254, -225.16640, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(19875, -2119.35254, -228.08620, 34.29940,   0.00000, 0.00000, 90.00000, 78, 78);
	CreateDynamicObject(2323, -2118.29517, -230.66048, 34.32090,   90.00000, 0.00000, -91.08000, 78, 78);
	CreateDynamicObject(19572, -2129.60742, -225.88168, 35.32058,   0.00000, 0.00000, 67.50000, 78, 78);
	CreateDynamicObject(19572, -2129.61377, -225.00441, 35.32058,   0.00000, 0.00000, 97.68001, 78, 78);
	CreateDynamicObject(2779, -2103.74316, -213.53677, 34.30265,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(2778, -2104.71582, -213.51007, 34.30260,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1512, -2105.22827, -213.57594, 34.51629,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(1509, -2105.35620, -213.22501, 34.51630,   0.00000, 0.00000, -17.82000, 78, 78);
	CreateDynamicObject(1509, -2103.18896, -213.91528, 34.51630,   0.00000, 0.00000, -17.82000, 78, 78);
	CreateDynamicObject(1709, -2120.43164, -230.65471, 34.28951,   0.00000, 0.00000, 187.07999, 78, 78);
	CreateDynamicObject(2677, -2123.10620, -223.86284, 34.67017,   0.00000, 0.00000, -14.04000, 78, 78);
	CreateDynamicObject(2677, -2121.02173, -229.89307, 34.67017,   0.00000, 0.00000, -14.04000, 78, 78);
	CreateDynamicObject(19875, -2109.40649, -221.43260, 34.29940,   0.00000, 0.00000, 0.00000, 78, 78);
	CreateDynamicObject(2323, -2109.46313, -222.41994, 35.59887,   90.00000, 0.00000, -179.51988, 78, 78);
	CreateDynamicObject(2323, -2112.21509, -222.42615, 35.34760,   0.00000, -90.68000, -90.00000, 78, 78);
	CreateDynamicObject(2323, -2110.18896, -222.41183, 35.34760,   0.00000, -90.68000, -90.00000, 78, 78);
	CreateDynamicObject(2673, -2113.89282, -220.65535, 34.41548,   0.00000, 0.00000, 178.56001, 78, 78);
	CreateDynamicObject(19875, -2102.56006, -212.98383, 34.29940,   0.00000, 0.00000, 180.00000, 78, 78);
	//motel willowfield 48 objs
	new m_wiw[3];
	m_wiw[0] = CreateDynamicObject(18981, 376.48361, -1617.72754, 48.80883,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(m_wiw[0], 0, 4600, 	"theatrelan2", 	"gm_labuld2_b", 0xFFFFFFFF);
	m_wiw[1] = CreateDynamicObject(18981, 368.50638, -1630.30518, 48.80883,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(m_wiw[1], 0, 4600, 	"theatrelan2", 	"gm_labuld2_b", 0xFFFFFFFF);
	m_wiw[2] = CreateDynamicObject(18981, 356.49033, -1618.27319, 48.80880,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(m_wiw[2], 0, 4600, 	"theatrelan2", 	"gm_labuld2_b", 0xFFFFFFFF);
	CreateDynamicObject(18033, 375.74719, -1618.67444, 51.20880,   0.00000, 0.00000, -180.00000, 94, 94);
	CreateDynamicObject(1536, 364.11365, -1613.43311, 49.18044,   0.00000, 0.00000, 88.56003, 94, 94);
	CreateDynamicObject(1536, 364.11359, -1610.42261, 49.18040,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(19875, 376.01160, -1611.37463, 49.20300,   0.00000, 0.00000, 90.00000, 94, 94);
	CreateDynamicObject(19875, 376.01160, -1616.17725, 49.20300,   0.00000, 0.00000, 90.00000, 94, 94);
	CreateDynamicObject(19875, 376.01160, -1619.40381, 49.20300,   0.00000, 0.00000, 90.00000, 94, 94);
	CreateDynamicObject(19875, 376.01160, -1622.34583, 49.20300,   0.00000, 0.00000, 90.00000, 94, 94);
	CreateDynamicObject(19875, 368.99451, -1620.16675, 49.20300,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(19875, 368.99451, -1622.75476, 49.20300,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(19875, 368.99451, -1625.37451, 49.20300,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(19875, 366.43390, -1617.79492, 49.20300,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(1738, 367.44281, -1617.53992, 49.83509,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(2121, 368.56790, -1617.43921, 49.64490,   0.00000, 0.00000, 141.78000, 94, 94);
	CreateDynamicObject(2059, 367.62903, -1617.27881, 49.22665,   0.00000, 0.00000, 22.50000, 94, 94);
	CreateDynamicObject(19834, 375.97604, -1611.97656, 50.25000,   0.00000, 60.00000, 90.00000, 94, 94);
	CreateDynamicObject(19834, 375.97424, -1612.01636, 50.25000,   0.00000, -60.00000, 90.00000, 94, 94);
	CreateDynamicObject(19814, 376.01071, -1610.80835, 49.60770,   0.00000, 0.00000, -90.00000, 94, 94);
	CreateDynamicObject(2677, 375.09100, -1611.85522, 49.49541,   0.00000, 0.00000, -131.94002, 94, 94);
	CreateDynamicObject(18663, 364.57339, -1615.72583, 50.72720,   0.00000, 0.00000, 180.00000, 94, 94);
	CreateDynamicObject(18662, 364.56061, -1614.48547, 51.42510,   0.00000, 0.00000, 180.00000, 94, 94);
	CreateDynamicObject(18661, 364.57230, -1616.64880, 51.42510,   -10.36000, -0.36000, 180.17999, 94, 94);
	CreateDynamicObject(1709, 367.37726, -1611.96143, 49.15556,   0.00000, 0.00000, 0.30000, 94, 94);
	CreateDynamicObject(19572, 372.70993, -1611.84814, 49.62217,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(18662, 370.65579, -1626.92798, 50.72720,   0.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(18660, 373.76389, -1626.92236, 51.74461,   0.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(18661, 372.25806, -1626.89258, 51.15924,   12.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(18662, 373.37930, -1626.92639, 50.69060,   0.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(18663, 373.14099, -1626.91614, 50.66200,   0.00000, 0.00000, 270.06009, 94, 94);
	CreateDynamicObject(1766, 372.39322, -1626.36560, 49.16965,   0.00000, 0.00000, 174.95992, 94, 94);
	CreateDynamicObject(1767, 375.25601, -1625.20020, 49.16970,   0.00000, 0.00000, 223.13994, 94, 94);
	CreateDynamicObject(2232, 373.64108, -1626.29675, 49.79057,   0.00000, 0.00000, -167.39999, 94, 94);
	CreateDynamicObject(2671, 369.71652, -1614.53210, 49.28593,   0.00000, 0.00000, -194.10001, 94, 94);
	CreateDynamicObject(2671, 373.69339, -1616.43518, 49.28593,   0.00000, 0.00000, -226.31995, 94, 94);
	CreateDynamicObject(2671, 372.28436, -1622.06128, 49.28593,   0.00000, 0.00000, -216.83995, 94, 94);
	CreateDynamicObject(2671, 371.08234, -1618.04431, 49.28593,   0.00000, 0.00000, -252.35991, 94, 94);
	CreateDynamicObject(2690, 369.30322, -1618.13782, 49.24714,   99.95998, 54.18003, -256.92017, 94, 94);
	CreateDynamicObject(2693, 375.95831, -1618.59326, 49.88212,   0.00000, 0.00000, -95.34000, 94, 94);
	CreateDynamicObject(2700, 368.53406, -1617.58752, 51.48763,   0.00000, 0.00000, 77.64001, 94, 94);
	CreateDynamicObject(1512, 375.68378, -1624.81860, 49.40240,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(1512, 375.55505, -1624.94592, 49.40240,   0.00000, 0.00000, -21.00000, 94, 94);
	CreateDynamicObject(1520, 375.35669, -1624.70361, 49.25675,   0.00000, 0.00000, -16.56000, 94, 94);
	CreateDynamicObject(2323, 368.01303, -1621.28137, 48.31577,   90.00000, 0.00000, 89.99999, 94, 94);
	CreateDynamicObject(2244, 375.77216, -1621.39539, 49.47263,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(2244, 375.75302, -1621.81726, 49.47263,   0.00000, 0.00000, 0.00000, 94, 94);
	CreateDynamicObject(2323, 368.01965, -1623.93445, 49.56556,   90.00000, 0.00000, 89.99999, 94, 94);
	//carpintero 60 objs
	create_object_ext(3366, 2130.14014, -2401.29663, 13.13580,   0.00000, 0.00000, -90.00000);
	create_object_ext(1684, 2083.75732, -2357.78052, 14.02030,   0.00000, 0.00000, 180.00000);
	create_object_ext(5706, 2097.61938, -2403.90771, 18.04414,   0.00000, 0.00000, -90.00000);
	create_object_ext(1412, 2087.73022, -2381.73682, 13.75254,   0.00000, 0.00000, 90.83999);
	create_object_ext(1412, 2088.38086, -2386.91528, 13.75254,   0.00000, 0.00000, 103.43999);
	create_object_ext(1290, 2089.96094, -2359.71558, 18.51119,   0.00000, 0.00000, -95.58000);
	create_object_ext(1415, 2088.34985, -2380.11304, 12.64069,   0.00000, 0.00000, 91.98001);
	create_object_ext(1415, 2088.43774, -2382.43408, 12.64069,   0.00000, 0.00000, 91.98001);
	create_object_ext(1415, 2088.76196, -2385.76123, 12.64069,   0.00000, 0.00000, 105.00001);
	create_object_ext(1408, 2091.47607, -2387.63354, 12.86418,   -28.00000, 0.00000, 180.59998);
	create_object_ext(1408, 2091.64819, -2387.48486, 12.89868,   -28.00000, 0.00000, 180.29999);
	create_object_ext(1408, 2091.53638, -2387.35132, 12.98671,   -28.00000, 0.00000, 180.59998);
	create_object_ext(2083, 2094.23145, -2386.72412, 12.54663,   0.00000, 0.00000, -85.97998);
	create_object_ext(2083, 2095.37939, -2386.88550, 13.04066,   0.00000, 0.00000, -203.03995);
	create_object_ext(1417, 2094.83472, -2385.63013, 12.80392,   0.00000, 0.00000, 239.63997);
	create_object_ext(1417, 2088.91187, -2384.07031, 12.80392,   0.00000, 0.00000, 389.58005);
	create_object_ext(2084, 2089.75122, -2379.27905, 12.53667,   0.00000, 0.00000, 8.70000);
	create_object_ext(2084, 2090.05566, -2380.18433, 12.53667,   0.00000, 0.00000, 8.70000);
	create_object_ext(2084, 2090.05566, -2380.18433, 13.46000,   0.00000, 0.00000, 91.86000);
	create_object_ext(2032, 2092.16309, -2386.26538, 12.53128,   0.00000, 0.00000, 4.02000);
	create_object_ext(2032, 2093.11499, -2385.99487, 14.12624,   0.00000, 180.00000, 36.66000);
	create_object_ext(1463, 2153.94458, -2390.32422, 12.87500,   0.00000, 0.00000, 67.91999);
	create_object_ext(1412, 2147.33740, -2391.79419, 13.75250,   0.00000, 0.00000, 540.06012);
	create_object_ext(1412, 2155.29248, -2389.13428, 13.75250,   0.00000, 0.00000, 88.14000);
	create_object_ext(1412, 2155.42383, -2383.94434, 13.75250,   0.00000, 0.00000, 88.14000);
	create_object_ext(1412, 2152.59570, -2391.79517, 13.75250,   0.00000, 0.00000, 540.06012);
	create_object_ext(1463, 2154.40942, -2388.66064, 12.87500,   0.00000, 0.00000, 83.99999);
	create_object_ext(1463, 2154.45557, -2386.93799, 12.87500,   0.00000, 0.00000, 95.10000);
	create_object_ext(1463, 2154.46680, -2385.33813, 12.87500,   0.00000, 0.00000, 91.92000);
	create_object_ext(1463, 2154.35718, -2383.85083, 12.87500,   0.00000, 0.00000, 100.37999);
	create_object_ext(1463, 2154.03003, -2382.82886, 12.60295,   -6.72000, -0.72000, 100.37999);
	create_object_ext(1463, 2153.35864, -2382.46533, 12.63170,   0.00000, 0.00000, 108.66000);
	create_object_ext(1463, 2153.27661, -2383.73950, 12.71281,   0.00000, 0.00000, 102.05999);
	create_object_ext(1463, 2152.48242, -2382.72144, 12.55061,   0.00000, 0.00000, 110.21999);
	create_object_ext(1463, 2153.91382, -2385.97998, 12.87500,   0.00000, 0.00000, 82.92001);
	create_object_ext(1463, 2153.67285, -2387.41016, 12.87500,   0.00000, 0.00000, 79.25999);
	create_object_ext(1463, 2153.51196, -2388.88647, 12.87500,   0.00000, 0.00000, 69.53998);
	create_object_ext(1463, 2152.90771, -2390.40405, 12.87500,   0.00000, 0.00000, 54.89997);
	create_object_ext(1463, 2153.10181, -2384.47192, 12.71281,   -11.52000, -0.30000, 102.05999);
	create_object_ext(1463, 2152.75659, -2384.07104, 12.55061,   0.00000, 0.00000, 94.73998);
	create_object_ext(1463, 2152.20850, -2390.80566, 12.85897,   0.30000, -2.94000, 36.53998);
	create_object_ext(1463, 2152.44629, -2389.60840, 12.85618,   0.00000, 0.00000, 52.73997);
	create_object_ext(941, 2140.34497, -2395.93579, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2133.40454, -2395.93579, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2127.31909, -2395.93579, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2120.53687, -2395.93579, 12.95624,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2120.53687, -2400.25000, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2120.53687, -2404.22607, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2120.53687, -2407.98120, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2127.31909, -2400.25000, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2127.31909, -2404.22607, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2127.31909, -2407.98120, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2133.40454, -2400.25000, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2133.40454, -2404.22607, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2133.40454, -2407.98120, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2140.34497, -2400.25000, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2140.34497, -2404.22607, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(941, 2140.34497, -2407.98120, 12.95620,   0.00000, 0.00000, 180.00000);
	create_object_ext(1226, 2137.85986, -2391.72729, 15.24476,   0.00000, 0.00000, 0.00000);
	create_object_ext(1226, 2122.29590, -2391.50195, 15.24480,   0.00000, 0.00000, 180.00000);
	//Dic Int
	new DICInterior[138];
	DICInterior[0] = CreateDynamicObject(1522, 1029.4393, 2097.2524, -95.1939, 0.0000, 0.0000, 89.8999); //Gen_doorSHOP3
	DICInterior[1] = CreateObject(8419, 1003.7030, 2078.8945, -79.9732, 0.0000, 180.0000, 0.0000); //vgsbldng01_lvs
	SetObjectMaterial(DICInterior[1], 4, 13007, "sw_bankint", "woodfloor1", 0xFFFFFFFF);
	DICInterior[2] = CreateObject(8419, 1003.7030, 2078.8945, -106.8933, 0.0000, 0.0000, 0.0000); //vgsbldng01_lvs
	SetObjectMaterial(DICInterior[2], 4, 14537, "pdomebar", "club_floor2_sfwTEST", 0xFFFFFFFF);
	DICInterior[3] = CreateDynamicObject(19461, 1029.4504, 2097.4221, -93.4349, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[3], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[4] = CreateDynamicObject(19461, 1027.9305, 2093.9406, -93.4349, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[4], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[5] = CreateDynamicObject(19461, 1027.9399, 2102.2365, -93.4349, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[5], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[6] = CreateDynamicObject(19461, 1018.1599, 2109.2783, -93.4349, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[6], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[7] = CreateDynamicObject(2309, 1027.2695, 2102.0007, -95.1816, 0.0000, 0.0000, 180.0000); //MED_OFFICE_CHAIR2
	SetDynamicObjectMaterial(DICInterior[7], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	DICInterior[8] = CreateDynamicObject(2240, 1028.9195, 2101.7707, -94.7912, 0.0000, 0.0000, -45.6999); //Plant_Pot_8
	DICInterior[9] = CreateDynamicObject(2309, 1027.8601, 2102.0007, -95.1816, 0.0000, 0.0000, 180.0000); //MED_OFFICE_CHAIR2
	SetDynamicObjectMaterial(DICInterior[9], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	DICInterior[10] = CreateDynamicObject(19396, 1023.0656, 2097.9953, -93.4348, 0.0000, 0.0000, 0.0000); //wall044
	SetDynamicObjectMaterial(DICInterior[10], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[11] = CreateDynamicObject(2309, 1029.2199, 2099.6791, -95.1816, 0.0000, 0.0000, 90.0000); //MED_OFFICE_CHAIR2
	SetDynamicObjectMaterial(DICInterior[11], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	DICInterior[12] = CreateDynamicObject(2309, 1029.2199, 2100.2497, -95.1816, 0.0000, 0.0000, 90.0000); //MED_OFFICE_CHAIR2
	SetDynamicObjectMaterial(DICInterior[12], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	DICInterior[13] = CreateDynamicObject(2309, 1029.2016, 2100.8195, -95.1816, 0.0000, 0.0000, 90.0000); //MED_OFFICE_CHAIR2
	SetDynamicObjectMaterial(DICInterior[13], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	DICInterior[14] = CreateDynamicObject(19461, 1023.0640, 2104.3947, -93.4347, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[14], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[15] = CreateDynamicObject(19461, 1023.0640, 2091.6040, -93.4347, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[15], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[16] = CreateDynamicObject(2827, 1027.4057, 2100.3369, -94.6797, 0.0000, 0.0000, -29.2999); //GB_novels05
	DICInterior[17] = CreateDynamicObject(1823, 1026.8768, 2099.7458, -95.1894, 0.0000, 0.0000, 0.0000); //COFFEE_MED_5
	SetDynamicObjectMaterial(DICInterior[17], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	DICInterior[18] = CreateDynamicObject(2309, 1026.6789, 2102.0007, -95.1816, 0.0000, 0.0000, 180.0000); //MED_OFFICE_CHAIR2
	SetDynamicObjectMaterial(DICInterior[18], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	DICInterior[19] = CreateDynamicObject(19461, 1018.1599, 2086.8674, -93.4349, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[19], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[20] = CreateDynamicObject(19461, 1008.5296, 2086.8674, -93.4349, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[20], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[21] = CreateDynamicObject(19461, 1008.5399, 2109.2783, -93.4349, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[21], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[22] = CreateDynamicObject(19461, 1000.0285, 2102.5664, -93.4349, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[22], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[23] = CreateDynamicObject(19461, 1003.6328, 2091.6040, -93.4347, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[23], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[24] = CreateDynamicObject(19461, 1003.6328, 2110.8354, -93.4347, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[24], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[25] = CreateDynamicObject(19461, 1003.6328, 2101.2250, -93.4345, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[25], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[26] = CreateDynamicObject(19426, 1017.6774, 2097.9909, -93.4275, 0.0000, 0.0000, 0.0000); //wall066
	SetDynamicObjectMaterial(DICInterior[26], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[27] = CreateDynamicObject(19396, 1005.3259, 2098.9499, -93.4345, 0.0000, 0.0000, -90.0000); //wall044
	SetDynamicObjectMaterial(DICInterior[27], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[28] = CreateDynamicObject(19426, 1018.4082, 2097.2712, -93.4275, 0.0000, 0.0000, 90.0000); //wall066
	SetDynamicObjectMaterial(DICInterior[28], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[29] = CreateDynamicObject(19426, 1019.1179, 2098.0109, -93.4275, 0.0000, 0.0000, 0.0000); //wall066
	SetDynamicObjectMaterial(DICInterior[29], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[30] = CreateDynamicObject(19426, 1018.3980, 2098.7326, -93.4275, 0.0000, 0.0000, 90.0000); //wall066
	SetDynamicObjectMaterial(DICInterior[30], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[31] = CreateDynamicObject(2395, 1008.1614, 2102.6950, -94.1544, 0.0000, 0.0000, -179.8999); //CJ_SPORTS_WALL
	SetDynamicObjectMaterial(DICInterior[31], 0, 3857, "ottos_glass", "carshowroom1", 0xFFFFFFFF);
	DICInterior[32] = CreateDynamicObject(19411, 1006.4426, 2102.5654, -93.4345, 0.0000, 0.0000, 90.0000); //wall059
	SetDynamicObjectMaterial(DICInterior[32], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[33] = CreateDynamicObject(1776, 1019.6195, 2097.9995, -94.0635, 0.0000, 0.0000, 90.0000); //CJ_CANDYVENDOR
	DICInterior[34] = CreateDynamicObject(19368, 1007.7272, 2098.9587, -93.4345, 0.0000, 0.0000, -90.0000); //wall016
	SetDynamicObjectMaterial(DICInterior[34], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[35] = CreateDynamicObject(19325, 1011.3417, 2088.8811, -93.1269, 0.0000, 0.0000, 0.0000); //lsmall_window01
	DICInterior[36] = CreateDynamicObject(19396, 1010.2388, 2093.3024, -93.4345, 0.0000, 0.0000, -136.4000); //wall044
	SetDynamicObjectMaterial(DICInterior[36], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[37] = CreateDynamicObject(19368, 1009.2479, 2100.5603, -93.4345, 0.0000, 0.0000, 180.0000); //wall016
	SetDynamicObjectMaterial(DICInterior[37], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[38] = CreateDynamicObject(19368, 1009.2479, 2103.7629, -93.4345, 0.0000, 0.0000, 180.0000); //wall016
	SetDynamicObjectMaterial(DICInterior[38], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[39] = CreateDynamicObject(19461, 1004.3732, 2094.4353, -93.4347, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[39], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[40] = CreateDynamicObject(19396, 1009.2467, 2106.9741, -93.4345, 0.0000, 0.0000, 180.0000); //wall044
	SetDynamicObjectMaterial(DICInterior[40], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[41] = CreateDynamicObject(19368, 1009.2479, 2110.1577, -93.4345, 0.0000, 0.0000, 180.0000); //wall016
	SetDynamicObjectMaterial(DICInterior[41], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[42] = CreateDynamicObject(1502, 1006.1132, 2098.9765, -95.2053, 0.0000, 0.0000, 180.0000); //Gen_doorINT04
	SetDynamicObjectMaterial(DICInterior[42], 1, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[43] = CreateDynamicObject(2604, 1014.7785, 2087.4199, -94.6572, 0.0000, 0.0000, 180.0000); //CJ_POLICE_COUNTER
	SetDynamicObjectMaterial(DICInterior[43], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[44] = CreateDynamicObject(1502, 1009.7095, 2093.8281, -95.2011, 0.0000, 0.0000, -46.7000); //Gen_doorINT04
	SetDynamicObjectMaterial(DICInterior[44], 1, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[45] = CreateDynamicObject(1737, 1005.7253, 2105.4985, -95.1761, 0.0000, 0.0000, 0.0000); //MED_DINNING_5
	SetDynamicObjectMaterial(DICInterior[45], 0, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	DICInterior[46] = CreateDynamicObject(1810, 1006.0901, 2106.7905, -95.2057, 0.0000, 0.0000, 4.1000); //CJ_FOLDCHAIR
	SetDynamicObjectMaterial(DICInterior[46], 0, 10850, "bakerybit2_sfse", "frate64_blue", 0xFFFFFFFF);
	DICInterior[47] = CreateDynamicObject(1810, 1006.7771, 2106.7910, -95.2057, 0.0000, 0.0000, -0.9999); //CJ_FOLDCHAIR
	SetDynamicObjectMaterial(DICInterior[47], 0, 10850, "bakerybit2_sfse", "frate64_blue", 0xFFFFFFFF);
	DICInterior[48] = CreateDynamicObject(2166, 1011.3690, 2099.4003, -95.1649, 0.0000, 0.0000, 270.0000); //MED_OFFICE_DESK_2
	SetDynamicObjectMaterial(DICInterior[48], 1, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[49] = CreateDynamicObject(1810, 1006.4591, 2104.2021, -95.2057, 0.0000, 0.0000, -173.0000); //CJ_FOLDCHAIR
	SetDynamicObjectMaterial(DICInterior[49], 0, 10850, "bakerybit2_sfse", "frate64_blue", 0xFFFFFFFF);
	DICInterior[50] = CreateDynamicObject(1810, 1005.5284, 2104.1875, -95.2057, 0.0000, 0.0000, 178.5999); //CJ_FOLDCHAIR
	SetDynamicObjectMaterial(DICInterior[50], 0, 10850, "bakerybit2_sfse", "frate64_blue", 0xFFFFFFFF);
	DICInterior[51] = CreateDynamicObject(2165, 1014.5583, 2090.0363, -95.2260, 0.0000, 0.0000, 0.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[51], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[52] = CreateDynamicObject(1705, 1006.6040, 2098.3088, -95.1864, 0.0000, 0.0000, 0.0000); //kb_chair04
	DICInterior[53] = CreateDynamicObject(1705, 1007.9945, 2098.3088, -95.1864, 0.0000, 0.0000, 0.0000); //kb_chair04
	DICInterior[54] = CreateDynamicObject(2165, 1015.5584, 2091.0571, -95.2260, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[54], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[55] = CreateDynamicObject(2001, 1004.1890, 2098.4448, -95.1890, 0.0000, 0.0000, 0.0000); //nu_plant_ofc
	DICInterior[56] = CreateDynamicObject(2165, 1018.6687, 2091.0571, -95.2260, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[56], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[57] = CreateDynamicObject(2165, 1014.5583, 2094.2778, -95.2260, 0.0000, 0.0000, 0.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[57], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[58] = CreateDynamicObject(2165, 1018.4281, 2094.2680, -95.2260, 0.0000, 0.0000, 0.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[58], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[59] = CreateDynamicObject(2165, 1019.4289, 2102.5341, -95.2260, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[59], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[60] = CreateDynamicObject(2165, 1015.5584, 2095.2888, -95.2260, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[60], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[61] = CreateDynamicObject(19922, 1006.5045, 2101.9455, -95.2196, 0.0000, 0.0000, 0.0000); //MKTable1
	SetDynamicObjectMaterial(DICInterior[61], 0, 1730, "cj_furniture", "CJ_WOOD5", 0xFFFFFFFF);
	DICInterior[62] = CreateDynamicObject(19442, 1008.4547, 2102.5668, -93.4272, 0.0000, 0.0000, -90.0000); //wall082
	SetDynamicObjectMaterial(DICInterior[62], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[63] = CreateDynamicObject(2165, 1018.4281, 2101.5532, -95.2260, 0.0000, 0.0000, 0.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[63], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[64] = CreateDynamicObject(2167, 1018.4409, 2097.1262, -95.1651, 0.0000, 0.0000, 0.0000); //MED_OFFICE_UNIT_7
	SetDynamicObjectMaterial(DICInterior[64], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[65] = CreateDynamicObject(2190, 1012.7896, 2098.6420, -94.3874, 0.0000, 0.0000, -76.1999); //PC_1
	DICInterior[66] = CreateDynamicObject(955, 1009.8192, 2102.9921, -94.8261, 0.0000, 0.0000, 90.0000); //CJ_EXT_SPRUNK
	DICInterior[67] = CreateDynamicObject(19808, 1012.1061, 2098.7170, -94.3614, 0.0000, 0.0000, -83.6999); //Keyboard1
	DICInterior[68] = CreateDynamicObject(2202, 1016.1785, 2108.6452, -95.1503, 0.0000, 0.0000, 0.0000); //PHOTOCOPIER_2
	DICInterior[69] = CreateDynamicObject(2184, 1007.0968, 2088.9189, -95.1635, 0.0000, 0.0000, 136.9000); //MED_OFFICE6_DESK_2
	SetDynamicObjectMaterial(DICInterior[69], 1, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[70] = CreateDynamicObject(2199, 1022.8674, 2105.1853, -95.1865, 0.0000, 0.0000, -90.0000); //MED_OFFICE6_MC_1
	SetDynamicObjectMaterial(DICInterior[70], 2, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[71] = CreateDynamicObject(2163, 1018.5744, 2087.0087, -95.1848, 0.0000, 0.0000, -180.0000); //MED_OFFICE_UNIT_2
	SetDynamicObjectMaterial(DICInterior[71], 0, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(DICInterior[71], 1, 10756, "airportroads_sfse", "ws_white_wall1", 0xFFFFFFFF);
	DICInterior[72] = CreateDynamicObject(2190, 1006.1742, 2089.9521, -94.3806, 0.0000, 0.0000, -27.5000); //PC_1
	DICInterior[73] = CreateDynamicObject(1742, 1003.6461, 2092.2460, -95.1644, 0.0000, 0.0000, 90.0000); //Med_BOOKSHELF
	SetDynamicObjectMaterial(DICInterior[73], 2, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[74] = CreateDynamicObject(19807, 1005.2017, 2089.7236, -94.3083, 0.0000, 0.0000, 0.0000); //Telephone1
	DICInterior[75] = CreateDynamicObject(2161, 1013.1620, 2109.1384, -95.1701, 0.0000, 0.0000, 0.0000); //MED_OFFICE_UNIT_4
	SetDynamicObjectMaterial(DICInterior[75], 1, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(DICInterior[75], 2, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[76] = CreateDynamicObject(2166, 1021.4302, 2108.6652, -95.1649, 0.0000, 0.0000, 270.0000); //MED_OFFICE_DESK_2
	SetDynamicObjectMaterial(DICInterior[76], 1, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[77] = CreateDynamicObject(19775, 1005.5188, 2089.3608, -94.3768, 90.6999, -134.5999, 0.0000); //PoliceBadge3
	DICInterior[78] = CreateDynamicObject(1808, 1007.8057, 2094.7509, -95.1692, 0.0000, 0.0000, 180.0000); //CJ_WATERCOOLER2
	DICInterior[79] = CreateDynamicObject(2190, 1022.8421, 2107.9431, -94.3874, 0.0000, 0.0000, -76.1999); //PC_1
	DICInterior[80] = CreateDynamicObject(19808, 1022.1655, 2108.0124, -94.3614, 0.0000, 0.0000, -83.6999); //Keyboard1
	DICInterior[81] = CreateDynamicObject(2165, 1017.9884, 2105.3156, -95.2260, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[81], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[82] = CreateDynamicObject(1502, 1009.2436, 2106.1848, -95.2016, 0.0000, 0.0000, 90.0000); //Gen_doorINT04
	SetDynamicObjectMaterial(DICInterior[82], 1, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[83] = CreateDynamicObject(2165, 1017.0081, 2106.3166, -95.2260, 0.0000, 0.0000, -90.0000); //MED_OFFICE_DESK_1
	SetDynamicObjectMaterial(DICInterior[83], 3, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[84] = CreateDynamicObject(2008, 1013.9645, 2105.0603, -95.1678, 0.0000, 0.0000, -90.0000); //officedesk1
	SetDynamicObjectMaterial(DICInterior[84], 4, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	SetDynamicObjectMaterial(DICInterior[84], 7, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[85] = CreateDynamicObject(1806, 1015.2500, 2088.5058, -95.1875, 0.0000, 0.0000, -172.1999); //MED_OFFICE_CHAIR
	DICInterior[86] = CreateDynamicObject(1806, 1015.1615, 2088.9982, -95.1875, 0.0000, 0.0000, 3.6000); //MED_OFFICE_CHAIR
	DICInterior[87] = CreateDynamicObject(1806, 1013.5844, 2088.7026, -95.1875, 0.0000, 0.0000, -179.2999); //MED_OFFICE_CHAIR
	DICInterior[88] = CreateDynamicObject(1671, 1004.8991, 2088.2851, -94.7097, 0.0000, 0.0000, 134.1000); //swivelchair_A
	DICInterior[89] = CreateDynamicObject(19808, 1015.3001, 2100.0400, -94.3314, 0.0000, 0.0000, -83.6999); //Keyboard1
	DICInterior[90] = CreateDynamicObject(2185, 1015.5899, 2099.0261, -95.1677, 0.0000, 0.0000, 90.0000); //MED_OFFICE6_DESK_1
	SetDynamicObjectMaterial(DICInterior[90], 2, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[91] = CreateDynamicObject(19461, 1019.5330, 2087.3713, -93.4347, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(DICInterior[91], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[92] = CreateDynamicObject(19396, 1021.1651, 2092.1013, -93.4348, 0.0000, 0.0000, 90.0000); //wall044
	SetDynamicObjectMaterial(DICInterior[92], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[93] = CreateDynamicObject(19442, 1023.4452, 2092.1135, -93.4272, 0.0000, 0.0000, -90.0000); //wall082
	SetDynamicObjectMaterial(DICInterior[93], 0, 13007, "sw_bankint", "bank_wall1", 0xFFFFFFFF);
	DICInterior[94] = CreateDynamicObject(11729, 1021.7407, 2087.2036, -95.1653, 0.0000, 0.0000, 180.0000); //GymLockerClosed1
	DICInterior[95] = CreateDynamicObject(11729, 1021.0701, 2087.2036, -95.1653, 0.0000, 0.0000, 180.0000); //GymLockerClosed1
	DICInterior[96] = CreateDynamicObject(11730, 1020.4042, 2087.2534, -95.1638, 0.0000, 0.0000, 180.0000); //GymLockerOpen1
	DICInterior[97] = CreateDynamicObject(11729, 1022.7016, 2091.6164, -95.1653, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	DICInterior[98] = CreateDynamicObject(11729, 1022.7016, 2090.9758, -95.1653, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	DICInterior[99] = CreateDynamicObject(11729, 1022.7016, 2090.3151, -95.1653, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	DICInterior[100] = CreateDynamicObject(11729, 1022.7016, 2089.6445, -95.1653, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	DICInterior[101] = CreateDynamicObject(11730, 1022.7005, 2088.9643, -95.1699, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	DICInterior[102] = CreateDynamicObject(11729, 1022.7016, 2088.3039, -95.1653, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	DICInterior[103] = CreateDynamicObject(11729, 1022.7016, 2087.6433, -95.1653, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	DICInterior[104] = CreateDynamicObject(1368, 1019.9196, 2089.8569, -94.5349, 0.0000, 0.0000, 90.0000); //CJ_BLOCKER_BENCH
	DICInterior[105] = CreateDynamicObject(1499, 1020.3875, 2092.0722, -95.2000, 0.0000, 0.0000, 0.0000); //Gen_doorINT05
	SetDynamicObjectMaterial(DICInterior[105], 1, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	DICInterior[106] = CreateDynamicObject(2356, 1019.2598, 2091.0878, -98.6729, 0.0000, 0.0000, 0.0000); //police_OFF_CHAIR
	DICInterior[107] = CreateDynamicObject(1806, 1014.9343, 2092.3032, -95.1875, 0.0000, 0.0000, -173.1999); //MED_OFFICE_CHAIR
	DICInterior[108] = CreateDynamicObject(1806, 1018.0416, 2092.3420, -95.1975, 0.0000, 0.0000, -173.1999); //MED_OFFICE_CHAIR
	DICInterior[109] = CreateDynamicObject(1806, 1019.1661, 2093.1235, -95.1975, 0.0000, 0.0000, 5.4000); //MED_OFFICE_CHAIR
	DICInterior[110] = CreateDynamicObject(1663, 1021.1410, 2107.7275, -94.7302, 0.0000, 0.0000, 110.7999); //swivelchair_B
	DICInterior[111] = CreateDynamicObject(1663, 1011.1108, 2098.5654, -94.7479, 0.0000, 0.0000, 104.3000); //swivelchair_B
	DICInterior[112] = CreateDynamicObject(1663, 1015.0603, 2093.1750, -94.7479, 0.0000, 0.0000, 176.8999); //swivelchair_B
	DICInterior[113] = CreateDynamicObject(1806, 1014.9345, 2096.5236, -95.1875, 0.0000, 0.0000, -173.1999); //MED_OFFICE_CHAIR
	DICInterior[114] = CreateDynamicObject(1806, 1014.2407, 2099.8930, -95.1875, 0.0000, 0.0000, -86.7999); //MED_OFFICE_CHAIR
	DICInterior[115] = CreateDynamicObject(1806, 1012.7542, 2104.2783, -95.1675, 0.0000, 0.0000, -86.7999); //MED_OFFICE_CHAIR
	DICInterior[116] = CreateDynamicObject(1806, 1015.7327, 2105.6582, -95.1675, 0.0000, 0.0000, -86.7999); //MED_OFFICE_CHAIR
	DICInterior[117] = CreateDynamicObject(1806, 1019.4425, 2105.9091, -95.1675, 0.0000, 0.0000, 98.6999); //MED_OFFICE_CHAIR
	DICInterior[118] = CreateDynamicObject(1806, 1019.0181, 2100.1994, -95.1875, 0.0000, 0.0000, -2.3000); //MED_OFFICE_CHAIR
	DICInterior[119] = CreateDynamicObject(1806, 1018.8485, 2103.7387, -95.1875, 0.0000, 0.0000, 178.1000); //MED_OFFICE_CHAIR
	DICInterior[120] = CreateDynamicObject(19835, 1005.9998, 2089.2260, -94.3173, 0.0000, 0.0000, 0.0000); //CoffeeCup1
	DICInterior[121] = CreateDynamicObject(11743, 1005.5697, 2094.7248, -94.3213, 0.0000, 0.0000, 180.0000); //MCoffeeMachine1
	DICInterior[122] = CreateDynamicObject(2132, 1005.3067, 2095.0446, -95.3741, 0.0000, 0.0000, 180.0000); //CJ_KITCH2_SINK
	SetDynamicObjectMaterial(DICInterior[122], 1, 14786, "ab_sfgymbeams", "knot_wood128", 0xFFFFFFFF);
	DICInterior[123] = CreateDynamicObject(2221, 1005.0898, 2094.8657, -94.2487, 0.0000, 0.0000, 0.0000); //rustylow
	DICInterior[124] = CreateDynamicObject(2241, 1023.6431, 2094.4660, -94.7139, 0.0000, 0.0000, 0.0000); //Plant_Pot_5
	DICInterior[125] = CreateDynamicObject(948, 1022.6575, 2102.2937, -95.1930, 0.0000, 0.0000, 0.0000); //Plant_Pot_10
	DICInterior[126] = CreateDynamicObject(2258, 1026.1267, 2094.0329, -93.2067, 0.0000, 0.0000, 180.0000); //Frame_Clip_5
	DICInterior[127] = CreateDynamicObject(2267, 1003.7604, 2090.1430, -93.2982, 0.0000, 0.0000, 90.0000); //Frame_WOOD_3
	DICInterior[128] = CreateDynamicObject(16732, 1011.2354, 2087.7893, -93.1657, 0.0000, 0.0000, 90.0000); //a51_ventcover
	DICInterior[129] = CreateDynamicObject(16732, 1011.2354, 2089.3708, -93.1657, 0.0000, 0.0000, 90.0000); //a51_ventcover
	DICInterior[130] = CreateDynamicObject(16732, 1011.2354, 2090.1721, -93.1657, 0.0000, 0.0000, 90.0000); //a51_ventcover
	DICInterior[131] = CreateDynamicObject(16732, 1011.2354, 2091.2731, -93.1657, 0.0000, 0.0000, 90.0000); //a51_ventcover
	DICInterior[132] = CreateDynamicObject(1811, 1008.0310, 2090.1621, -94.6049, 0.0000, 0.0000, 25.0000); //MED_DIN_CHAIR_5
	DICInterior[133] = CreateDynamicObject(19174, 1006.6016, 2094.3554, -93.2146, 0.0000, 0.0000, 0.0000); //SAMPPicture3
	DICInterior[134] = CreateDynamicObject(1811, 1007.1680, 2091.1726, -94.6049, 0.0000, 0.0000, 55.0999); //MED_DIN_CHAIR_5
	DICInterior[135] = CreateDynamicObject(2614, 1007.2965, 2087.0161, -93.2076, 0.0000, 0.0000, 180.0000); //CJ_US_FLAG
	DICInterior[136] = CreateDynamicObject(2066, 1009.0889, 2086.9824, -95.1897, 0.0000, 0.0000, 0.0000); //CJ_M_FILEING2
	DICInterior[137] = CreateDynamicObject(2059, 1006.5527, 2088.9313, -94.3738, 0.0000, 0.0000, -82.6999); //CJ_GUNSTUFF1
    //pescador
    CreateDynamicObjectEx(1243, 3445.34155, 349.29059, -3.04175,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);

	CreateObject(6300, 2932.99023, -1518.70020, -7.23000,   0.00000, 0.00000, 349.99701, 1000.000);
	CreateDynamicObjectEx(1461, 2957.39990, -1484.19995, 1.60000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2950.10010, -1510.00000, 0.60000,   0.00000, 0.00000, 350.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2953.36011, -1491.30005, 0.60000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2954.08301, -1547.88391, 0.60000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(1461, 2940.69995, -1541.30005, 1.60000,   0.00000, 0.00000, 80.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1461, 2946.10010, -1516.59998, 1.60000,   0.00000, 0.00000, 79.99700, 1000.000, 1000.000);
	CreateDynamicObjectEx(1461, 2951.10010, -1494.19995, 1.60000,   0.00000, 0.00000, 79.99700, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2949.10010, -1556.09961, 0.60000,   0.00000, 0.00000, 259.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(6300, 2932.97998, -1518.68994, -13.00000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(6300, 2932.99097, -1518.70996, -48.80000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(1231, 2952.10010, -1489.19995, 3.20000,   0.00000, 0.00000, 260.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(1231, 2946.80005, -1514.59998, 3.20000,   0.00000, 0.00000, 259.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(1231, 2941.50000, -1538.09998, 3.20000,   0.00000, 0.00000, 259.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(1346, 2951.50000, -1463.00000, 11.29000,   0.00000, 0.00000, 260.25000, 1000.000, 1000.000);
	CreateDynamicObjectEx(11496, 2957.28345, -1529.70398, 0.60000,   0.00000, 0.00000, 349.99701, 1000.000, 1000.000);
	CreateDynamicObjectEx(12925, 2947.39551, -1552.71387, 0.83444,   0.00000, 0.00000, 169.56006, 1000.000, 1000.000);
	//trabajo carguero
    create_object_ext(3630, 2513.37305, -2116.18872, 13.99660,   0.00000, 0.00000, 0.00000);
	create_object_ext(3574, 2524.99780, -2109.63525, 15.19875,   0.00000, 0.00000, 90.00000);
	create_object_ext(3630, 2513.48999, -2099.52563, 13.99660,   0.00000, 0.00000, 180.00000);
	create_object_ext(3630, 2517.33325, -2107.45825, 13.99660,   0.00000, 0.00000, 90.00000);
	create_object_ext(3567, 2457.65186, -2075.63989, 11.68070,   0.00000, 0.00000, 0.00000);
	create_object_ext(3585, 2457.69653, -2080.18481, 13.36238,   0.00000, 0.00000, 90.00000);
	create_object_ext(3585, 2457.63306, -2071.12061, 13.36238,   0.00000, 0.00000, 90.00000);
	create_object_ext(1684, 2472.30884, -2119.50928, 13.99975,   0.00000, 0.00000, -180.00000);
	create_object_ext(155, 2450.79614, -2100.66895, 21.23367,   0.00000, 0.00000, 0.00000);
	create_object_ext(155, 2457.71436, -2071.13013, 13.56358,   88.86001, -62.03999, 0.00000);

	// LSPD Exterior | by Edinson Walker | 25 Objetos
	CreateDynamicObject(11245, 1199.32739, -1750.81885, 19.22059,   0.00000, -30.00000, 147.77991, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(11245, 1210.86279, -1739.78784, 19.22059,   0.00000, -30.00000, 130.91985, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(620, 1192.32104, -1738.49939, 11.13103,   0.00000, 0.00000, -1.98000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(620, 1204.32593, -1724.69165, 8.87706,   0.00000, 0.00000, -139.86002, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3532, 1191.90857, -1735.72791, 13.60372,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3532, 1192.01025, -1728.88745, 13.60372,   0.00000, 0.00000, 1.98000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1231, 1192.04248, -1732.21021, 15.64928,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1231, 1198.82947, -1724.47754, 15.64898,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(620, 1204.32593, -1724.69165, 8.87706,   0.00000, 0.00000, -139.86002, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3532, 1201.85291, -1724.38696, 13.51072,   0.00000, 0.00000, 90.72000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3532, 1195.88464, -1724.49536, 13.51072,   0.00000, 0.00000, 95.46004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(779, 1191.51245, -1724.85596, 13.02415,   0.00000, 0.00000, 26.88000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3055, 1244.29407, -1735.89233, 14.74831,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19859, 1249.95215, -1735.92444, 13.84029,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3578, 1240.19983, -1736.66614, 12.44912,   0.00000, 90.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3578, 1248.41638, -1736.67493, 12.44912,   0.00000, 90.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3532, 1253.87146, -1724.39307, 13.51072,   0.00000, 0.00000, 90.72000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3532, 1260.95825, -1724.42761, 13.45831,   0.00000, 0.00000, 266.21991, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1231, 1257.52405, -1724.47754, 15.64900,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3532, 1267.61707, -1724.70715, 13.45831,   0.00000, 0.00000, 266.21991, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3532, 1276.18384, -1724.72620, 13.45831,   0.00000, 0.00000, 266.21991, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1231, 1271.99622, -1724.47754, 15.64900,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1533, 1241.35913, -1776.90881, 32.61145,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3934, 1230.98767, -1793.62244, 32.62818,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3934, 1214.63049, -1798.70313, 32.58908,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);

	CreateDynamicObject(3055, 1249.42737, -1802.43530, 14.76073,   0.00000, 0.00000, 36.84004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19859, 1254.77771, -1797.34094, 13.83133,   0.00000, 0.00000, -121.14011, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3578, 1252.33081, -1799.43152, 12.48374,   0.00000, 90.00000, -53.27999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3578, 1245.72192, -1804.38623, 12.48374,   0.00000, 90.00000, -53.27999, -1, -1, -1, MAX_RADIO_STREAM);

	//-
	CreateDynamicObject(3055, 2334.94092, 2443.80249, 6.87549,   0.00000, 0.00000, 59.21999);
	CreateDynamicObject(3055, 2294.24707, 2498.66553, 4.39810,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1498, 2294.43848, 2492.88940, 2.46963,   0.00000, 0.00000, 90.00000);

	//playa - 38objs
	CreateDynamicObjectEx(1642, 187.73985, -1864.47510, 2.07770,   1.51739, 0.21888, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 206.95432, -1865.37793, 1.98671,   1.51739, 0.36000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1640, 214.76517, -1855.53027, 2.20848,   1.46001, 0.06000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 213.78955, -1855.70532, 2.36306,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(642, 213.90292, -1855.02112, 3.44502,   0.00000, 0.00000, 351.99097, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 238.86661, -1858.55615, 2.03199,   1.69739, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 220.58553, -1832.98364, 2.78199,   1.64001, 0.30000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 221.65776, -1832.17578, 2.99103,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1642, 233.57324, -1845.42126, 2.38000,   1.58001, 0.10001, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(642, 250.79086, -1836.72156, 3.82584,   0.00000, 0.00000, 351.99097, 1000.0, 1000.0);
	CreateDynamicObjectEx(1642, 249.52429, -1835.61938, 2.62554,   1.63739, 0.15888, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1642, 270.47009, -1859.82471, 2.00070,   1.69739, 0.09888, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 271.43616, -1860.32471, 2.27872,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1640, 274.01746, -1865.93896, 1.80330,   2.23739, 0.12000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1640, 260.96460, -1855.59912, 2.08730,   1.69739, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 261.85809, -1855.03772, 2.40365,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(642, 272.16565, -1834.13062, 3.92584,   0.00000, 0.00000, 351.99097, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 273.21225, -1835.08936, 2.67994,   1.69739, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1642, 287.07159, -1854.18396, 2.18097,   1.75739, 0.03888, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1598, 292.07675, -1860.26624, 2.30505,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1643, 293.10690, -1861.79858, 1.97199,   1.69739, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 308.23422, -1867.64636, 2.40919,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 303.88184, -1867.62988, 2.40963,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 307.98300, -1840.68262, 3.15353,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 303.96487, -1840.68152, 3.15734,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 303.84180, -1817.74512, 3.82413,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 308.09616, -1817.73950, 3.82016,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1569, 153.45000, -1946.93994, 4.33000,   4.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 188.90680, -1951.98840, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 214.20268, -1953.18396, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 236.72771, -1954.81482, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 257.90262, -1956.55359, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 280.64215, -1958.29749, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(4245, 272.48438, -2012.19531, -15.47656,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 321.30383, -1961.31836, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 344.17053, -1961.64429, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 359.09616, -1961.35449, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1243, 299.94800, -1959.06873, -2.54000,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);

	// CNN Ext | by Edinson Walker | 60 Objetos
	CreateDynamicObject(11544, 733.21167, -1365.43005, 24.45701,   0.00000, 0.00000, 179.79999);
	CreateDynamicObject(11544, 733.28497, -1359.12000, 24.45701,   0.00000, 0.00000, 359.79675);
	CreateDynamicObject(3934, 742.88409, -1371.27698, 24.69221,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3876, 721.75098, -1376.67383, 27.56019,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1694, 719.47748, -1339.83081, 36.57013,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 751.20898, -1330.85742, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 759.44531, -1330.94824, 13.09969,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 755.33008, -1330.90234, 13.09979,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 749.14319, -1332.90100, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 757.37109, -1332.99170, 13.09520,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 753.26263, -1332.95496, 13.09528,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 761.50116, -1333.04150, 13.09509,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(5837, 768.58295, -1332.14124, 14.26333,   0.00000, 0.00000, 177.99500);
	CreateDynamicObject(1223, 761.48291, -1335.24841, 12.53876,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1223, 754.40918, -1361.43262, 11.11260,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 648.04456, -1330.14172, 20.19147,   0.00000, 0.00000, 297.99866);
	CreateDynamicObject(1232, 647.73792, -1348.21631, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(2921, 781.89844, -1330.33691, 16.26960,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2921, 773.99976, -1384.79834, 16.42263,   0.00000, 0.00000, 186.00000);
	CreateDynamicObject(3522, 755.38379, -1368.49609, 12.59153,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(862, 755.23096, -1370.29395, 12.68120,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(870, 754.36847, -1369.00464, 12.92332,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(859, 755.22089, -1366.68433, 12.68145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(861, 755.28284, -1367.66296, 12.68145,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1232, 647.84656, -1367.07043, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(1232, 647.81659, -1384.33496, 20.19147,   0.00000, 0.00000, 297.99316);
	CreateDynamicObject(1280, 647.23267, -1339.24219, 12.94823,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1280, 647.15228, -1375.67383, 13.07805,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(738, 644.89606, -1366.99109, 12.72225,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(792, 644.88678, -1348.50513, 12.64688,   0.00000, 0.00000, 0.00000);
	CreateDynamicObjectEx(3873, 699.70898, -1355.22559, 28.24851,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(7586, 699.70801, -1355.12500, 49.63910,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(10357, 702.12280, -1354.90942, 20.87460,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObject(717, 678.35925, -1388.48865, 12.70875,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 699.71106, -1388.52637, 12.78964,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 724.66650, -1388.47412, 12.78557,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 675.83221, -1326.12366, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 698.34253, -1326.02344, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(717, 721.59460, -1326.03455, 12.76604,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 738.95190, -1374.79175, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 746.64551, -1367.93359, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 746.58398, -1374.79785, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3666, 739.00482, -1367.96008, 24.70590,   0.00000, 0.00000, 0.00000);
	CreateDynamicObjectEx(8550, 655.64587, -1357.12720, 25.01492,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObject(1215, 754.41406, -1359.99023, 25.19000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1215, 754.29749, -1384.08496, 25.25653,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, 750.94049, -1359.19177, 21.33766,   0.00000, 0.00000, 269.98901);
	CreateDynamicObject(638, 743.58636, -1359.17859, 21.33766,   0.00000, 0.00000, 269.98901);
	CreateDynamicObject(2946, 748.85895, -1359.59802, 20.64063,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(2946, 745.69000, -1359.59766, 20.64063,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1215, 740.78064, -1354.32971, 21.20292,   0.00000, 0.00000, 12.00000);
	CreateDynamicObject(1483, 747.22998, -1358.35999, 22.40000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(970, 747.10284, -1330.83691, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 744.99109, -1332.86707, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 742.97632, -1330.78296, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 740.86353, -1332.82605, 13.09540,   0.00000, 0.00000, 89.29688);
	CreateDynamicObject(970, 738.83606, -1330.73743, 13.09988,   0.00000, 0.00000, 359.29688);
	CreateDynamicObject(970, 736.74249, -1332.77893, 13.09540,   0.00000, 0.00000, 89.35687);
	CreateDynamicObject(1223, 736.72314, -1334.92969, 12.53876,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(717, 785.45599, -1383.00586, 12.78366,   0.00000, 0.00000, 0.06000);

	// vip exterior, amrp - 5obj
	CreateDynamicObjectEx(1557, 1673.69214, -1714.68701, 12.54688,   0.00000, 0.00000, 270.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1557, 1673.69958, -1717.71777, 12.54688,   0.00000, 0.00000, 90.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 1673.93359, -1714.54590, 13.11120,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(1215, 1673.90820, -1717.88806, 13.11120,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);

	//Vallas del canal de desagüe - nexusrp
	CreateDynamicObject(973,1579.9000000,-1757.4000000,13.0000000,0.0000000,0.0000000,90.0000000);
	CreateDynamicObject(973,1579.9000000,-1751.0000000,13.0000000,0.0000000,0.0000000,90.0000000);
	CreateDynamicObject(973,1580.5110000,-1771.5000000,12.7500000,0.0000000,358.0000000,93.0000000);
	CreateDynamicObject(973,1579.9000000,-1757.4000000,13.9000000,0.0000000,0.0000000,90.0000000);
	CreateDynamicObject(973,1579.9000000,-1751.0000000,13.8900000,0.0000000,0.0000000,90.0000000);
	CreateDynamicObject(973,1580.5100000,-1771.5000000,13.7000000,0.0000000,357.9950000,92.9990000);
	CreateDynamicObject(973,1679.0000000,-1788.0000000,12.8000000,0.0000000,0.0000000,269.9950000);
	CreateDynamicObject(973,1358.7000000,-1722.1000000,13.0000000,0.0000000,0.0000000,180.0000000);
	CreateDynamicObject(973,1358.7000000,-1722.0900000,13.9000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1360.0000000,-1722.1000000,13.0000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1360.0000000,-1722.0800000,13.8900000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1359.9000000,-1684.2000000,13.3000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1359.9000000,-1684.1900000,14.2000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1358.8000000,-1684.1900000,13.3000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1358.8000000,-1684.1800000,14.1900000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1359.7000000,-1618.7000000,13.3000000,0.0000000,0.0000000,180.0000000);
	CreateDynamicObject(973,1358.4000000,-1618.6900000,13.3000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1359.7000000,-1618.7000000,14.2000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1358.4000000,-1618.6900000,14.2000000,0.0000000,0.0000000,179.9950000);
	CreateDynamicObject(973,1363.6000000,-1592.5000000,13.2000000,0.0000000,0.0000000,344.0000000);
	CreateDynamicObject(973,1363.6000000,-1592.5000000,14.1000000,0.0000000,0.0000000,343.9980000);
	CreateDynamicObject(973,1362.4000200,-1592.1099900,13.2000000,0.0000000,0.0000000,344.0000000);
	CreateDynamicObject(973,1362.4000000,-1592.1000000,14.1200000,0.0000000,0.0000000,343.9980000);
	CreateDynamicObject(973,1367.5000000,-1573.7000000,13.2000000,0.0000000,0.0000000,164.0000000);
	CreateDynamicObject(973,1368.6000000,-1574.0000000,13.2000000,0.0000000,0.0000000,163.9980000);
	CreateDynamicObject(973,1368.6500000,-1573.9000000,13.9000000,0.0000000,0.0000000,163.9980000);
	CreateDynamicObject(973,1367.4000000,-1573.5400000,13.8900000,0.0000000,0.0000000,163.9980000);
	CreateDynamicObject(973,1402.4000000,-1450.4000000,13.1000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1401.2000000,-1450.4000000,13.1000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1402.4000000,-1450.4000000,13.8000000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(973,1401.1900000,-1450.4000000,13.8000000,0.0000000,0.0000000,0.0000000);

    // ——— leñador
	create_object_ext(17457, -570.88019, -1490.22913, 10.51511,   -1.98000, -1.32000, -142.08002);
	create_object_ext(3286, -566.70563, -1479.84790, 13.35605,   0.60000, 1.08000, 16.55999);
	create_object_ext(3419, -553.42316, -1491.11450, 8.40726,   -0.60000, -2.04000, 38.64000);

	//- Deposito | By Edinson
	CreateDynamicObject(5837, -481.48563, -558.42505, 25.97714,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3458, -517.94897, -558.83051, 25.93505,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1597, -480.77600, -480.04428, 27.05149,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1597, -501.88507, -479.65829, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -522.32013, -480.08255, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -543.15369, -480.01431, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -562.80817, -480.17029, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(1597, -583.58685, -480.20047, 27.05149,   0.00000, 0.00000, 90.06000);
	CreateDynamicObject(6296, -504.66312, -522.02258, 26.62269,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -469.13492, -559.99615, 24.63004,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -504.24918, -506.07968, 24.67746,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(737, -504.05792, -539.75946, 24.67746,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -485.51678, -561.37286, 24.83320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -488.17297, -561.37085, 24.83320,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(638, -483.79755, -562.34674, 24.83315,   0.00000, 0.00000, 90.00000);

	// ——— Garage BCSD
	CreateDynamicObject(10051, 1388.54358, 1354.55640, 10.01410,   0.00000, 0.00000, 0.00000, -1, 12);
	CreateDynamicObject(8378, 1347.08044, 1383.21814, 12.91029,   0.00000, 0.00000, 90.00000, -1, 12);

	// ——— bug door in ganton — 1 objeto
	CreateDynamicObject(1498, 2401.76562500, -1714.42370600, 13.14058300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);

	// ——— banco interior — EdinsonWalker — 44 objetos
	CreateDynamicObject(19450, -1537.65881, 329.22021, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1542.52063, 319.61029, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1531.46594, 329.24762, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1532.86572, 330.07721, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1528.27808, 324.38660, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1542.40112, 324.47269, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1536.29663, 310.22574, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1533.06201, 319.65121, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1533.06201, 310.08640, 54.27770,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1541.02576, 314.97348, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1536.36438, 330.01147, 52.51820,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(1536, -1533.34924, 330.05267, 52.51820,   0.00000, 0.00000, 180.00000, -1, 10);
	CreateDynamicObject(1536, -1531.48962, 326.23535, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1703, -1533.66980, 322.07257, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1535.76660, 322.07260, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1533.66980, 318.92349, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1703, -1535.76660, 318.92349, 52.57190,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(19450, -1533.34058, 309.28860, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1536.23059, 311.62656, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1535.43433, 309.31665, 52.51820,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 323.01889, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 320.79800, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(1806, -1541.87512, 318.43799, 52.54990,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.63892, 323.80502, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.65002, 321.42059, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(2008, -1540.66809, 319.14874, 52.55010,   0.00000, 0.00000, 270.00000, -1, 10);
	CreateDynamicObject(19450, -1540.02429, 322.26819, 56.27690,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(19450, -1540.03186, 322.27670, 51.76950,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2773, -1539.16785, 322.18600, 52.96980,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(2773, -1539.16785, 319.66949, 52.96976,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(19450, -1544.77551, 317.55533, 54.27770,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(1536, -1542.45520, 320.03131, 52.51820,   0.00000, 0.00000, 90.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 318.43799, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 320.79800, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(957, -1541.19080, 323.01889, 55.96720,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2195, -1533.59680, 322.89450, 53.14320,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2195, -1533.59680, 316.10858, 53.14320,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2108, -1535.60291, 319.49460, 52.51200,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2108, -1533.68872, 319.49460, 52.51200,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(4604, -1534.38599, 314.16910, 52.49001,   0.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 318.51682, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 312.00070, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1537.00110, 325.09451, 56.19600,   270.00000, 0.00000, 0.00000, -1, 10);
	CreateDynamicObject(2885, -1535.21655, 331.56821, 56.19604,   270.00000, 0.00000, 0.00000, -1, 10);

	// ——— hospital interior — nexus — 302 objetos
	CreateObject(7419, -183.66400, -1735.85437, 632.45679,   0.00000, -90.00000, 0.00000);
	CreateObject(7419, -230.80400, -1754.06995, 632.45679,   0.00000, -90.00000, 180.00000);
	CreateDynamicObject(2885, -200.89941, -1741.50000, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.79980, -1734.79980, 678.40002,   270.00000, 180.00000, 180.00000, -1, 15);
	CreateDynamicObject(2885, -200.89941, -1734.79980, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.79980, -1741.50000, 678.40002,   270.00000, 179.99451, 179.99451, -1, 15);
	CreateDynamicObject(2885, -200.89999, -1748.19995, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -200.89941, -1754.89941, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -200.89941, -1761.59961, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -200.89999, -1768.30005, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.79980, -1748.19922, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.80000, -1754.90002, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2885, -211.79980, -1761.59961, 678.40002,   270.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -207.39999, -1739.69995, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.39900, -1739.69995, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -202.60001, -1734.80005, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -206.20000, -1734.80103, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1569, -206.00000, -1734.90002, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1569, -203.00000, -1734.90002, 674.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(19387, -196.69922, -1744.50000, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19357, -201.39941, -1736.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40039, -1736.50000, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -196.60001, -1738.01599, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.67200, -1738.01697, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -195.39941, -1742.89941, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.40100, -1742.90002, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -201.10001, -1739.69995, 674.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.10260, -1739.69922, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -199.88379, -1744.50000, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -191.15039, -1744.49902, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -191.15039, -1744.50098, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -199.07500, -1744.49902, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -199.07500, -1744.50098, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -199.88499, -1744.49805, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -201.09900, -1739.59998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -201.39941, -1746.09961, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19387, -201.39941, -1749.29980, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -201.39999, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19387, -201.39999, -1755.69995, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -201.39999, -1758.90002, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40199, -1746.09998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40100, -1746.92505, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19387, -201.39941, -1762.09961, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -206.20000, -1763.69995, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -201.40100, -1751.63696, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40199, -1753.32495, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40100, -1758.03699, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40199, -1759.72498, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.40100, -1764.43701, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -206.30000, -1763.69897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19387, -207.39941, -1746.09961, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19387, -207.39941, -1758.89941, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19357, -207.39999, -1762.09998, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -195.39941, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -195.39941, -1762.09961, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -196.59961, -1758.79980, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -206.00000, -1733.29980, 672.59998,   270.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -203.00000, -1733.30005, 672.59998,   270.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19441, -203.71400, -1733.30103, 677.39801,   0.00000, 270.00000, 90.00000, -1, 15);
	CreateDynamicObject(19441, -205.28700, -1733.30200, 677.39697,   0.00000, 270.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -214.60001, -1758.90002, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -214.59961, -1749.29980, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -214.60001, -1739.69995, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -212.19922, -1734.79980, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -199.80000, -1744.50110, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -201.39799, -1746.09998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39900, -1746.92505, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39900, -1751.63696, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39700, -1753.32422, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39900, -1758.03699, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -201.39799, -1759.72498, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.40100, -1752.50000, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.40039, -1762.09961, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -196.64941, -1758.79883, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.64941, -1758.80078, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -207.39799, -1740.51404, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -207.39700, -1761.23706, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -207.39799, -1764.40002, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.59900, -1758.80005, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.59801, -1749.19995, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.59900, -1739.59998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -215.80000, -1734.80115, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -207.40100, -1739.69995, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.40137, -1740.51367, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -207.40120, -1761.23706, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19368, -207.40100, -1764.39941, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3034, -204.39941, -1763.59961, 676.70001,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(1523, -201.37000, -1756.44995, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -201.36914, -1750.04980, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -201.37000, -1762.84998, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2686, -201.51300, -1744.90002, 676.40002,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2685, -201.51300, -1745.40002, 676.40002,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2688, -207.29980, -1747.59961, 676.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1748.50000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1750.00000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1754.90002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1756.40002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1761.30005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.50000, -1762.80005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.32910, -1748.50000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1750.00000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1754.90002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1756.40002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1761.30005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -201.33000, -1762.80005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -211.80000, -1751.50000, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -211.79980, -1729.59961, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -218.59961, -1729.59961, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -218.60001, -1754.30005, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -190.89941, -1753.59961, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -190.89999, -1735.19995, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -190.89941, -1731.69922, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1523, -207.36914, -1746.84961, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -207.37000, -1759.65002, 674.73999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(16101, -207.32910, -1745.29980, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.33000, -1746.81995, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.33000, -1758.09998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.33000, -1759.62000, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1759.59998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1758.09998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1746.80005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1745.29980, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1999, -200.50000, -1740.39941, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2009, -199.50000, -1743.79980, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1671, -199.50000, -1739.30005, 675.20001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1671, -199.29980, -1743.00000, 675.20001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(19387, -213.00000, -1742.69922, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19357, -209.79980, -1742.69922, 673.90100,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19357, -209.00000, -1742.70020, 673.90002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -212.20000, -1742.69897, 679.00000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19466, -208.50000, -1742.69995, 676.40002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19466, -210.74023, -1742.69922, 676.40002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -209.00000, -1742.69897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -210.66400, -1742.69800, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -215.37399, -1742.69897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -215.37500, -1742.70020, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -209.00000, -1742.70117, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -210.66400, -1742.70215, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -213.78906, -1742.72949, 674.73999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -212.29980, -1742.79980, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -213.80000, -1742.80005, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -213.80000, -1742.59998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -212.30000, -1742.59998, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1742.69922, 666.90002,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14487, -218.60001, -1731.80005, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2007, -213.69922, -1735.39941, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2007, -212.69922, -1735.39941, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3657, -206.89999, -1754.59998, 675.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2811, -201.89941, -1735.39941, 674.79999,   0.00000, 0.00000, 139.99329, -1, 15);
	CreateDynamicObject(2811, -201.89999, -1763.19995, 674.79999,   0.00000, 0.00000, 219.99573, -1, 15);
	CreateDynamicObject(2811, -206.89999, -1763.19995, 674.79999,   0.00000, 0.00000, 149.99573, -1, 15);
	CreateDynamicObject(3657, -206.89999, -1739.59998, 675.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2811, -206.89941, -1735.39941, 674.79999,   0.00000, 0.00000, 221.98975, -1, 15);
	CreateDynamicObject(2688, -201.50000, -1760.50000, 676.40002,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(19460, -201.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.30000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.30000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.30000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -204.80000, -1734.90002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -206.39999, -1763.59998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -214.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -214.39999, -1734.90002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1742.80005, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1742.59998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1744.40002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1738.09998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1744.59998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1758.69995, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1758.90002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -195.50000, -1758.90002, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.50000, -1749.30005, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.50000, -1739.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19357, -209.00000, -1748.80103, 673.90100,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -207.39999, -1752.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.40100, -1751.59998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.39900, -1751.59998, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.40199, -1753.30005, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -207.39799, -1753.30005, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3657, -206.89999, -1750.40002, 675.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19387, -213.00000, -1748.80005, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -212.20000, -1748.80103, 679.00000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19357, -209.80000, -1748.80005, 673.90002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19466, -208.60001, -1748.80005, 676.40002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19466, -210.84050, -1748.80005, 676.40002,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -212.20000, -1756.19995, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1523, -213.78900, -1748.82996, 674.73999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1748.69995, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1748.90002, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1756.09998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(19460, -212.30000, -1756.19897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -209.00000, -1748.79895, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -210.66299, -1748.79797, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -210.66211, -1748.80273, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -209.00000, -1748.80176, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -215.37500, -1748.79895, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19368, -215.37500, -1748.80078, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(3397, -208.20000, -1750.80005, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3396, -208.20000, -1754.40002, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -212.20000, -1756.30005, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(2132, -209.89999, -1755.59998, 674.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(2007, -212.30000, -1755.59998, 674.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(2007, -213.30000, -1755.59998, 674.79999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(3394, -213.80000, -1752.19995, 674.79999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(2146, -211.10001, -1751.90002, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14532, -210.70000, -1753.50000, 675.79999,   0.00000, 0.00000, 14.00000, -1, 15);
	CreateDynamicObject(19460, -212.29980, -1756.20020, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(3657, -201.89941, -1746.50000, 675.29999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2811, -211.81781, -1742.24426, 674.79999,   0.00000, 0.00000, 251.98975, -1, 15);
	CreateDynamicObject(2811, -214.15007, -1748.04089, 674.79999,   0.00000, 0.00000, 295.98798, -1, 15);
	CreateDynamicObject(16101, -207.50000, -1748.80005, 666.90002,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3394, -213.80000, -1761.50000, 674.79999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(2007, -214.00000, -1758.59998, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2007, -214.00000, -1757.59998, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2132, -210.10001, -1763.09998, 674.79999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(3396, -208.20000, -1761.69995, 674.79999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3397, -210.80000, -1756.69995, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2146, -211.20000, -1759.90002, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(11237, -230.00000, -1760.40002, 698.90002,   0.00000, 180.00000, 180.00000, -1, 15);
	CreateDynamicObject(3053, -211.20000, -1760.40002, 678.40002,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -211.20000, -1760.40002, 688.09998,   0.00000, 180.00000, 0.00000, -1, 15);
	CreateDynamicObject(2596, -214.30000, -1760.09998, 676.70001,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2596, -214.30000, -1760.80005, 676.70001,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2596, -214.30000, -1760.80005, 677.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(2596, -214.30000, -1760.09998, 677.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(16101, -222.60001, -1760.40002, 677.90002,   0.00000, 90.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -214.50000, -1760.40002, 666.19385,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3808, -207.25000, -1757.80005, 676.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(3808, -212.00000, -1742.84998, 676.29999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(3808, -212.00000, -1748.66003, 676.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -201.30000, -1749.50000, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.30000, -1759.09998, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(2009, -199.50000, -1747.80005, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1999, -200.50000, -1746.09998, 674.80103,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1671, -199.39999, -1746.90002, 675.20001,   0.00000, 0.00000, 264.00000, -1, 15);
	CreateDynamicObject(1671, -199.39999, -1745.09998, 675.20001,   0.00000, 0.00000, 278.00000, -1, 15);
	CreateDynamicObject(2009, -196.80000, -1753.80005, 674.80103,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1999, -197.80000, -1752.09998, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1999, -198.70000, -1752.80005, 674.79999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2009, -199.70000, -1751.09998, 674.80103,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1671, -197.60001, -1753.00000, 675.20001,   0.00000, 0.00000, 282.00000, -1, 15);
	CreateDynamicObject(1671, -196.80000, -1751.30005, 675.20001,   0.00000, 0.00000, 260.00000, -1, 15);
	CreateDynamicObject(1671, -199.80000, -1752.09998, 675.20001,   0.00000, 0.00000, 84.00000, -1, 15);
	CreateDynamicObject(1671, -199.80000, -1753.80005, 675.20001,   0.00000, 0.00000, 104.00000, -1, 15);
	CreateDynamicObject(2009, -196.00000, -1757.19995, 674.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(1999, -197.70000, -1758.19995, 674.80103,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(1671, -196.89999, -1757.30005, 675.20001,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1671, -198.70000, -1758.00000, 675.20001,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2202, -196.00000, -1746.19995, 674.78003,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2811, -195.89999, -1745.09998, 674.79999,   0.00000, 0.00000, 115.99329, -1, 15);
	CreateDynamicObject(2007, -196.00000, -1748.30005, 674.79999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2007, -196.00000, -1749.30005, 674.79999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2811, -200.89999, -1758.30005, 674.79999,   0.00000, 0.00000, 141.98816, -1, 15);
	CreateDynamicObject(2611, -198.20000, -1758.67004, 676.79999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(2611, -201.27000, -1746.40002, 676.59998,   0.00000, 0.00000, 89.99451, -1, 15);
	CreateDynamicObject(19449, -215.80000, -1763.69995, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19449, -201.39999, -1768.50000, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19449, -195.39999, -1771.69995, 676.50000,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.39900, -1767.57996, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.40100, -1771.69995, 673.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19460, -195.50000, -1768.50000, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19460, -201.30000, -1768.69995, 679.90002,   0.00000, 179.99451, 0.00000, -1, 15);
	CreateDynamicObject(19449, -196.60001, -1772.40002, 676.50000,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1772.39905, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(19460, -196.60001, -1772.30005, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(14487, -190.89999, -1778.19995, 678.09998,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1789, -211.80000, -1753.09998, 675.29999,   0.00000, 0.00000, 290.00000, -1, 15);
	CreateDynamicObject(1789, -211.89941, -1759.19922, 675.29999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -199.00000, -1759.50000, 674.70001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -199.00000, -1771.50000, 674.70001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -199.00000, -1767.59998, 674.70001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -199.00000, -1763.69995, 674.70001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(1800, -200.70000, -1766.90002, 674.70001,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1800, -200.70000, -1773.30005, 674.70001,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1789, -196.20000, -1770.69995, 675.29999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(1789, -196.20000, -1766.69995, 675.29999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(1789, -196.20000, -1762.90002, 675.29999,   0.00000, 0.00000, 179.99451, -1, 15);
	CreateDynamicObject(1789, -196.30000, -1760.69995, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1789, -200.50000, -1766.19995, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(1789, -200.50000, -1769.40002, 675.29999,   0.00000, 0.00000, 180.00000, -1, 15);
	CreateDynamicObject(19460, -216.00000, -1763.59998, 679.90002,   0.00000, 179.99451, 90.00000, -1, 15);
	CreateDynamicObject(1999, -197.50000, -1740.40002, 674.79999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(1671, -196.50000, -1739.30005, 675.20001,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(19460, -215.89999, -1763.69897, 673.29999,   0.00000, 0.00000, 90.00000, -1, 15);
	CreateDynamicObject(16101, -212.30000, -1748.69995, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -213.80000, -1748.69995, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -213.80000, -1748.90002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(16101, -212.30000, -1748.90002, 666.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2852, -206.80000, -1742.80005, 675.28003,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(2315, -206.80000, -1742.40002, 674.79999,   0.00000, 0.00000, 270.00000, -1, 15);
	CreateDynamicObject(2855, -206.70000, -1743.69995, 675.29999,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(14782, -207.81520, -1738.64648, 675.77350,   0.00000, 0.00000, -90.00000, -1, 15);
	CreateDynamicObject(1368, -210.13393, -1735.39819, 675.46796,   0.00000, 0.00000, 0.00000, -1, 15);
	CreateDynamicObject(19176, -214.55238, -1745.80981, 676.14948,   0.00000, 0.00000, -90.00000, -1, 15);
	CreateDynamicObject(2811, -214.15262, -1743.50281, 674.79999,   0.00000, 0.00000, 295.98798, -1, 15);

	// ——— police interior — eastcrew — 31createobject + 503 createdynamicobject
	new
		g_Object[534]
	;
	g_Object[0] = CreateDynamicObject(19461, 878.5662, 2286.3044, 1917.5322, 0.0000, 0.0000, -90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[0], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[1] = CreateDynamicObject(19461, 876.2761, 2287.7534, 1917.5322, 0.0000, 0.0000, 180.0000); //wall101
	SetDynamicObjectMaterial(g_Object[1], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[2] = CreateObject(19377, 881.2963, 2289.7866, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[2], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[3] = CreateObject(19377, 881.2963, 2309.0498, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[3], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[4] = CreateDynamicObject(11730, 869.3665, 2308.2819, 1909.3784, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[5] = CreateDynamicObject(1492, 882.2305, 2328.9194, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[5], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[6] = CreateDynamicObject(19369, 884.9807, 2286.3041, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[6], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[7] = CreateDynamicObject(19461, 876.2761, 2297.3745, 1917.5322, 0.0000, 0.0000, 180.0000); //wall101
	SetDynamicObjectMaterial(g_Object[7], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[8] = CreateObject(19377, 881.2963, 2299.4201, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[8], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[9] = CreateDynamicObject(1492, 882.2305, 2319.0944, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[9], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[10] = CreateObject(19377, 881.3264, 2328.3144, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[10], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[11] = CreateDynamicObject(19397, 880.2562, 2292.9462, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[11], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[12] = CreateDynamicObject(19461, 876.2761, 2307.0229, 1917.5322, 0.0000, 0.0000, 180.0000); //wall101
	SetDynamicObjectMaterial(g_Object[12], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[13] = CreateDynamicObject(19325, 880.2741, 2297.0405, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[14] = CreateDynamicObject(19325, 880.2741, 2303.5214, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[15] = CreateDynamicObject(1492, 880.2905, 2306.8276, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[15], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[16] = CreateDynamicObject(19369, 881.7702, 2300.2932, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[16], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[17] = CreateDynamicObject(19369, 884.9802, 2300.2932, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[17], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[18] = CreateObject(19377, 881.3264, 2318.6806, 1915.6888, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[18], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[19] = CreateDynamicObject(19461, 852.7150, 2344.3391, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[20] = CreateDynamicObject(19397, 880.2562, 2310.7858, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[20], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[21] = CreateDynamicObject(1492, 877.7791, 2318.1242, 1915.7784, 0.0000, 0.0000, 0.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[21], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[22] = CreateDynamicObject(1492, 880.2905, 2310.0390, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[22], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[23] = CreateDynamicObject(19325, 880.2741, 2314.8842, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[24] = CreateDynamicObject(19369, 881.9301, 2309.2236, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[24], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[25] = CreateDynamicObject(19397, 895.9390, 2279.6882, 1911.1651, 0.0000, 0.0000, 0.0000); //wall045
	g_Object[26] = CreateDynamicObject(19369, 885.1397, 2309.2236, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[26], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[27] = CreateDynamicObject(19369, 881.7700, 2318.1396, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[27], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[28] = CreateDynamicObject(19369, 884.9812, 2318.1396, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[28], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[29] = CreateDynamicObject(19397, 878.5664, 2318.1362, 1917.5356, 0.0000, 0.0000, 90.0000); //wall045
	SetDynamicObjectMaterial(g_Object[29], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[30] = CreateDynamicObject(2828, 886.0900, 2322.1911, 1916.6142, 0.0000, 0.0000, 0.0000); //gb_ornament02
	g_Object[31] = CreateDynamicObject(19461, 872.1447, 2322.2521, 1917.5122, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[31], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[32] = CreateDynamicObject(11729, 877.8356, 2296.7792, 1909.4522, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[33] = CreateDynamicObject(11730, 869.3995, 2297.3703, 1909.4635, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[34] = CreateDynamicObject(11730, 869.3995, 2296.1408, 1909.4635, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[35] = CreateDynamicObject(19461, 888.9244, 2278.6269, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[36] = CreateDynamicObject(19377, 881.5264, 2289.8784, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[36], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[37] = CreateDynamicObject(19461, 886.6264, 2291.2260, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[37], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[38] = CreateDynamicObject(19461, 886.6264, 2300.8552, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[38], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[39] = CreateDynamicObject(19461, 876.8754, 2326.9807, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[39], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[40] = CreateDynamicObject(19461, 886.6264, 2310.4863, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[40], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[41] = CreateDynamicObject(19805, 878.2532, 2286.3945, 1917.5355, 0.0000, 0.0000, -180.0000); //Whiteboard1
	SetDynamicObjectMaterial(g_Object[41], 0, 4003, "cityhall_tr_lan", "mc_flags1", 0xFFFFFFFF);
	g_Object[42] = CreateDynamicObject(19786, 886.6868, 2294.3454, 1917.9626, 0.0000, 0.0000, -90.0000); //LCDTVBig1
	g_Object[43] = CreateDynamicObject(19325, 880.2741, 2288.8889, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[44] = CreateDynamicObject(3657, 873.9056, 2303.5913, 1909.9948, 0.0000, 0.0000, 90.0000); //airseata_LAS
	g_Object[45] = CreateDynamicObject(19369, 876.2800, 2313.4387, 1917.5356, 0.0000, 0.0000, 0.0000); //wall017
	SetDynamicObjectMaterial(g_Object[45], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[46] = CreateDynamicObject(1663, 896.5239, 2322.5371, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[47] = CreateDynamicObject(19377, 903.8677, 2282.9196, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[47], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[48] = CreateDynamicObject(19461, 886.6264, 2332.6613, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[48], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[49] = CreateDynamicObject(11729, 869.3939, 2296.7270, 1909.4681, 0.0000, 0.0000, 90.0000); //GymLockerClosed1
	g_Object[50] = CreateDynamicObject(1708, 877.5650, 2323.7854, 1915.7821, 0.0000, 0.0000, 90.0000); //kb_chair02
	g_Object[51] = CreateDynamicObject(19461, 886.6256, 2323.0568, 1917.5322, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[51], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[52] = CreateDynamicObject(19377, 881.5264, 2299.5065, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[52], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[53] = CreateDynamicObject(19377, 881.5264, 2309.1269, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[53], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[54] = CreateDynamicObject(19377, 881.5264, 2318.6669, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[54], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[55] = CreateDynamicObject(19377, 881.5264, 2328.2976, 1919.3719, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[55], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[56] = CreateDynamicObject(11730, 877.8193, 2307.2229, 1909.3646, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[57] = CreateDynamicObject(19461, 881.7854, 2331.3500, 1917.5322, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[57], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[58] = CreateDynamicObject(19369, 883.8297, 2324.6398, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[58], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[59] = CreateDynamicObject(19461, 872.1447, 2318.1386, 1917.5122, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[59], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[60] = CreateObject(19377, 869.1962, 2320.4077, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[60], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[61] = CreateDynamicObject(3657, 873.8826, 2300.2207, 1909.9948, 0.0000, 0.0000, 90.0000); //airseata_LAS
	g_Object[62] = CreateDynamicObject(19369, 887.0401, 2324.6398, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[62], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[63] = CreateDynamicObject(1663, 896.4688, 2320.5683, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[64] = CreateDynamicObject(19461, 868.8750, 2318.1384, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[64], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[65] = CreateDynamicObject(19369, 899.4807, 2308.5471, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[66] = CreateDynamicObject(19369, 886.6220, 2316.8984, 1917.5356, 0.0000, 0.0000, 0.0000); //wall017
	SetDynamicObjectMaterial(g_Object[66], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[67] = CreateDynamicObject(1708, 877.5650, 2327.9084, 1915.7821, 0.0000, 0.0000, 90.0000); //kb_chair02
	g_Object[68] = CreateDynamicObject(19442, 876.8784, 2318.1352, 1917.5423, 0.0000, 0.0000, 90.0000); //wall082
	SetDynamicObjectMaterial(g_Object[68], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[69] = CreateDynamicObject(19397, 878.5664, 2318.1237, 1917.5356, 0.0000, 0.0000, 90.0000); //wall045
	SetDynamicObjectMaterial(g_Object[69], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[70] = CreateDynamicObject(19325, 882.2141, 2324.7285, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[71] = CreateDynamicObject(19397, 882.2166, 2319.8374, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[71], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[72] = CreateDynamicObject(19397, 882.2166, 2329.6608, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[72], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[73] = CreateObject(14407, 874.2399, 2320.1967, 1912.5898, 0.0000, 0.0000, 90.0000); //carter-stairs01
	SetObjectMaterial(g_Object[73], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[74] = CreateDynamicObject(19461, 872.3750, 2318.1384, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[74], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[75] = CreateDynamicObject(19461, 875.8654, 2318.1384, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[75], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[76] = CreateDynamicObject(19461, 868.8750, 2322.2524, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[76], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[77] = CreateDynamicObject(19461, 872.3656, 2322.2524, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[77], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[78] = CreateDynamicObject(19461, 875.8660, 2322.2524, 1910.9604, 90.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[78], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[79] = CreateDynamicObject(14494, 865.5442, 2302.8776, 1911.8187, 0.0000, 0.0000, -180.0000); //sweets_bath
	SetDynamicObjectMaterial(g_Object[79], 0, 10101, "2notherbuildsfe", "ferry_build14", 0xFFFFFFFF);
	g_Object[80] = CreateDynamicObject(19461, 867.2147, 2346.2309, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[81] = CreateObject(19377, 861.9464, 2330.0319, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[81], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[82] = CreateDynamicObject(19461, 871.7830, 2293.1442, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[83] = CreateObject(19377, 861.9464, 2339.6535, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[83], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[84] = CreateDynamicObject(19461, 868.1433, 2325.1811, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[85] = CreateDynamicObject(1663, 894.9893, 2320.6086, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[86] = CreateDynamicObject(19377, 861.9464, 2339.6533, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[86], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[87] = CreateDynamicObject(14855, 859.8189, 2338.5217, 1913.8989, 0.0000, 0.0000, 0.0000); //counterb
	SetDynamicObjectMaterial(g_Object[87], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[88] = CreateDynamicObject(19369, 887.8154, 2312.4980, 1911.1539, 0.0000, 0.0000, 90.0000); //wall017
	g_Object[89] = CreateDynamicObject(2173, 901.1516, 2309.3195, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[89], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[90] = CreateObject(19377, 879.6975, 2310.7749, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[90], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[91] = CreateObject(19377, 879.6975, 2320.4057, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[91], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[92] = CreateDynamicObject(19325, 892.8845, 2316.6484, 1910.8502, 0.0000, 0.0000, 90.0000); //lsmall_window01
	g_Object[93] = CreateDynamicObject(2690, 866.9818, 2317.4309, 1910.8697, 0.0000, 0.0000, 270.0000); //CJ_FIRE_EXT
	g_Object[94] = CreateObject(19377, 890.1973, 2310.7961, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[94], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[95] = CreateDynamicObject(19461, 862.3148, 2344.3391, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[96] = CreateDynamicObject(19461, 856.6651, 2329.9125, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[97] = CreateDynamicObject(14855, 859.8189, 2338.5217, 1911.4176, 0.0000, 0.0000, 0.0000); //counterb
	SetDynamicObjectMaterial(g_Object[97], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[97], 1, 14581, "ab_mafiasuitea", "cof_wood2", 0xFFFFFFFF);
	g_Object[98] = CreateObject(19377, 890.1973, 2320.4052, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[98], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[99] = CreateDynamicObject(19461, 856.6651, 2339.5427, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[100] = CreateDynamicObject(19461, 853.5447, 2320.3554, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[101] = CreateDynamicObject(19461, 853.5447, 2310.7534, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[102] = CreateDynamicObject(19397, 890.5477, 2312.5041, 1911.1551, 0.0000, 0.0000, 90.0998); //wall045
	g_Object[103] = CreateObject(19377, 900.6976, 2320.4052, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[103], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[104] = CreateObject(19377, 900.6970, 2310.7797, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[104], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[105] = CreateDynamicObject(19367, 856.6771, 2329.0473, 1911.1540, 0.0000, 0.0000, 0.0000); //wall015
	SetDynamicObjectMaterial(g_Object[105], 0, 10377, "cityhall_sfs", "ws_copart2", 0xFFFFFFFF);
	g_Object[106] = CreateDynamicObject(19461, 881.5656, 2316.6699, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[107] = CreateDynamicObject(19367, 867.1967, 2338.1354, 1911.1540, 0.0000, 0.0000, 0.0000); //wall015
	SetDynamicObjectMaterial(g_Object[107], 0, 10377, "cityhall_sfs", "ws_copart3", 0xFFFFFFFF);
	g_Object[108] = CreateDynamicObject(19367, 867.1865, 2329.0473, 1911.1540, 0.0000, 0.0000, 0.0000); //wall015
	SetDynamicObjectMaterial(g_Object[108], 0, 10377, "cityhall_sfs", "ws_copart1", 0xFFFFFFFF);
	g_Object[109] = CreateDynamicObject(19461, 904.0454, 2321.5534, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[110] = CreateObject(19377, 879.6975, 2330.0266, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[110], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[111] = CreateObject(19377, 890.1978, 2330.0266, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[111], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[112] = CreateDynamicObject(19461, 881.5656, 2331.2038, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[112], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	g_Object[113] = CreateDynamicObject(2173, 886.0626, 2322.5166, 1915.8100, 0.0000, 0.0000, -179.6000); //MED_OFFICE_DESK_3
	g_Object[114] = CreateDynamicObject(2190, 862.5996, 2341.8989, 1910.3920, 0.0000, 0.0000, -85.7996); //PC_1
	g_Object[115] = CreateDynamicObject(2190, 862.6029, 2339.5131, 1910.4020, 0.0000, 0.0000, -97.1996); //PC_1
	g_Object[116] = CreateDynamicObject(19461, 900.8461, 2326.4548, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[117] = CreateDynamicObject(3657, 873.0554, 2303.5893, 1909.9948, 0.0000, 0.0000, -90.0000); //airseata_LAS
	g_Object[118] = CreateDynamicObject(19461, 881.5653, 2286.9731, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[119] = CreateDynamicObject(19369, 899.5006, 2314.9511, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[120] = CreateDynamicObject(19999, 885.6135, 2323.7382, 1915.7447, 0.0000, 0.0000, 0.0000); //CutsceneChair2
	g_Object[121] = CreateDynamicObject(19461, 853.5447, 2301.1328, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[122] = CreateDynamicObject(19377, 851.4864, 2320.4130, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[122], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[123] = CreateObject(19377, 900.6981, 2330.0266, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[123], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[124] = CreateObject(19377, 879.6975, 2339.6591, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[124], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[125] = CreateDynamicObject(19461, 899.6569, 2278.0102, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[126] = CreateDynamicObject(1714, 883.2692, 2301.7978, 1915.7733, 0.0000, 0.0000, 180.0000); //kb_swivelchair1
	SetDynamicObjectMaterial(g_Object[126], 0, 18081, "cj_barb", "ab_leather_strips", 0xFFFFFFFF);
	g_Object[127] = CreateDynamicObject(19369, 905.9699, 2295.3303, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[128] = CreateDynamicObject(16732, 880.3662, 2290.4467, 1917.9780, 0.0000, 0.0000, -90.0000); //a51_ventcover
	g_Object[129] = CreateObject(19377, 890.1973, 2301.1833, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[129], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[130] = CreateDynamicObject(19461, 891.2161, 2326.4570, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[131] = CreateDynamicObject(19461, 901.4204, 2321.5534, 1909.4379, 0.0000, -90.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[131], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[132] = CreateDynamicObject(15038, 880.7318, 2317.7434, 1916.4107, 0.0000, 0.0000, 0.0000); //Plant_Pot_3_sv
	g_Object[133] = CreateDynamicObject(1715, 893.8584, 2285.9824, 1909.4268, 0.0000, 0.0000, 29.3999); //kb_swivelchair2
	g_Object[134] = CreateDynamicObject(19611, 900.2877, 2321.6015, 1909.5467, 0.0000, 0.0000, 0.0000); //MicrophoneStand1
	g_Object[135] = CreateDynamicObject(19369, 893.1973, 2312.4980, 1911.1539, 0.0000, 0.0000, 90.0000); //wall017
	g_Object[136] = CreateDynamicObject(19461, 886.4161, 2321.5703, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[137] = CreateDynamicObject(2167, 900.3826, 2321.4392, 1909.3736, 0.0000, 0.0000, 89.7990); //MED_OFFICE_UNIT_7
	g_Object[138] = CreateObject(19377, 890.1973, 2291.5500, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[138], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[139] = CreateObject(19377, 900.6970, 2301.1428, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[139], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[140] = CreateObject(19377, 900.6970, 2291.5097, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[140], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[141] = CreateDynamicObject(19325, 895.9345, 2302.7639, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[142] = CreateDynamicObject(15038, 886.1317, 2317.7434, 1916.4107, 0.0000, 0.0000, 0.0000); //Plant_Pot_3_sv
	g_Object[143] = CreateDynamicObject(19611, 900.2877, 2321.8618, 1909.5467, 0.0000, 0.0000, 0.0000); //MicrophoneStand1
	g_Object[144] = CreateDynamicObject(1663, 895.0443, 2322.5776, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[145] = CreateDynamicObject(19325, 895.9345, 2296.5561, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[146] = CreateDynamicObject(11729, 877.8213, 2298.0488, 1909.4572, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[147] = CreateDynamicObject(19369, 895.9398, 2298.1782, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[148] = CreateDynamicObject(19461, 881.4038, 2293.1442, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[149] = CreateDynamicObject(2167, 900.3836, 2321.8376, 1909.3736, 0.0000, 0.0000, 89.7990); //MED_OFFICE_UNIT_7
	g_Object[150] = CreateDynamicObject(19377, 903.8672, 2292.5515, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[150], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[151] = CreateDynamicObject(19377, 904.9157, 2321.5715, 1909.5992, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[151], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[152] = CreateDynamicObject(19377, 906.2567, 2331.2033, 1909.5992, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[152], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[153] = CreateDynamicObject(19461, 849.7252, 2302.7255, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[154] = CreateDynamicObject(2173, 901.1613, 2303.1135, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[154], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[155] = CreateDynamicObject(2066, 886.1250, 2309.6096, 1915.7467, 0.0000, 0.0000, -91.4999); //CJ_M_FILEING2
	g_Object[156] = CreateDynamicObject(19461, 901.0847, 2321.5534, 1907.9310, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[156], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[157] = CreateDynamicObject(19461, 901.0847, 2331.1862, 1907.9310, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[157], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[158] = CreateDynamicObject(2357, 900.4942, 2321.6083, 1908.9199, 0.0000, -89.7998, 0.0000); //DUNC_DINNING
	g_Object[159] = CreateDynamicObject(19369, 895.9398, 2310.9882, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[160] = CreateDynamicObject(1492, 895.9553, 2287.7492, 1909.4075, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[160], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[161] = CreateDynamicObject(19325, 899.4765, 2306.9077, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[162] = CreateDynamicObject(19461, 902.2575, 2316.6799, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[163] = CreateDynamicObject(19461, 905.9979, 2308.5666, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[164] = CreateDynamicObject(19325, 899.5266, 2316.6494, 1910.8502, 0.0000, 0.0000, 90.0000); //lsmall_window01
	g_Object[165] = CreateDynamicObject(19461, 905.9979, 2298.9331, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[166] = CreateDynamicObject(19461, 878.1644, 2307.6052, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[167] = CreateDynamicObject(19369, 905.9918, 2314.9812, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[168] = CreateDynamicObject(19461, 884.8854, 2297.9875, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[169] = CreateDynamicObject(19397, 895.9390, 2288.4931, 1911.1651, 0.0000, 0.0000, 0.0000); //wall045
	g_Object[170] = CreateDynamicObject(1663, 895.0790, 2323.8173, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[171] = CreateDynamicObject(19461, 888.9244, 2288.2568, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[172] = CreateDynamicObject(19461, 904.3773, 2296.9685, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[173] = CreateObject(19377, 858.6964, 2320.4118, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[173], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[174] = CreateDynamicObject(1492, 899.4539, 2311.0166, 1909.3974, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[174], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[175] = CreateDynamicObject(19461, 867.2147, 2326.9929, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[176] = CreateDynamicObject(14494, 865.5242, 2299.1652, 1911.8187, 0.0000, 0.0000, -180.0000); //sweets_bath
	SetDynamicObjectMaterial(g_Object[176], 0, 10101, "2notherbuildsfe", "ferry_build14", 0xFFFFFFFF);
	g_Object[177] = CreateDynamicObject(1561, 866.6322, 2344.2285, 1909.3620, 0.0000, 0.0000, 0.0000); //Gen_doorEXT7_11R
	SetDynamicObjectMaterial(g_Object[177], 2, 10377, "cityhall_sfs", "ws_copart2", 0xFFFFFFFF);
	g_Object[178] = CreateDynamicObject(19893, 884.9439, 2322.4846, 1916.6081, 0.0000, 0.0000, 148.6000); //LaptopSAMP1
	SetDynamicObjectMaterial(g_Object[178], 1, 15054, "savesfmid", "cspornmag", 0xFFFFFFFF);
	g_Object[179] = CreateDynamicObject(1561, 865.1322, 2344.2285, 1909.3620, 0.0000, 0.0000, 0.0000); //Gen_doorEXT7_11R
	SetDynamicObjectMaterial(g_Object[179], 2, 10377, "cityhall_sfs", "ws_copart2", 0xFFFFFFFF);
	g_Object[180] = CreateDynamicObject(2612, 885.7841, 2324.5114, 1917.7264, 0.0000, 0.0000, 0.0000); //POLICE_NB2
	g_Object[181] = CreateDynamicObject(2615, 883.7166, 2324.4841, 1917.6673, 0.0000, 0.0000, 0.0000); //POLICE_NB3
	g_Object[182] = CreateDynamicObject(2616, 884.1043, 2324.5117, 1917.6833, 0.0000, 0.0000, 0.0000); //POLICE_NB04
	g_Object[183] = CreateDynamicObject(19377, 879.7072, 2307.6071, 1909.3687, 0.0000, -90.0000, 0.0000); //wall025
	g_Object[184] = CreateDynamicObject(1663, 890.9544, 2319.4282, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[185] = CreateDynamicObject(2066, 883.2229, 2323.9316, 1915.7567, 0.0000, 0.0000, 0.0000); //CJ_M_FILEING2
	g_Object[186] = CreateDynamicObject(2066, 883.8029, 2324.0017, 1915.3260, 0.0000, 0.0000, 0.0000); //CJ_M_FILEING2
	g_Object[187] = CreateDynamicObject(2066, 884.3834, 2324.0017, 1915.7467, 0.0000, 0.0000, 0.0000); //CJ_M_FILEING2
	g_Object[188] = CreateDynamicObject(19461, 899.4973, 2292.1503, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[189] = CreateDynamicObject(2252, 883.7896, 2324.0954, 1917.0239, 0.0000, 0.0000, 0.0000); //Plant_Pot_21
	g_Object[190] = CreateDynamicObject(19904, 874.5324, 2293.4445, 1912.6279, 0.0000, 90.7000, 176.7999); //ConstructionVest1
	g_Object[191] = CreateDynamicObject(19461, 899.4973, 2282.5207, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[192] = CreateDynamicObject(18757, 897.9191, 2279.8820, 1911.2274, 0.0000, 0.0000, 90.0000); //ElevatorDoor2
	g_Object[193] = CreateDynamicObject(19922, 887.7305, 2323.5170, 1916.7795, 0.0000, -0.5999, -179.9998); //MKTable1
	g_Object[194] = CreateDynamicObject(18636, 886.3644, 2323.3620, 1917.6236, 0.0000, 0.0000, -179.1000); //PoliceCap1
	g_Object[195] = CreateDynamicObject(2202, 857.2639, 2337.3266, 1909.3940, 0.0000, 0.0000, 90.0000); //PHOTOCOPIER_2
	g_Object[196] = CreateDynamicObject(2186, 857.3233, 2340.5988, 1909.3830, 0.0000, 0.0000, 90.0000); //PHOTOCOPIER_1
	g_Object[197] = CreateDynamicObject(1663, 890.9221, 2318.2775, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[198] = CreateDynamicObject(2614, 903.9132, 2321.6062, 1911.5036, 0.0000, 0.0000, -90.3999); //CJ_US_FLAG
	SetDynamicObjectMaterial(g_Object[198], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[199] = CreateDynamicObject(19397, 887.9674, 2316.6748, 1911.1551, 0.0000, 0.0000, 90.0000); //wall045
	g_Object[200] = CreateDynamicObject(2166, 890.8992, 2284.7429, 1909.4177, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_2
	g_Object[201] = CreateDynamicObject(1715, 855.9852, 2318.7490, 1909.4072, 0.0000, 0.0000, -91.7000); //kb_swivelchair2
	g_Object[202] = CreateDynamicObject(2260, 886.0670, 2320.0510, 1917.4903, 0.0000, 0.0000, -89.1996); //Frame_SLIM_1
	g_Object[203] = CreateDynamicObject(2262, 886.0429, 2321.0822, 1917.8752, 0.0000, 0.0000, -89.9999); //Frame_SLIM_3
	g_Object[204] = CreateDynamicObject(1722, 889.8220, 2280.4282, 1909.4012, 0.0000, 0.0000, -60.3000); //off_chairnu
	g_Object[205] = CreateDynamicObject(2002, 882.9749, 2318.7631, 1915.7673, 0.0000, 0.0000, -178.8000); //water_coolnu
	g_Object[206] = CreateDynamicObject(2828, 882.6525, 2290.2092, 1916.5842, 0.0000, 0.0000, 165.3999); //gb_ornament02
	g_Object[207] = CreateDynamicObject(1663, 885.4868, 2321.2182, 1916.2331, 0.0000, 0.0000, 179.5997); //swivelchair_B
	g_Object[208] = CreateDynamicObject(19461, 891.0346, 2293.1442, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[209] = CreateDynamicObject(19325, 882.3342, 2324.7585, 1917.2215, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[210] = CreateDynamicObject(2607, 885.5344, 2326.5834, 1916.1678, 0.0000, 0.0000, -179.6997); //POLCE_DESK2
	g_Object[211] = CreateDynamicObject(19893, 884.8245, 2326.6035, 1916.5786, 0.0000, 0.0000, 38.6999); //LaptopSAMP1
	g_Object[212] = CreateDynamicObject(1714, 885.6104, 2325.0200, 1915.7689, 0.0000, 0.0000, 179.1000); //kb_swivelchair1
	g_Object[213] = CreateDynamicObject(1209, 885.2890, 2307.5310, 1909.4110, 0.0000, 0.0000, -270.0000); //vendmach
	g_Object[214] = CreateDynamicObject(2357, 900.4948, 2321.6083, 1908.7595, 0.0000, 89.7997, 0.0000); //DUNC_DINNING
	g_Object[215] = CreateDynamicObject(2205, 882.6712, 2303.3403, 1915.7722, 0.0000, 0.0000, 0.0000); //MED_OFFICE8_DESK_1
	g_Object[216] = CreateDynamicObject(2165, 854.1703, 2318.1281, 1909.4166, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_1
	g_Object[217] = CreateDynamicObject(2173, 901.1613, 2306.1765, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[217], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[218] = CreateDynamicObject(2173, 905.4121, 2306.1765, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[218], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[219] = CreateDynamicObject(2173, 905.4121, 2309.3195, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[219], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[220] = CreateDynamicObject(19369, 895.9398, 2291.6416, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[221] = CreateDynamicObject(19369, 895.9398, 2304.5871, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[222] = CreateDynamicObject(2200, 886.3560, 2302.1662, 1915.7707, 0.0000, 0.0000, 270.0000); //MED_OFFICE5_UNIT_1
	g_Object[223] = CreateDynamicObject(1663, 901.2197, 2304.1621, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[224] = CreateDynamicObject(1663, 900.1392, 2304.1621, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[225] = CreateDynamicObject(1663, 904.2705, 2304.1621, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[226] = CreateDynamicObject(1663, 905.2711, 2304.1621, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[227] = CreateDynamicObject(1663, 905.2711, 2307.3247, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[228] = CreateDynamicObject(1663, 904.2905, 2307.3247, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[229] = CreateDynamicObject(19369, 899.4807, 2305.3752, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[230] = CreateDynamicObject(1663, 901.2202, 2307.3247, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[231] = CreateDynamicObject(1663, 900.2000, 2307.3247, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[232] = CreateDynamicObject(18757, 897.6989, 2276.0822, 1911.2274, 0.0000, 0.0000, -90.0000); //ElevatorDoor2
	g_Object[233] = CreateDynamicObject(1663, 900.2000, 2310.4064, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[234] = CreateDynamicObject(1663, 901.2003, 2310.4064, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[235] = CreateDynamicObject(19805, 901.5938, 2297.0292, 1911.2722, 0.0000, 0.0000, 179.9998); //Whiteboard1
	g_Object[236] = CreateDynamicObject(19397, 899.4793, 2311.7551, 1911.1551, 0.0000, 0.0000, 0.0000); //wall045
	g_Object[237] = CreateDynamicObject(3657, 873.0554, 2300.2082, 1909.9948, 0.0000, 0.0000, -90.0000); //airseata_LAS
	g_Object[238] = CreateDynamicObject(19893, 882.7741, 2303.1730, 1916.7119, 0.0000, 0.0000, 12.1997); //LaptopSAMP1
	g_Object[239] = CreateDynamicObject(1742, 884.6984, 2331.3459, 1915.7624, 0.0000, 0.0000, 0.0000); //Med_BOOKSHELF
	g_Object[240] = CreateDynamicObject(2258, 884.3850, 2300.4013, 1918.2529, 0.0000, 0.0000, 180.0000); //Frame_Clip_5
	g_Object[241] = CreateDynamicObject(2309, 884.3330, 2305.0134, 1915.7854, 0.0000, 0.0000, 151.1999); //MED_OFFICE_CHAIR2
	g_Object[242] = CreateDynamicObject(2309, 882.3037, 2305.0141, 1915.7854, 0.0000, 0.0000, -148.4998); //MED_OFFICE_CHAIR2
	g_Object[243] = CreateDynamicObject(2276, 884.6231, 2325.2446, 1917.5445, 0.0000, 0.0000, 179.6999); //Frame_Fab_3
	g_Object[244] = CreateDynamicObject(11730, 869.3665, 2306.9533, 1909.3684, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[245] = CreateDynamicObject(2614, 883.4218, 2317.9948, 1918.0201, 0.0000, 0.0000, 0.0000); //CJ_US_FLAG
	g_Object[246] = CreateDynamicObject(1663, 893.7697, 2320.6420, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[247] = CreateDynamicObject(2196, 884.2011, 2303.0319, 1916.7093, 0.0000, 0.0000, -143.8000); //WORK_LAMP1
	g_Object[248] = CreateDynamicObject(11730, 869.3665, 2307.6040, 1909.3684, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[249] = CreateDynamicObject(1715, 854.5770, 2321.5202, 1909.4072, 0.0000, 0.0000, 360.0000); //kb_swivelchair2
	g_Object[250] = CreateDynamicObject(2256, 882.5136, 2300.4262, 1918.0299, 0.0000, 0.0000, 180.0000); //Frame_Clip_3
	g_Object[251] = CreateDynamicObject(1663, 893.6994, 2323.8540, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[252] = CreateDynamicObject(2162, 883.0899, 2309.1054, 1915.7845, 0.0000, 0.0000, 0.0000); //MED_OFFICE_UNIT_1
	g_Object[253] = CreateDynamicObject(1663, 896.5137, 2319.3234, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[254] = CreateDynamicObject(19805, 886.4893, 2328.7802, 1917.2325, 0.0000, 0.0000, 89.9000); //Whiteboard1
	g_Object[255] = CreateDynamicObject(1663, 890.9902, 2320.7177, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[256] = CreateDynamicObject(1663, 893.6639, 2322.5844, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[257] = CreateDynamicObject(2254, 883.4685, 2309.1213, 1918.1157, 0.0000, 0.0000, 0.0000); //Frame_Clip_1
	g_Object[258] = CreateDynamicObject(2196, 886.2360, 2326.2192, 1916.5897, 0.0000, 0.0000, -124.5998); //WORK_LAMP1
	g_Object[259] = CreateDynamicObject(2173, 905.3930, 2303.1135, 1909.4011, 0.0000, 0.0000, -179.9998); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[259], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[260] = CreateDynamicObject(2613, 873.7572, 2306.5273, 1909.4791, 0.0000, 0.0000, 0.0000); //POLICE_WASTEBIN
	g_Object[261] = CreateDynamicObject(1663, 904.3015, 2310.4064, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[262] = CreateDynamicObject(1663, 896.4800, 2318.1232, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[263] = CreateDynamicObject(1663, 896.5595, 2323.8171, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[264] = CreateDynamicObject(1811, 886.0109, 2328.0888, 1916.3686, 0.0000, 0.0000, 60.6999); //MED_DIN_CHAIR_5
	g_Object[265] = CreateDynamicObject(2612, 886.4274, 2315.7092, 1917.5854, 0.0000, 0.0000, -88.4999); //POLICE_NB2
	g_Object[266] = CreateDynamicObject(2165, 894.8414, 2284.5322, 1909.4041, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[267] = CreateDynamicObject(1811, 884.6668, 2328.0200, 1916.3686, 0.0000, 0.0000, 101.5000); //MED_DIN_CHAIR_5
	g_Object[268] = CreateDynamicObject(3394, 891.0250, 2292.2839, 1909.4094, 0.0000, 0.0000, 90.0000); //a51_sdsk_2_
	SetDynamicObjectMaterial(g_Object[268], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[269] = CreateDynamicObject(19369, 884.9110, 2300.2888, 1917.5356, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[269], 0, 3850, "carshowglass_sfsx", "ws_carshowwin1", 0xFFFFFFFF);
	g_Object[270] = CreateDynamicObject(19369, 886.6107, 2298.5566, 1917.5356, 0.0000, 0.0000, 180.0000); //wall017
	SetDynamicObjectMaterial(g_Object[270], 0, 3850, "carshowglass_sfsx", "ws_carshowwin1", 0xFFFFFFFF);
	g_Object[271] = CreateDynamicObject(1968, 886.8986, 2298.2290, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[271], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[272] = CreateDynamicObject(1663, 905.3120, 2310.4064, 1909.8647, 0.0000, 0.0000, 0.0000); //swivelchair_B
	g_Object[273] = CreateDynamicObject(18084, 883.1740, 2323.0444, 1917.7905, 0.0000, 0.0000, -89.9999); //BARBER_BLINDS
	g_Object[274] = CreateDynamicObject(2611, 886.4890, 2305.6518, 1917.6606, 0.0000, 0.0000, 270.0000); //POLICE_NB1
	SetDynamicObjectMaterial(g_Object[274], 0, 14651, "ab_trukstpd", "Bow_bar_tabletop_wood", 0xFFFFFFFF);
	g_Object[275] = CreateDynamicObject(1663, 895.0242, 2319.3647, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[276] = CreateDynamicObject(1663, 892.5103, 2320.6772, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[277] = CreateDynamicObject(2615, 886.4976, 2329.1445, 1917.2490, 0.0000, 0.0000, -89.6997); //POLICE_NB3
	g_Object[278] = CreateDynamicObject(19805, 886.5629, 2301.6237, 1918.4061, 0.0000, 0.0000, 270.0000); //Whiteboard1
	SetDynamicObjectMaterial(g_Object[278], 0, 14802, "lee_bdupsflat", "USAflag", 0xFFFFFFFF);
	g_Object[279] = CreateDynamicObject(2163, 886.5070, 2306.0080, 1915.7777, 0.0000, 0.0000, 270.0000); //MED_OFFICE_UNIT_2
	g_Object[280] = CreateDynamicObject(1663, 895.0702, 2318.1440, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[281] = CreateDynamicObject(19461, 884.8854, 2307.5798, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[282] = CreateDynamicObject(19161, 886.2717, 2326.4140, 1916.5880, 0.8999, -85.0000, 140.6999); //PoliceHat1
	g_Object[283] = CreateDynamicObject(1663, 893.7647, 2319.3999, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[284] = CreateDynamicObject(19461, 880.1442, 2312.5078, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[285] = CreateDynamicObject(18084, 883.1740, 2326.3068, 1917.7303, 0.0000, 0.0000, -89.9999); //BARBER_BLINDS
	g_Object[286] = CreateDynamicObject(1663, 893.7305, 2318.1806, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[287] = CreateDynamicObject(1663, 892.3946, 2319.3879, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[288] = CreateDynamicObject(19461, 868.5944, 2312.5078, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[289] = CreateDynamicObject(2066, 886.5086, 2310.1430, 1915.7467, -0.1999, 0.0000, 87.4000); //CJ_M_FILEING2
	g_Object[290] = CreateDynamicObject(19377, 879.7072, 2297.9865, 1909.3687, 0.0000, -90.0000, 0.0000); //wall025
	g_Object[291] = CreateDynamicObject(1663, 892.3910, 2318.2182, 1909.8647, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[292] = CreateDynamicObject(2139, 889.4229, 2293.7495, 1909.3991, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT2
	g_Object[293] = CreateDynamicObject(2200, 854.2197, 2324.9226, 1909.4086, 0.0000, 0.0000, 0.0000); //MED_OFFICE5_UNIT_1
	g_Object[294] = CreateDynamicObject(2165, 855.1601, 2320.1076, 1909.4166, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[295] = CreateDynamicObject(1722, 858.1989, 2327.9399, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[296] = CreateDynamicObject(1722, 858.7893, 2327.9299, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[297] = CreateDynamicObject(1722, 859.3795, 2327.9592, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[298] = CreateDynamicObject(1722, 859.9699, 2327.9487, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[299] = CreateDynamicObject(1722, 860.0745, 2330.4089, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[300] = CreateDynamicObject(1722, 860.0359, 2327.9394, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[301] = CreateDynamicObject(1722, 859.4261, 2327.9692, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[302] = CreateDynamicObject(1722, 858.8555, 2327.9577, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[303] = CreateDynamicObject(1671, 890.5544, 2290.6955, 1909.8483, 0.0000, 0.0000, -176.4000); //swivelchair_A
	g_Object[304] = CreateDynamicObject(1722, 859.4837, 2330.3901, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[305] = CreateDynamicObject(1722, 858.8935, 2330.4492, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[306] = CreateDynamicObject(1722, 858.3027, 2330.4091, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[307] = CreateDynamicObject(1722, 858.2390, 2330.4423, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[308] = CreateDynamicObject(1722, 858.8295, 2330.4519, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[309] = CreateDynamicObject(1722, 858.2758, 2327.9665, 1909.4112, 0.0000, 0.0000, 179.1000); //off_chairnu
	g_Object[310] = CreateDynamicObject(1722, 860.0100, 2330.4321, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[311] = CreateDynamicObject(1715, 860.3508, 2339.8662, 1909.4072, 0.0000, 0.0000, 92.0999); //kb_swivelchair2
	g_Object[312] = CreateDynamicObject(2922, 896.0458, 2281.0393, 1910.9879, 0.0000, 0.0000, -90.0000); //kmb_keypad
	g_Object[313] = CreateDynamicObject(19823, 883.1033, 2297.2219, 1916.5596, 0.0000, 0.0000, 0.0000); //AlcoholBottle4
	g_Object[314] = CreateDynamicObject(19874, 866.5394, 2303.8032, 1909.4763, 0.0000, 0.0000, 0.0000); //SoapBar1
	g_Object[315] = CreateDynamicObject(19461, 890.0369, 2278.0102, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[316] = CreateDynamicObject(1722, 859.4199, 2330.4418, 1909.4112, 0.0000, 0.0000, 0.0000); //off_chairnu
	g_Object[317] = CreateDynamicObject(1663, 892.4943, 2322.6174, 1909.8646, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[318] = CreateDynamicObject(1715, 860.2714, 2342.0363, 1909.4072, 0.0000, 0.0000, 92.0999); //kb_swivelchair2
	g_Object[319] = CreateDynamicObject(1663, 892.5288, 2323.8566, 1909.8646, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[320] = CreateDynamicObject(1663, 891.0092, 2323.8984, 1909.8646, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[321] = CreateDynamicObject(1663, 890.9718, 2322.5593, 1909.8646, 0.0000, 0.0000, 88.4000); //swivelchair_B
	g_Object[322] = CreateDynamicObject(1704, 881.6665, 2291.3576, 1915.7440, 0.0000, 0.0000, 22.2999); //kb_chair03
	g_Object[323] = CreateDynamicObject(1704, 884.0607, 2291.7375, 1915.7639, 0.0000, 0.0000, -24.9000); //kb_chair03
	g_Object[324] = CreateDynamicObject(11729, 877.8213, 2296.1386, 1909.4572, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[325] = CreateDynamicObject(19377, 869.2156, 2297.9865, 1909.3687, 0.0000, -90.0000, 0.0000); //wall025
	g_Object[326] = CreateDynamicObject(19377, 869.2156, 2307.6057, 1909.3687, 0.0000, -90.0000, 0.0000); //wall025
	g_Object[327] = CreateDynamicObject(11730, 869.3995, 2298.0300, 1909.4635, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[328] = CreateDynamicObject(19461, 878.1644, 2297.9724, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[329] = CreateDynamicObject(11729, 869.3687, 2303.0874, 1909.3676, 0.0000, 0.0000, 90.0000); //GymLockerClosed1
	g_Object[330] = CreateDynamicObject(2961, 864.5186, 2325.2944, 1910.8542, 0.0000, 0.0000, 0.0000); //fire_break
	g_Object[331] = CreateDynamicObject(11710, 865.1300, 2344.1235, 1912.2790, 0.0000, 0.0000, 0.0000); //FireExitSign1
	g_Object[332] = CreateDynamicObject(1886, 856.9816, 2325.5051, 1913.1540, 23.9999, 0.0000, 128.3000); //shop_sec_cam
	g_Object[333] = CreateDynamicObject(19859, 873.324218, 2316.596191, 1910.635009, 0.000000, 0.000000, 0.000000); //puertaverde
	g_Object[334] = CreateObject(19377, 858.6964, 2310.8012, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[334], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[335] = CreateObject(19377, 858.6964, 2301.1757, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[335], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[336] = CreateDynamicObject(19377, 861.9464, 2320.4130, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[336], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[337] = CreateDynamicObject(19377, 861.9464, 2310.7946, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[337], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[338] = CreateDynamicObject(19377, 880.1229, 2322.8879, 1921.8409, 0.0000, -124.4000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[338], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[339] = CreateDynamicObject(19377, 861.9464, 2301.1550, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[339], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[340] = CreateDynamicObject(2180, 882.9589, 2316.3706, 1915.7578, 0.0000, 0.0000, 0.0000); //MED_OFFICE5_DESK_3
	g_Object[341] = CreateDynamicObject(1671, 883.4550, 2317.5913, 1916.2562, 0.0000, 0.0000, 0.0000); //swivelchair_A
	g_Object[342] = CreateDynamicObject(19377, 871.4760, 2322.9282, 1915.9193, 0.0000, -124.4000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[342], 0, 3895, "inditaly", "tenwhitebrick64", 0xFFFFFFFF);
	g_Object[343] = CreateDynamicObject(19377, 872.3853, 2311.8041, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[343], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[344] = CreateDynamicObject(19377, 882.9060, 2311.8144, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[344], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[345] = CreateDynamicObject(19369, 895.9398, 2285.2885, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[346] = CreateDynamicObject(19461, 871.9447, 2316.6699, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[347] = CreateDynamicObject(19377, 886.8660, 2321.5739, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[347], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[348] = CreateDynamicObject(19377, 897.3455, 2321.5739, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[348], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[349] = CreateDynamicObject(19377, 907.8350, 2321.5739, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[349], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[350] = CreateDynamicObject(19369, 895.9398, 2282.0986, 1911.1639, 0.0000, 0.0000, 0.0000); //wall017
	g_Object[351] = CreateDynamicObject(19377, 893.3856, 2311.9145, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[351], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[352] = CreateDynamicObject(19377, 903.8651, 2311.8144, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[352], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[353] = CreateDynamicObject(2475, 876.0820, 2293.2780, 1910.1812, 0.0000, 0.0000, 180.0000); //CJ_HOBBY_SHELF_3
	g_Object[354] = CreateDynamicObject(19377, 903.8651, 2302.1848, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[354], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[355] = CreateDynamicObject(2395, 888.9305, 2283.9609, 1910.4212, 0.0000, 0.0000, 0.0000); //CJ_SPORTS_WALL
	SetDynamicObjectMaterial(g_Object[355], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[355], 1, 0, "INVALID", "INVALID", 0xFFFFFFFF);
	g_Object[356] = CreateDynamicObject(2475, 874.6021, 2293.2780, 1910.1807, 0.0000, 0.0000, 180.0000); //CJ_HOBBY_SHELF_3
	g_Object[357] = CreateDynamicObject(19377, 893.3745, 2302.2949, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[357], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[358] = CreateDynamicObject(2475, 873.1321, 2293.2780, 1910.1811, 0.0000, 0.0000, 180.0000); //CJ_HOBBY_SHELF_3
	g_Object[359] = CreateDynamicObject(19377, 882.8750, 2302.1848, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[359], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[360] = CreateDynamicObject(19377, 872.3853, 2302.1848, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[360], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[361] = CreateDynamicObject(2614, 883.4274, 2286.4555, 1917.8166, 0.0000, 0.0000, 180.0000); //CJ_US_FLAG
	g_Object[362] = CreateDynamicObject(11691, 892.1665, 2280.9599, 1909.4104, 0.0000, 0.0000, 0.0000); //CTable2
	SetDynamicObjectMaterial(g_Object[362], 0, 16640, "a51", "a51_metal1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[362], 1, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[362], 2, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[362], 3, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	g_Object[363] = CreateDynamicObject(353, 872.7014, 2293.2714, 1911.7679, 0.0000, 0.0000, 0.0000); //mp5lng
	g_Object[364] = CreateDynamicObject(19773, 873.3365, 2293.4799, 1910.4027, -69.7999, 0.0000, -82.0999); //GunHolster1
	g_Object[365] = CreateDynamicObject(19142, 875.2256, 2293.4631, 1911.9118, -3.1999, -90.0000, -0.4999); //SWATArmour1
	g_Object[366] = CreateDynamicObject(19142, 876.0656, 2293.4580, 1911.9118, -3.1999, -90.0000, -0.4999); //SWATArmour1
	g_Object[367] = CreateDynamicObject(2165, 892.8714, 2284.5322, 1909.4041, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[368] = CreateDynamicObject(19200, 873.5862, 2293.3911, 1911.1007, 0.0000, -87.6999, 0.0000); //PoliceHelmet1
	g_Object[369] = CreateDynamicObject(2030, 883.3386, 2297.5820, 1916.1474, 0.0000, 0.0000, 0.0000); //MED_DINNING_1
	g_Object[370] = CreateDynamicObject(358, 872.4082, 2293.3002, 1910.4804, 0.0000, 0.0000, 0.0000); //sniper
	g_Object[371] = CreateDynamicObject(19141, 875.9766, 2293.5449, 1912.4831, 0.0000, -90.0000, 0.0000); //SWATHelmet1
	g_Object[372] = CreateDynamicObject(19141, 875.1365, 2293.5449, 1912.4831, 0.0000, -90.0000, 0.0000); //SWATHelmet1
	g_Object[373] = CreateDynamicObject(356, 873.8274, 2293.2829, 1912.1275, 0.0000, 0.0000, 0.0000); //m4
	g_Object[374] = CreateDynamicObject(2162, 881.3666, 2300.2072, 1916.8067, 0.0000, 0.0000, 0.0000); //MED_OFFICE_UNIT_1
	g_Object[375] = CreateDynamicObject(1742, 886.6209, 2288.0200, 1915.8000, 0.0000, 0.0000, -90.0000); //Med_BOOKSHELF
	g_Object[376] = CreateDynamicObject(353, 872.6918, 2293.2714, 1912.0982, 0.0000, 0.0000, 0.0000); //mp5lng
	g_Object[377] = CreateDynamicObject(356, 873.8073, 2293.2829, 1911.7972, 0.0000, 0.0000, 0.0000); //m4
	g_Object[378] = CreateDynamicObject(19904, 886.2545, 2286.6337, 1916.0716, 0.0000, 0.0000, 0.0000); //ConstructionVest1
	g_Object[379] = CreateDynamicObject(348, 882.8521, 2289.9270, 1916.2596, 0.9000, 90.0000, 90.0000); //desert_eagle
	g_Object[380] = CreateDynamicObject(19461, 859.3549, 2302.7255, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[381] = CreateDynamicObject(1715, 892.7251, 2286.1345, 1909.4268, 0.0000, 0.0000, -22.5000); //kb_swivelchair2
	g_Object[382] = CreateDynamicObject(19377, 861.9464, 2291.5322, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[382], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[383] = CreateDynamicObject(19377, 851.4453, 2291.5322, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[383], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[384] = CreateDynamicObject(19377, 851.4453, 2301.1638, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[384], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[385] = CreateDynamicObject(19377, 851.4453, 2310.7661, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[385], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[386] = CreateDynamicObject(19432, 862.0307, 2312.5034, 1909.3830, 90.0998, 0.0000, 90.0000); //wall072
	SetDynamicObjectMaterial(g_Object[386], 0, 8391, "ballys01", "CJ_blackplastic", 0xFFFFFFFF);
	g_Object[387] = CreateDynamicObject(334, 873.5829, 2293.4770, 1911.4147, -1.6000, -86.6999, 167.3999); //nitestick
	g_Object[388] = CreateDynamicObject(348, 876.2242, 2293.2568, 1910.3864, 0.0000, 0.0000, 0.0000); //desert_eagle
	g_Object[389] = CreateDynamicObject(16732, 880.3662, 2288.8059, 1917.9780, 0.0000, 0.0000, -90.0000); //a51_ventcover
	g_Object[390] = CreateDynamicObject(2262, 884.8171, 2286.8801, 1918.3060, 0.0000, 0.0000, 180.0000); //Frame_SLIM_3
	g_Object[391] = CreateDynamicObject(348, 876.2242, 2293.2568, 1910.6967, 0.0000, 0.0000, 0.0000); //desert_eagle
	g_Object[392] = CreateDynamicObject(2264, 885.8537, 2286.8991, 1917.5960, 0.0000, 0.0000, 180.0000); //Frame_SLIM_5
	g_Object[393] = CreateDynamicObject(349, 875.6983, 2293.2685, 1911.2083, 0.0000, 0.0000, 0.0000); //chromegun
	g_Object[394] = CreateDynamicObject(19442, 867.2077, 2317.3947, 1911.1457, 0.0000, 0.0000, 0.0000); //wall082
	g_Object[395] = CreateDynamicObject(19397, 862.0880, 2325.1840, 1911.1551, 0.0000, 0.0000, 90.0000); //wall045
	g_Object[396] = CreateDynamicObject(19461, 855.8432, 2325.1811, 1911.1606, 0.0000, 0.0000, 90.0000); //wall101
	g_Object[397] = CreateDynamicObject(19461, 867.2147, 2336.6218, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[398] = CreateDynamicObject(19461, 863.8656, 2307.6052, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	g_Object[399] = CreateDynamicObject(16732, 880.3766, 2295.5107, 1917.9780, 0.0000, 0.0000, -91.6999); //a51_ventcover
	g_Object[400] = CreateDynamicObject(16732, 880.3768, 2299.2036, 1917.9780, 0.0000, 0.0000, -91.6999); //a51_ventcover
	g_Object[401] = CreateDynamicObject(16732, 880.3815, 2297.3525, 1917.9780, 0.0000, 0.0000, -91.6999); //a51_ventcover
	g_Object[402] = CreateDynamicObject(2265, 886.0405, 2292.1933, 1917.7270, 0.0000, 0.0000, -90.0000); //Frame_SLIM_6
	g_Object[403] = CreateDynamicObject(349, 874.7183, 2293.2685, 1911.2083, 0.0000, 0.0000, 0.0000); //chromegun
	g_Object[404] = CreateDynamicObject(2260, 886.0538, 2291.3493, 1917.1733, 0.0000, 0.0000, -90.0000); //Frame_SLIM_1
	g_Object[405] = CreateDynamicObject(346, 875.7479, 2293.2375, 1910.3974, 0.0000, 0.0000, 0.0000); //colt45
	g_Object[406] = CreateDynamicObject(346, 875.7479, 2293.2375, 1910.6777, 0.0000, 0.0000, 0.0000); //colt45
	g_Object[407] = CreateDynamicObject(347, 875.3565, 2293.2285, 1910.6728, 0.0000, 0.0000, 0.0000); //silenced
	g_Object[408] = CreateDynamicObject(2008, 882.6123, 2290.0104, 1915.7619, 0.0000, 0.0000, 0.0000); //officedesk1
	g_Object[409] = CreateDynamicObject(347, 875.3565, 2293.2285, 1910.3925, 0.0000, 0.0000, 0.0000); //silenced
	g_Object[410] = CreateDynamicObject(19377, 872.3853, 2292.5515, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[410], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[411] = CreateDynamicObject(18637, 874.1844, 2293.2165, 1910.4287, -0.0999, -90.0000, -90.0000); //PoliceShield1
	g_Object[412] = CreateDynamicObject(19377, 882.8858, 2292.5515, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[412], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[413] = CreateDynamicObject(19377, 893.3670, 2292.6616, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[413], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[414] = CreateDynamicObject(16732, 880.3662, 2287.1445, 1917.9780, 0.0000, 0.0000, -90.0000); //a51_ventcover
	g_Object[415] = CreateDynamicObject(19432, 862.0249, 2311.7819, 1910.1010, -0.2000, 90.0000, 179.8000); //wall072
	SetDynamicObjectMaterial(g_Object[415], 0, 8391, "ballys01", "CJ_blackplastic", 0xFFFFFFFF);
	g_Object[416] = CreateDynamicObject(334, 873.5917, 2293.4599, 1911.2049, -1.6000, -86.6999, 167.3999); //nitestick
	g_Object[417] = CreateDynamicObject(358, 872.4082, 2293.3002, 1911.2510, 0.0000, 0.0000, 0.0000); //sniper
	g_Object[418] = CreateDynamicObject(19432, 862.0249, 2311.0617, 1909.3803, 90.0000, 0.0000, 90.0000); //wall072
	SetDynamicObjectMaterial(g_Object[418], 0, 8391, "ballys01", "CJ_blackplastic", 0xFFFFFFFF);
	g_Object[419] = CreateDynamicObject(19432, 860.3546, 2311.7824, 1908.4305, 0.0000, 0.0000, 180.0000); //wall072
	SetDynamicObjectMaterial(g_Object[419], 0, 8391, "ballys01", "CJ_blackplastic", 0xFFFFFFFF);
	g_Object[420] = CreateDynamicObject(2165, 860.7509, 2309.4873, 1909.4166, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_1
	g_Object[421] = CreateDynamicObject(2395, 892.6504, 2283.9609, 1910.4212, 0.0000, 0.0000, 0.0000); //CJ_SPORTS_WALL
	SetDynamicObjectMaterial(g_Object[421], 0, 14674, "civic02cj", "sl_hotelwallplain1", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[421], 1, 0, "INVALID", "INVALID", 0xFFFFFFFF);
	g_Object[422] = CreateDynamicObject(2165, 859.7706, 2310.4882, 1909.4166, 0.0000, 0.0000, 270.0000); //MED_OFFICE_DESK_1
	g_Object[423] = CreateDynamicObject(1722, 894.7191, 2280.3188, 1909.4012, 0.0000, 0.0000, 59.2999); //off_chairnu
	g_Object[424] = CreateDynamicObject(19999, 883.4024, 2288.2663, 1915.7609, 0.0000, 0.0000, 176.0999); //CutsceneChair2
	SetDynamicObjectMaterial(g_Object[424], 0, 18081, "cj_barb", "ab_leather_strips", 0xFFFFFFFF);
	g_Object[425] = CreateDynamicObject(1722, 894.7838, 2281.8156, 1909.4012, 0.0000, 0.0000, 127.7000); //off_chairnu
	g_Object[426] = CreateDynamicObject(2162, 863.7603, 2309.8361, 1909.4051, 0.0000, 0.0000, 270.0000); //MED_OFFICE_UNIT_1
	g_Object[427] = CreateDynamicObject(18636, 874.8483, 2293.4890, 1910.3841, 0.0000, 0.0000, 88.2999); //PoliceCap1
	g_Object[428] = CreateDynamicObject(2190, 883.9083, 2315.8916, 1916.5705, 0.0000, 0.0000, -179.2998); //PC_1
	g_Object[429] = CreateObject(19377, 869.1962, 2310.7751, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetObjectMaterial(g_Object[429], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[430] = CreateDynamicObject(2309, 883.7066, 2314.7976, 1915.7573, 0.0000, 0.0000, 0.0000); //MED_OFFICE_CHAIR2
	g_Object[431] = CreateDynamicObject(19099, 873.2158, 2293.4748, 1911.0329, 0.0000, -87.3999, 3.6000); //PoliceCap2
	g_Object[432] = CreateDynamicObject(1968, 886.8986, 2302.4001, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[432], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[433] = CreateDynamicObject(19773, 872.9169, 2293.4711, 1910.3771, -69.7999, 0.0000, -82.0999); //GunHolster1
	g_Object[434] = CreateDynamicObject(2309, 882.8461, 2314.9177, 1915.7573, 0.0000, 0.0000, 0.0000); //MED_OFFICE_CHAIR2
	g_Object[435] = CreateDynamicObject(1744, 886.6348, 2290.1882, 1917.4895, 0.0000, 0.0000, -91.8999); //MED_SHELF
	g_Object[436] = CreateDynamicObject(19022, 886.2393, 2290.4387, 1917.8795, 0.0000, 0.0000, -179.9999); //GlassesType17
	g_Object[437] = CreateDynamicObject(1968, 892.8494, 2298.2971, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[437], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[438] = CreateDynamicObject(19325, 882.9041, 2312.5187, 1910.8304, 0.0000, 0.0000, 90.0000); //lsmall_window01
	g_Object[439] = CreateDynamicObject(2167, 900.1724, 2321.4392, 1909.3736, 0.0000, 0.0000, 89.7990); //MED_OFFICE_UNIT_7
	g_Object[440] = CreateDynamicObject(19325, 895.9345, 2309.2270, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[441] = CreateDynamicObject(2167, 900.1741, 2321.8395, 1909.3736, 0.0000, 0.0000, 89.7990); //MED_OFFICE_UNIT_7
	g_Object[442] = CreateDynamicObject(19611, 900.2877, 2321.3112, 1909.5467, 0.0000, 0.0000, 0.0000); //MicrophoneStand1
	g_Object[443] = CreateDynamicObject(2894, 883.2786, 2316.4299, 1916.5642, 0.0000, 0.0000, 0.0000); //kmb_rhymesbook
	g_Object[444] = CreateDynamicObject(1776, 885.4616, 2309.8034, 1910.4935, 0.0000, 0.0000, 90.0000); //CJ_CANDYVENDOR
	g_Object[445] = CreateDynamicObject(19610, 900.2896, 2321.3144, 1911.1926, 0.0000, 0.0000, -75.1999); //Microphone1
	g_Object[446] = CreateDynamicObject(2894, 900.5891, 2321.6071, 1910.9035, 0.0000, 0.0000, 89.5999); //kmb_rhymesbook
	g_Object[447] = CreateDynamicObject(19610, 900.2758, 2321.6005, 1911.2026, 0.0000, 0.0000, -82.8000); //Microphone1
	g_Object[448] = CreateDynamicObject(19610, 900.2402, 2321.8803, 1911.2026, 0.0000, 0.0000, -101.4000); //Microphone1
	g_Object[449] = CreateDynamicObject(19031, 900.5753, 2321.1245, 1910.9425, 0.0000, 0.0000, 164.3999); //GlassesType26
	g_Object[450] = CreateDynamicObject(19325, 872.6937, 2312.5256, 1913.8503, 0.0000, 0.0000, 90.0000); //lsmall_window01
	g_Object[451] = CreateDynamicObject(2256, 883.3040, 2309.4375, 1918.1400, 0.0000, 0.0000, 180.0000); //Frame_Clip_3
	g_Object[452] = CreateDynamicObject(2139, 887.4530, 2293.7495, 1909.3991, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT2
	g_Object[453] = CreateDynamicObject(2139, 885.4824, 2293.7495, 1909.3991, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT2
	g_Object[454] = CreateDynamicObject(2139, 886.4627, 2293.7495, 1909.3991, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT2
	g_Object[455] = CreateDynamicObject(2138, 888.4365, 2293.7434, 1909.4057, 0.0000, 0.0000, 180.0000); //CJ_K3_LOW_UNIT1
	g_Object[456] = CreateDynamicObject(1808, 886.4121, 2310.7048, 1915.7469, 0.0000, 0.0000, -90.7998); //CJ_WATERCOOLER2
	g_Object[457] = CreateDynamicObject(1968, 886.9082, 2305.8498, 1909.9271, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[457], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[458] = CreateDynamicObject(2886, 873.0512, 2312.5551, 1911.0296, 0.0000, 0.0000, -180.0000); //puertaverde
	g_Object[459] = CreateDynamicObject(2200, 886.4661, 2314.4670, 1915.7707, 0.0000, 0.0000, 270.0000); //MED_OFFICE5_UNIT_1
	g_Object[460] = CreateDynamicObject(19325, 893.9603, 2312.5187, 1909.7829, -90.1999, 0.0000, 90.0000); //lsmall_window01
	g_Object[461] = CreateDynamicObject(19325, 899.4765, 2300.2668, 1910.8502, 0.0000, 0.0000, 0.0000); //lsmall_window01
	g_Object[462] = CreateDynamicObject(1968, 893.0989, 2306.0803, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[462], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[463] = CreateDynamicObject(1968, 892.8488, 2302.1867, 1909.9371, 0.0000, 0.0000, 0.0000); //dinerseat_2
	SetDynamicObjectMaterial(g_Object[463], 0, 10765, "airportgnd_sfse", "white", 0xFFFFFFFF);
	g_Object[464] = CreateDynamicObject(11730, 877.8193, 2306.5825, 1909.3646, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[465] = CreateDynamicObject(11743, 886.2039, 2293.6232, 1910.4399, 0.0000, 0.0000, 144.1999); //MCoffeeMachine1
	g_Object[466] = CreateDynamicObject(2166, 854.1812, 2311.7780, 1909.4138, 0.0000, 0.0000, 0.0000); //MED_OFFICE_DESK_2
	g_Object[467] = CreateDynamicObject(2163, 853.6749, 2314.3894, 1909.4140, 0.0000, 0.0000, 90.0000); //MED_OFFICE_UNIT_2
	g_Object[468] = CreateDynamicObject(2165, 860.7509, 2305.9960, 1909.4166, 0.0000, 0.0000, 90.0000); //MED_OFFICE_DESK_1
	g_Object[469] = CreateDynamicObject(2165, 858.7803, 2305.0258, 1909.4166, 0.0000, 0.0000, 360.0000); //MED_OFFICE_DESK_1
	g_Object[470] = CreateDynamicObject(1808, 853.8308, 2316.4877, 1909.4123, 0.0000, 0.0000, 90.0000); //CJ_WATERCOOLER2
	g_Object[471] = CreateDynamicObject(2165, 858.2603, 2317.1877, 1909.4166, 0.0000, 0.0000, 360.0000); //MED_OFFICE_DESK_1
	g_Object[472] = CreateDynamicObject(14494, 865.4743, 2306.1770, 1911.7786, 0.0000, 0.0000, -180.0000); //sweets_bath
	SetDynamicObjectMaterial(g_Object[472], 0, 10101, "2notherbuildsfe", "ferry_build14", 0xFFFFFFFF);
	g_Object[473] = CreateDynamicObject(2165, 855.1303, 2306.0063, 1909.4166, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[474] = CreateDynamicObject(2165, 863.2808, 2313.0961, 1909.4166, 0.0000, 0.0000, 180.0000); //MED_OFFICE_DESK_1
	g_Object[475] = CreateDynamicObject(19461, 864.3259, 2297.9719, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[475], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[476] = CreateDynamicObject(11729, 877.8213, 2297.4082, 1909.4572, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[477] = CreateDynamicObject(19461, 864.3259, 2307.6052, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[477], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[478] = CreateDynamicObject(19369, 869.0371, 2307.0478, 1911.1639, 0.0000, 0.0000, -0.2998); //wall017
	SetDynamicObjectMaterial(g_Object[478], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[479] = CreateDynamicObject(19461, 869.0269, 2300.6245, 1911.1606, 0.0000, 0.0000, 0.0000); //wall101
	SetDynamicObjectMaterial(g_Object[479], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[480] = CreateDynamicObject(11730, 869.3696, 2301.1074, 1909.3732, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[481] = CreateDynamicObject(19369, 866.0366, 2312.4501, 1911.1639, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[481], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[482] = CreateDynamicObject(11729, 869.3687, 2301.7773, 1909.3676, 0.0000, 0.0000, 90.0000); //GymLockerClosed1
	g_Object[483] = CreateDynamicObject(19369, 869.2553, 2293.1616, 1911.1639, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[483], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[484] = CreateDynamicObject(11730, 877.8150, 2301.3154, 1909.3634, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[485] = CreateDynamicObject(19369, 869.2371, 2312.4501, 1911.1639, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[485], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[486] = CreateDynamicObject(19369, 866.0457, 2293.1816, 1911.1639, 0.0000, 0.0000, 90.0000); //wall017
	SetDynamicObjectMaterial(g_Object[486], 0, 14443, "ganghoos", "motel_bathfloor", 0xFFFFFFFF);
	g_Object[487] = CreateDynamicObject(11729, 877.8092, 2301.9729, 1909.3635, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[488] = CreateDynamicObject(2164, 863.7332, 2304.2946, 1909.3947, 0.0000, 0.0000, 270.0000); //MED_OFFICE_UNIT_5
	g_Object[489] = CreateDynamicObject(19369, 876.2800, 2316.6386, 1917.5356, 0.0000, 0.0000, 0.0000); //wall017
	SetDynamicObjectMaterial(g_Object[489], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[490] = CreateDynamicObject(19397, 880.2562, 2307.5734, 1917.5356, 0.0000, 0.0000, 0.0000); //wall045
	SetDynamicObjectMaterial(g_Object[490], 0, 14674, "civic02cj", "sl_hotelwall1", 0xFFFFFFFF);
	g_Object[491] = CreateDynamicObject(11729, 877.8037, 2302.6279, 1909.3665, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[492] = CreateDynamicObject(2616, 853.6851, 2311.1318, 1911.0943, 0.0000, 0.0000, 90.0000); //POLICE_NB04
	SetDynamicObjectMaterial(g_Object[492], 0, 14650, "ab_trukstpc", "mp_CJ_WOOD5", 0xFFFFFFFF);
	g_Object[493] = CreateDynamicObject(11730, 877.8187, 2308.5380, 1909.3624, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[494] = CreateDynamicObject(1492, 880.2677, 2292.1953, 1915.7784, 0.0000, 0.0000, 90.0000); //Gen_doorINT02
	SetDynamicObjectMaterial(g_Object[494], 0, 1560, "7_11_door", "cj_sheetmetal2", 0xFFFFFFFF);
	SetDynamicObjectMaterial(g_Object[494], 1, 14652, "ab_trukstpa", "mp_diner_wood", 0xFFFFFFFF);
	g_Object[495] = CreateDynamicObject(11730, 877.8287, 2303.2954, 1909.3624, 0.0000, 0.0000, -90.0000); //GymLockerOpen1
	g_Object[496] = CreateDynamicObject(11730, 869.3555, 2302.4387, 1909.3624, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[497] = CreateDynamicObject(2202, 861.2639, 2313.1335, 1909.3940, 0.0000, 0.0000, 180.0000); //PHOTOCOPIER_2
	g_Object[498] = CreateDynamicObject(2690, 865.1542, 2325.3933, 1911.0766, 0.0000, 0.0000, 177.7998); //CJ_FIRE_EXT
	g_Object[499] = CreateDynamicObject(2690, 876.5067, 2302.1638, 1917.5036, 0.0000, 0.0000, 90.9999); //CJ_FIRE_EXT
	g_Object[500] = CreateDynamicObject(11729, 877.8222, 2307.8642, 1909.3675, 0.0000, 0.0000, -90.0000); //GymLockerClosed1
	g_Object[501] = CreateDynamicObject(1715, 862.5701, 2314.4545, 1909.4072, 0.0000, 0.0000, 0.0000); //kb_swivelchair2
	g_Object[502] = CreateDynamicObject(1715, 854.8660, 2314.3774, 1909.4072, 0.0000, 0.0000, 360.0000); //kb_swivelchair2
	g_Object[503] = CreateDynamicObject(1715, 854.4697, 2307.3828, 1909.4072, 0.0000, 0.0000, 0.0000); //kb_swivelchair2
	g_Object[504] = CreateDynamicObject(2961, 877.5003, 2318.0219, 1917.4327, 0.0000, 0.0000, 0.5000); //fire_break
	g_Object[505] = CreateDynamicObject(2690, 896.1522, 2298.5512, 1911.0898, 0.0000, 0.0000, 91.8999); //CJ_FIRE_EXT
	g_Object[506] = CreateDynamicObject(1715, 858.3161, 2309.9855, 1909.4072, 0.0000, 0.0000, 90.0000); //kb_swivelchair2
	g_Object[507] = CreateDynamicObject(1715, 862.2163, 2309.9855, 1909.4072, 0.0000, 0.0000, 270.0000); //kb_swivelchair2
	g_Object[508] = CreateDynamicObject(1715, 859.0401, 2315.9348, 1909.4072, 0.0000, 0.0000, 180.0000); //kb_swivelchair2
	g_Object[509] = CreateDynamicObject(1715, 859.2902, 2303.5122, 1909.4072, 0.0000, 0.0000, 180.0000); //kb_swivelchair2
	g_Object[510] = CreateDynamicObject(2690, 882.1267, 2312.6965, 1911.1176, 0.0000, 0.0000, -177.3000); //CJ_FIRE_EXT
	g_Object[511] = CreateDynamicObject(1715, 855.3165, 2311.3154, 1909.4072, 0.0000, 0.0000, -143.1000); //kb_swivelchair2
	g_Object[512] = CreateDynamicObject(346, 1822.2655, -1613.1085, 11.7177, 0.0000, 0.0000, 0.0000); //colt45
	g_Object[513] = CreateDynamicObject(1715, 862.2163, 2306.4643, 1909.4072, 0.0000, 0.0000, 270.0000); //kb_swivelchair2
	g_Object[514] = CreateDynamicObject(11730, 869.3665, 2306.3227, 1909.3684, 0.0000, 0.0000, 90.0000); //GymLockerOpen1
	g_Object[515] = CreateDynamicObject(19377, 861.9464, 2330.0146, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[515], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[516] = CreateObject(19805, 867.1506, 2333.7475, 1911.1103, 0.0000, 0.0000, -90.0000); //Whiteboard1
	SetObjectMaterialText(g_Object[516], "Comisaría 89 - Verona Beach", 0, 140, "Gabriola", 100, 1, 0xFFFFFFFF, 0x0, 1);
	g_Object[517] = CreateObject(19805, 867.1506, 2334.2780, 1911.7103, 0.0000, 0.0000, -90.0000); //Whiteboard1
	SetObjectMaterialText(g_Object[517], "Los Santos", 0, 140, "Arial", 100, 1, 0xFFFFFFFF, 0x0, 1);
	g_Object[518] = CreateObject(19805, 867.1506, 2332.9367, 1911.4499, 0.0000, 0.0000, -90.0000); //Whiteboard1
	SetObjectMaterialText(g_Object[518], "Police Department", 0, 140, "Arial", 65, 1, 0xFFFFFFFF, 0x0, 1);
	g_Object[519] = CreateDynamicObject(2200, 902.4456, 2316.4296, 1909.4262, 0.0000, 0.0000, 0.0000); //MED_OFFICE5_UNIT_1
	g_Object[520] = CreateDynamicObject(2162, 900.4356, 2316.5678, 1909.3890, 0.0000, 0.0000, 0.0000); //MED_OFFICE_UNIT_1
	g_Object[521] = CreateDynamicObject(19825, 890.8325, 2293.2614, 1912.1674, 0.0000, 0.0000, 179.8999); //SprunkClock1
	g_Object[522] = CreateDynamicObject(2222, 888.3388, 2293.4521, 1910.5240, 0.0000, 0.0000, -89.0999); //rustyhigh
	g_Object[523] = CreateDynamicObject(2173, 904.3621, 2299.4255, 1909.4011, 0.0000, 0.0000, 360.0000); //MED_OFFICE_DESK_3
	SetDynamicObjectMaterial(g_Object[523], 0, 14652, "ab_trukstpa", "CJ_WOOD6", 0xFFFFFFFF);
	g_Object[524] = CreateDynamicObject(1663, 905.1853, 2298.1567, 1909.8647, 0.0000, 0.0000, -128.8999); //swivelchair_B
	g_Object[525] = CreateDynamicObject(2223, 887.7758, 2293.5451, 1910.5266, 0.0000, 0.0000, 0.0000); //rustymed
	g_Object[526] = CreateObject(19377, 894.1740, 2281.9548, 1909.3188, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[526], 0, 3922, "bistro", "DinerFloor", 0xFFFFFFFF);
	g_Object[527] = CreateDynamicObject(2190, 905.0917, 2299.7641, 1910.2105, 0.0000, 0.0000, 0.0000); //PC_1
	g_Object[528] = CreateDynamicObject(2190, 908.0512, 2302.7756, 1907.2702, 0.0000, 0.0000, 0.0000); //PC_1
	g_Object[529] = CreateDynamicObject(19377, 893.3572, 2273.4465, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[529], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[530] = CreateDynamicObject(19377, 882.8577, 2273.2863, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[530], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[531] = CreateDynamicObject(19461, 891.1453, 2284.0720, 1908.8802, 0.0000, 0.0000, 90.0000); //wall101
	SetDynamicObjectMaterial(g_Object[531], 0, 3077, "blkbrdx", "nf_blackbrd", 0xFFFFFFFF);
	g_Object[532] = CreateDynamicObject(19377, 893.3776, 2283.0598, 1912.9685, 0.0000, -90.0000, 0.0000); //wall025
	SetDynamicObjectMaterial(g_Object[532], 0, 14785, "gen_offtrackint", "otb_rooftile1", 0xFFFFFFFF);
	g_Object[533] = CreateDynamicObject(19786, 904.3778, 2296.9399, 1911.3460, 0.0000, 0.0000, 180.0000); //LCDTVBig1
	g_Object[333] = CreateDynamicObject(19859, 873.324218, 2316.596191, 1910.635009, 0.000000, 0.000000, 0.000000);
	CreateDynamicObject(19859, 876.325073, 2316.579345, 1910.635009, 0.000000, 0.000000, -180.0000);

	// ——— garajes interiores — EdinsonWalker
	new
		garg
	;
    // ———
	CreateObject(3354, -2460.04688, -626.38354, 13.01109,   0.00000, 0.00000, 90.00000);
	CreateObject(3354, -2412.56616, -642.18176, 12.99715,   0.00000, 0.00000, 90.00000);
	CreateObject(3354, -2397.39404, -598.26202, 13.01110,   0.00000, 0.00000, 133.32021);
	// ——— Pequeño
	garg = CreateObject(18981, -2461.87158, -633.33533, 11.23182,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2461.91162, -633.33679, 16.82644,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2458.95630, -637.70593, 11.71500,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2455.97437, -630.51752, 11.71500,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2466.09595, -630.39453, 11.71500,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2458.91211, -625.88312, 11.71500,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);

	// ——— Mediano
	garg = CreateObject(18981, -2413.29858, -636.12415, 11.23182,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2413.29858, -636.12415, 17.22640,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2406.50415, -634.00873, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2415.04199, -642.64331, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2423.60986, -639.16626, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2415.74731, -629.33917, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);

	// ——— Grande
	garg = CreateObject(18981, -2402.85938, -592.28430, 11.33661,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "bwtilebroth", 0);
	garg = CreateObject(18981, -2402.85938, -592.28430, 18.15434,   0.00000, 90.00000, 0.00000);
	SetObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2402.52710, -581.26819, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2396.96826, -598.51227, 11.23180,   0.00000, 0.00000, 133.32021);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2412.33765, -592.73846, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2408.76904, -603.04407, 11.23180,   0.00000, 0.00000, 90.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);
	garg = CreateDynamicObject(18981, -2391.55151, -589.30396, 11.23180,   0.00000, 0.00000, 0.00000);
	SetDynamicObjectMaterial(garg, 0, 14669, "711c", "cj_white_wall2", 0);

	// ———  VIP interior — EdinsonWalker — 48 objetos
	new vip;
	vip = CreateDynamicObject(18981, -2312.12012, 176.00507, 40.90909,   0.00000, 90.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 14669, "711c", "bwtilebroth", 0);
	vip = CreateDynamicObject(18981, -2312.12012, 176.00507, 33.84071,   0.00000, 90.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 14669, "711c", "bwtilebroth", 0);
	vip = CreateDynamicObject(18981, -2310.21997, 185.58154, 34.33010,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "pagodaroof4", 0);
	vip = CreateDynamicObject(18981, -2306.54492, 168.78226, 34.33010,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "pagodaroof4", 0);
	vip = CreateDynamicObject(18981, -2300.25610, 176.28162, 34.33012,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "walpaper_dragn", 0);
	vip = CreateDynamicObject(18981, -2317.55054, 176.00523, 34.33012,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	SetDynamicObjectMaterial(vip, 0, 16639, "triadprops_lvs", "walpaper_dragn", 0);
	CreateDynamicObject(14782, -2301.08594, 173.50267, 35.27818,   0.00000, 0.00000, -90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2302.33643, 176.29814, 34.85120,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2303.31592, 175.35020, 34.83290,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(18885, -2304.57178, 169.64328, 35.41940,   0.00000, 0.00000, 180.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2305.49854, 171.11031, 34.83290,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2773, -2304.23950, 174.37891, 34.85120,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19125, -2305.56519, 169.54500, 34.53240,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2302.63916, 169.61447, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2299.97900, 169.61218, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19125, -2301.00928, 172.50560, 34.53237,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2315.71436, 184.32672, 34.29805,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1569, -2300.83130, 181.89047, 34.25342,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.95142, 183.70245, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2317.14917, 185.42450, 36.64207,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2300.29199, 185.29639, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2300.25146, 169.14325, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3533, -2317.29077, 169.08047, 36.64207,   0.00000, 0.00000, 0.06000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2312.09448, 184.31015, 34.29810,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91797, 176.08099, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91870, 173.34589, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.93628, 170.60448, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2308.91748, 180.99863, 36.05873,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.89819, 181.89952, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.92456, 186.22101, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.89355, 175.18550, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1649, -2308.90820, 170.87070, 35.93816,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(14608, -2313.09473, 171.20479, 35.76169,   0.00000, 0.00000, -44.27999, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2755, -2300.75024, 182.61356, 35.94881,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(11725, -2301.32983, 180.70349, 34.72287,   0.00000, 0.00000, -97.25999, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2725, -2312.99316, 182.97859, 34.71739,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2726, -2313.06274, 183.00795, 35.49006,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19128, -2312.42822, 175.15434, 34.32055,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2316.30835, 179.53941, 34.29810,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2316.38892, 175.74800, 34.29810,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3524, -2316.35669, 178.62827, 34.60627,   0.00000, 0.00000, 91.80000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2316.98535, 173.88535, 36.64071,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2317.02515, 183.12483, 36.64071,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(2232, -2310.48535, 185.00037, 36.64070,   0.00000, 0.00000, 0.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2307.42261, 184.73531, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2304.75415, 184.71144, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2302.06519, 184.70569, 34.65999,   0.00000, 0.00000, 90.00000, -1, 5, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1723, -2301.51392, 179.32788, 34.29810,   0.00000, 0.00000, -90.00000, -1, 5, -1, MAX_RADIO_STREAM);

	// ——— SAN interior — 123 objetos
	CreateObject(4604, 246.67168, 1776.46240, 700.09454,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(19450, 250.44000, 1784.43994, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 245.63000, 1779.93994, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 253.91000, 1780.12000, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 253.03000, 1775.83997, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19404, 252.33000, 1778.41003, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19388, 249.64999, 1777.30005, 701.65002,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(19388, 246.66000, 1775.83997, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19466, 252.38000, 1778.39001, 702.50787,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1502, 249.13000, 1776.76001, 699.95001,   0.00000, 0.00000, 45.00000, 40, 40);
	CreateDynamicObject(2165, 251.81000, 1777.84998, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19358, 248.53999, 1774.62000, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1714, 252.63000, 1777.00000, 700.09003,   0.00000, 0.00000, 230.00000, 40, 40);
	CreateDynamicObject(2007, 253.70000, 1776.69995, 700.01001,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(1961, 250.82001, 1775.96997, 701.85999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1962, 251.55000, 1775.96997, 701.85999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1960, 252.27000, 1775.96997, 701.85999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1569, 247.05000, 1784.39001, 700.02002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1569, 250.03000, 1784.39001, 700.02002,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(1703, 251.10001, 1783.83997, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1703, 246.23000, 1779.16003, 700.09003,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2315, 247.52000, 1779.45996, 700.09003,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2315, 251.39000, 1782.50000, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2250, 251.42000, 1782.51001, 701.03003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2250, 247.52000, 1780.31006, 701.03003,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2852, 252.61000, 1782.48999, 700.58002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2894, 247.42000, 1779.67004, 700.58002,   0.00000, 0.00000, 39.00000, 40, 40);
	CreateDynamicObject(2011, 246.21001, 1783.96997, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2011, 253.24001, 1779.06995, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 245.63000, 1770.30005, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19358, 250.13000, 1773.12000, 701.65002,   0.00000, 0.00000, 90.40000, 40, 40);
	CreateDynamicObject(19388, 252.80000, 1774.22998, 701.65002,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(1502, 252.28999, 1773.68994, 699.95001,   0.00000, 0.00000, 45.00000, 40, 40);
	CreateDynamicObject(1778, 253.53000, 1775.81006, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2712, 253.57001, 1775.31995, 700.67999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 249.17999, 1768.97998, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1705, 246.30000, 1770.17004, 700.09003,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1705, 247.85001, 1769.63000, 700.09003,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(1705, 251.83000, 1769.63000, 700.09003,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(2315, 248.60001, 1769.55005, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2855, 248.78000, 1769.55005, 700.58002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2251, 249.67000, 1769.35999, 701.40997,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1667, 249.91000, 1769.75000, 700.69000,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1667, 250.08000, 1769.65002, 700.69000,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2817, 248.02000, 1783.18005, 700.08002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 254.81000, 1780.65002, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(14393, 255.23000, 1759.94995, 702.32001,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 261.73001, 1768.97998, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 249.19000, 1768.82996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19388, 255.31000, 1768.97803, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19388, 255.31000, 1768.82996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 261.73001, 1768.82996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(14391, 256.13000, 1760.85999, 701.04999,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1705, 257.10999, 1767.64001, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1705, 258.67999, 1767.02002, 700.09003,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(2332, 259.63000, 1764.35999, 700.38000,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(638, 254.72000, 1765.19995, 701.42999,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(638, 258.07001, 1765.19995, 701.42999,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2894, 256.39999, 1765.18005, 701.09998,   0.00000, 0.00000, 80.00000, 40, 40);
	CreateDynamicObject(1714, 257.10999, 1762.81006, 700.09998,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(1714, 254.17999, 1762.77002, 700.09998,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1502, 251.39999, 1759.68005, 699.95001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2395, 250.95000, 1759.81995, 700.09998,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(2395, 252.48000, 1759.81897, 702.46002,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(2395, 249.78999, 1759.58997, 702.46002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2395, 248.19000, 1759.57996, 700.09998,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1704, 254.31000, 1753.90002, 700.09003,   0.00000, 0.00000, 135.00000, 40, 40);
	CreateDynamicObject(1704, 256.22000, 1754.48999, 700.09003,   0.00000, 0.00000, -135.00000, 40, 40);
	CreateDynamicObject(1815, 254.42000, 1754.72998, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2247, 254.89000, 1755.31995, 700.98999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2010, 253.33000, 1754.94995, 700.09998,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2010, 256.59000, 1754.91003, 700.09998,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19466, 253.95000, 1759.94995, 701.91998,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19466, 256.17001, 1759.94995, 701.91998,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19466, 258.39999, 1759.94995, 701.91998,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1502, 254.53000, 1768.95996, 699.95001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 262.60999, 1772.18005, 701.65002,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(19450, 263.67001, 1770.76001, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 257.75000, 1783.81995, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19388, 257.75000, 1777.43005, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19388, 259.37000, 1782.07996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19388, 265.76001, 1782.07996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 268.39999, 1775.63000, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19358, 256.17001, 1781.31006, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 262.09000, 1787.44995, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 269.72000, 1784.41003, 701.65002,   0.00000, 0.00000, 45.00000, 40, 40);
	CreateDynamicObject(19450, 269.60999, 1780.35999, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(19450, 272.14999, 1782.07996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19358, 262.57001, 1782.07996, 701.65002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(19450, 262.67999, 1786.88000, 701.65002,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1569, 262.47598, 1772.09424, 700.02002,   0.00000, 0.00000, 224.81992, 40, 40);
	CreateDynamicObject(1569, 260.37656, 1769.99683, 700.02002,   0.00000, 0.00000, 405.05997, 40, 40);
	CreateDynamicObject(2817, 260.85318, 1770.91943, 700.08002,   0.00000, 0.00000, 44.88000, 40, 40);
	CreateDynamicObject(1502, 258.59000, 1782.06006, 699.95001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1502, 264.98001, 1782.06006, 699.95001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2207, 265.48999, 1785.14001, 700.09003,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(1714, 267.29001, 1785.67004, 700.09998,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(330, 266.98001, 1784.23999, 700.85999,   90.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2894, 265.87000, 1785.32996, 700.85999,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2608, 263.00000, 1785.06995, 701.21002,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(1962, 267.85001, 1786.13000, 701.85999,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(2185, 258.67001, 1785.34998, 700.09003,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(1714, 260.03000, 1786.59998, 700.09998,   0.00000, 0.00000, -45.00000, 40, 40);
	CreateDynamicObject(1704, 260.01999, 1783.92004, 700.09003,   0.00000, 0.00000, 180.00000, 40, 40);
	CreateDynamicObject(2078, 262.38000, 1784.88000, 700.10999,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(2007, 257.95001, 1786.73999, 700.01001,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2886, 257.82001, 1778.51001, 701.44000,   0.00000, 0.00000, -90.00000, 40, 40);
	CreateDynamicObject(14782, 255.35538, 1780.49646, 701.05066,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2007, 256.71194, 1781.03699, 700.01001,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(14805, 265.88492, 1778.80530, 700.91333,   0.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2239, 257.76993, 1756.57715, 700.06451,   0.00000, 0.00000, -79.74001, 40, 40);
	CreateDynamicObject(3031, 251.82787, 1756.62805, 701.60242,   0.00000, 0.00000, -43.13999, 40, 40);
	CreateDynamicObject(1502, 257.76245, 1776.68018, 699.95001,   0.00000, 0.00000, 90.00000, 40, 40);
	CreateDynamicObject(2885, 249.79918, 1785.64258, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 249.79919, 1778.93506, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 260.72601, 1785.64258, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 260.72601, 1778.93506, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 260.72601, 1792.35095, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 271.65250, 1792.35095, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 271.65250, 1785.64258, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 271.65250, 1778.93506, 703.59308,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 249.79919, 1775.55994, 703.58313,   270.00000, 0.00000, 0.00000, 40, 40);
	CreateDynamicObject(2885, 260.72601, 1775.55994, 703.58313,   270.00000, 0.00000, 0.00000, 40, 40);

	//PEAJE FARO / 20 objetos / EdinsonWalker
	CreateDynamicObjectEx(10829, 53.41850, -1530.79065, 3.97333,   0.00000, 0.00000, 261.04572, 1000.0, 1000.0);
	CreateDynamicObject(1250, 49.49018, -1535.80005, 5.10076,   0.00000, 0.00000, -7.81222, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, 56.90186, -1528.36621, 4.94126,   0.00000, 0.00000, -189.53111, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 52.45057, -1536.86682, 4.13188,   0.00000, 0.00000, 82.18770, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 53.85027, -1527.02954, 4.04501,   0.00000, 0.00000, -97.81226, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 52.71272, -1535.98633, 4.11685,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 53.69006, -1527.92981, 4.05946,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 58.59167, -1530.10193, 4.71667,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 57.84173, -1534.95386, 4.71670,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 47.81287, -1533.60645, 4.71670,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 48.62530, -1528.29102, 4.71670,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(3512, -31.77147, -1532.05139, 0.83861,   0.00000, 0.00000, 22.43999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -32.99367, -1539.65601, 0.97799,   0.00000, 0.00000, 27.71999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -34.67544, -1547.77808, 1.00891,   0.00000, 0.00000, 13.37999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -37.23591, -1555.47302, 0.94904,   0.00000, 0.00000, 25.31999, 1000.0, 1000.0);
	CreateDynamicObject(3463, 19.00132, -1525.51685, 3.66477,   0.00000, 0.00000, 75.36000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3506, 82.73570, -1516.94031, 3.16382,   0.00000, 0.00000, -53.04000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 58.38877, -1532.57568, 4.60351,   0.00000, 0.00000, -9.84000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(19859, 48.69372, -1530.42456, 5.54386,   0.00000, 0.00000, -99.12000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3506, 75.94035, -1516.54309, 3.09753,   0.00000, 0.00000, -33.00000, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE TUNEL LS-SF / 30 objetos
	CreateDynamicObject(3881, 21.72519, -1337.69922, 10.88440,   0.00000, 0.00000, 127.99625, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1229, 0.81767, -1350.52271, 11.18264,   0.00000, 358.00000, 326.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1229, 29.80743, -1305.74756, 13.68069,   0.00000, 0.00000, 137.99820, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 5.81366, -1318.08228, 10.49156,   0.00000, 0.00000, 308.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3881, 8.09473, -1319.53223, 12.37458,   2.00000, 0.00000, 307.99072, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, 24.05878, -1339.37561, 9.07829,   0.00000, 0.00000, 127.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1.18159, -1312.32751, 10.62508,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 0.63789, -1311.67041, 10.62234,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 7.86221, -1323.77417, 10.51996,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 8.97134, -1325.14514, 10.52443,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 8.45340, -1324.41553, 10.52545,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 12.86280, -1319.79944, 10.89280,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 13.34145, -1320.44385, 10.89289,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 13.87595, -1321.09351, 10.89543,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 21.99424, -1333.28455, 9.29620,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 21.46582, -1332.65137, 9.28580,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 20.92460, -1331.98987, 9.28337,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 16.80042, -1337.38452, 9.15949,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 16.25214, -1336.75439, 9.15717,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 15.76797, -1336.13464, 9.15406,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 4.68705, -1321.06555, 11.05175,   0.00000, 0.00000, 37.99719, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 25.09694, -1336.22107, 9.85766,   0.00000, 0.00000, 38.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 12.97048, -1318.74170, 12.17962,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 10.35747, -1315.08643, 12.21519,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 11.63741, -1316.77881, 12.20033,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 19.14176, -1341.82019, 10.48168,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 16.42441, -1338.38184, 10.57723,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(646, 17.67007, -1339.98157, 10.53705,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 28.55083, -1345.26758, 9.21661,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 29.10443, -1346.00391, 9.21805,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE SAN FIERRO / 70 objetos
	CreateDynamicObject(3512, -1807.28894, -565.04437, 14.77296,   2.50000, 0.10000, 142.60004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1796.27014, -564.77509, 15.13594,   0.00000, 0.00000, 185.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1786.09778, -564.94495, 15.33595,   0.00000, 0.00000, -179.89001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1776.34131, -564.97620, 15.02593,   -0.10000, 0.00000, -180.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.99182, -595.13611, 15.33384,   -0.10000, 0.00000, -355.80005, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1776.37415, -595.05597, 15.01434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1796.06421, -595.14075, 15.26634,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1786.32385, -595.14301, 15.28916,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1829.22205, -595.23572, 15.48593,   0.10000, 0.00000, -0.20000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1841.36609, -595.35315, 18.13447,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1853.16748, -595.19836, 20.32037,   0.00000, 0.00000, 20.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1866.77417, -595.18304, 22.79581,   0.00000, 0.00000, 10.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1829.53381, -564.71716, 15.45033,   0.00000, 0.00000, -169.99001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1842.35791, -564.78455, 18.03795,   0.00000, 0.00000, -170.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1866.21069, -564.68115, 22.78217,   0.02000, -0.01000, -170.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1853.80737, -564.63226, 20.86625,   0.00000, 0.01000, -180.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1808.15149, -554.08661, 14.98843,   0.00000, 0.00000, 70.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.74023, -607.13513, 15.48512,   0.00000, 0.00000, -97.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1830.29980, -554.08624, 14.86344,   0.00000, 0.00000, -60.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.46582, -618.33319, 15.63772,   0.00000, 0.00000, -101.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1809.50818, -544.48621, 14.62305,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1831.61816, -544.48627, 14.66895,   0.00000, 0.00000, -70.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1828.10400, -628.93823, 15.81036,   0.00000, 0.00000, -80.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.99182, -607.13513, 15.43071,   0.00000, 0.00000, 100.04001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.99109, -617.81232, 15.49591,   0.00000, 0.00000, 100.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3512, -1806.99121, -628.93878, 15.87094,   -1.00000, -0.30000, 79.70000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(13640, -1751.60559, -705.45966, 26.23971,   -1.06000, -9.02998, -63.38986, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(13640, -1756.96765, -708.12244, 26.37599,   -1.50000, -8.73000, -64.80993, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1752.83569, -674.30389, 25.93010,   -3.60000, 0.00000, 4.10000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1769.77234, -675.06592, 26.07275,   3.00000, -0.20000, 183.49997, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1769.03577, -686.23962, 27.71890,   0.50002, 1.00000, -171.62012, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1752.29053, -683.76886, 27.31394,   0.00000, 0.00000, 9.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1750.54602, -692.53009, 28.92773,   -2.00000, -1.00000, 19.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1766.33289, -698.61810, 29.58667,   2.90000, 0.00000, 200.89999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1747.96790, -702.53748, 31.21056,   -4.00000, 0.00000, 26.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1762.45532, -709.41870, 31.46432,   4.50000, -0.30000, -153.09004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -1759.82239, -658.51697, 19.70070,   3.10000, 2.10000, -182.10001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -1761.51807, -658.62567, 19.53358,   -8.60000, 2.00000, -0.90000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -1759.56470, -658.34949, 20.46464,   -1.00000, 4.40000, 86.09998, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -1762.31348, -658.65198, 20.46246,   -2.10000, -7.40000, -97.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1278, -1761.16052, -661.16919, 10.15295,   -2.12000, 0.02000, -2.89002, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(689, -1782.07947, -668.09802, 22.25261,   4.80000, -2.00000, -189.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(683, -1787.41028, -648.30334, 19.92405,   0.51000, 1.60000, -435.80005, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1731.93738, -750.67255, 36.58495,   -0.60000, 0.60000, 4.10000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1761.27673, -709.35785, 29.06569,   174.89928, 893.90137, -286.69788, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(690, -1790.69336, -682.89929, 19.72446,   0.20000, 0.00000, 27.19995, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(9623, -1760.56677, -658.93140, 22.54554,   -7.27000, -0.32000, -361.54019, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(683, -1795.81921, -655.49084, 20.39215,   0.00000, 0.00000, 90.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(690, -1778.96423, -639.42059, 17.29495,   0.00000, 0.00000, 625.08014, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1747.40833, -703.27899, 28.93547,   -187.17000, -186.38000, -286.75012, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1751.46606, -689.69318, 26.33061,   -9.45599, 6.59599, 61.90012, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1765.75269, -696.39240, 26.96770,   6.60000, -6.50000, -114.29996, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1768.56433, -682.44482, 24.69252,   -7.79999, 4.90000, 58.39995, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(4100, -1752.64575, -676.15088, 23.87668,   -9.00000, 4.90000, -309.50003, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -1770.01428, -674.62555, 22.86488,   -7.90000, 4.10000, 3.61000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, -1769.98450, -672.34088, 22.54162,   3.58992, -8.59997, -145.70001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -1769.86536, -670.02307, 22.19852,   -7.50000, 4.00000, -362.79922, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(983, -1752.28271, -666.51794, 21.66621,   367.99960, 3.79944, 175.14929, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(983, -1769.71936, -665.44958, 21.59806,   -6.70000, -1.00000, -2.48990, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1755.42090, -605.39191, 19.38437,   0.00000, 0.00000, -361.39990, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1768.17200, -604.60590, 19.25299,   0.40000, -1.40001, -183.06990, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1754.19678, -618.60693, 20.02140,   -0.50000, 0.00000, -1.79987, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1768.31152, -618.62640, 19.85536,   0.22000, -1.30000, 180.40999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1767.96948, -630.60504, 20.96777,   179.11986, 178.99991, -0.09000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1753.81897, -630.64557, 20.83613,   0.00000, 0.00000, 1.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1753.86426, -645.16449, 22.18841,   0.00000, -1.00000, -2.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1226, -1767.69922, -643.65625, 22.06291,   0.00000, 0.00000, 175.10001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1425, -1760.71765, -648.31873, 18.79329,   1.50000, 0.10000, 178.59985, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1425, -1761.39783, -669.67828, 21.58807,   -6.85000, 0.40000, -2.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1278, -1761.16052, -661.16919, 10.15295,   -2.12000, 0.02000, -2.89002, -1, -1, -1, MAX_RADIO_STREAM);

	// OTROS PAISAJES LS - SF | by Un Player | 21 Objetos
	CreateDynamicObject(624, -157.10893200, -1416.48730500, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -160.80497700, -1393.60376000, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -162.71316500, -1370.66857900, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -161.72607400, -1346.89636200, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -160.08486900, -1323.20019500, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(624, -157.84442100, -1299.03161600, 1.40354700, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -126.32838400, -1222.41723600, 3.71471100, 0, 0, -14.76506508, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -137.60986300, -1415.79858400, 3.71471100, 0, 0, 15.54715248, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(7595, -114.72329700, -1463.70532200, 3.71471100, 0, 0, 36.32833170, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -120.85666700, -1502.96057100, 8.50689300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -106.24447600, -1345.55786100, 7.58680700, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -54.91997100, -1088.66503900, 10.02390700, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -146.34655800, -1139.85803200, 7.56457900, 0, 0, -101.25000758, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(16777, -312.20611600, -879.20336900, 46.19380600, 0, 0, -22.49999532, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -321.80581700, -879.71093800, 49.40503300, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -324.20513900, -878.81939700, 49.01303100, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -332.60559100, -875.14221200, 49.29985000, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(647, -335.84845000, -874.01001000, 49.39725500, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -318.56030300, -878.86377000, 47.40609000, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -337.35534700, -870.91387900, 47.22341900, 0, 0, 0, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(694, -131.24736000, -951.70269800, 27.37740700, 0, 0, -112.49997660, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE LS-LV / 24 objetos / EdinsonWalker
	CreateDynamicObjectEx(966, 1632.25537, 9.07947, 35.70000,   0.00000, 0.00000, 204.99939, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 1629.48706, -5.36000, 35.70000,   0.00000, 0.00000, 24.99939, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1616.91418, 35.96387, 36.00000,   0.00000, 0.00000, 22.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1649.62537, -41.13966, 35.73855,   0.00000, 0.00000, 21.99463, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1615.00000, 120.10000, 35.90000,   0.00000, 0.00000, 347.99463, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, 1634.90002, 205.60001, 30.70000,   0.00000, 0.00000, 347.99194, 1000.0, 1000.0);
	CreateDynamicObjectEx(7522, 1630.94373, 1.84988, 40.05271,   0.00000, 0.00000, 23.58000, 1000.0, 1000.0);
	CreateDynamicObject(1237, 1630.53210, 8.39224, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1631.51025, 8.83338, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1631.30273, -4.65554, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 1630.29163, -5.04152, 35.65030,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1629.38037, 5.47883, 36.37953,   0.00000, 0.00000, 113.28000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, 1632.56482, -1.80627, 36.37953,   0.00000, 0.00000, 113.28000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1631.61011, -3.67795, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1634.49597, -2.42500, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1627.35950, 6.11797, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, 1630.24707, 7.37902, 36.22434,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1626.00806, 90.51128, 37.11422,   0.00000, 0.00000, 92.46001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1625.35730, 99.89941, 36.98363,   0.00000, 0.00000, 95.99996, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1597.48157, 105.07399, 37.29366,   0.00000, 0.00000, -111.96004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 1593.60339, 96.42356, 37.48183,   0.00000, 0.00000, -117.83998, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1592.79626, 90.99478, 36.65805,   0.00000, 0.00000, 49.08000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1591.28894, 74.50330, 36.55390,   0.00000, 0.00000, 94.62000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3508, 1593.65381, 56.13440, 36.28920,   0.00000, 0.00000, 66.12000, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE SF-PUEBLOS / 18 objetos / EdinsonWalker
	CreateDynamicObjectEx(10829, -2681.59033, 1313.43054, 54.37108,   0.00000, 0.00000, 89.39999, 1000.0, 1000.0);
	CreateDynamicObject(1237, -2676.15796, 1317.10803, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2675.09619, 1317.10364, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2674.05444, 1317.05835, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -2673.10034, 1317.03174, 54.40920,   0.00000, 0.00000, 180.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2665.45996, 1317.03931, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(966, -2689.82397, 1312.35840, 54.40920,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2686.89819, 1312.23828, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2687.88818, 1312.28101, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2688.94165, 1312.32813, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -2697.65186, 1312.38110, 54.35750,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -2699.21216, 1312.80359, 55.71997,   0.00000, 0.00000, 141.18004, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -2663.65381, 1316.90405, 55.79161,   0.00000, 0.00000, 320.69995, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2686.25391, 1318.19739, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2676.91016, 1318.08789, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2676.96948, 1310.87915, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -2686.28906, 1310.99133, 54.94259,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(638, -2684.16406, 1310.87561, 54.93444,   0.00000, 0.00000, -90.90000, -1, -1, -1, MAX_RADIO_STREAM);

	//PEAJE FORT CARSON / 29 objetos / EdinsonWalker
	CreateDynamicObjectEx(10829, -494.15784, 590.95331, 15.83818,   0.00000, 0.00000, 70.49998, 1000.0, 1000.0);
	CreateDynamicObject(1360, -487.94073, 592.33453, 16.64247,   0.00000, 0.00000, -20.21999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1360, -499.21414, 592.72009, 16.76111,   0.00000, 0.00000, -20.21999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1361, -498.49997, 595.02454, 16.75411,   0.00000, 0.00000, -20.22000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(966, -496.17609, 597.59796, 15.69929,   0.00000, 0.00000, -107.51999, 1000.0, 1000.0);
	CreateDynamicObject(1237, -493.84543, 604.73712, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -493.51920, 605.58582, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -493.19504, 606.47931, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -495.58701, 597.08405, 16.71836,   0.00000, 0.00000, 133.56009, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(966, -491.96948, 586.18542, 15.69929,   0.00000, 0.00000, 68.82001, 1000.0, 1000.0);
	CreateDynamicObject(1237, -494.58945, 579.19574, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -495.23993, 577.57758, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, -494.95584, 578.38971, 15.65180,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1250, -492.26340, 586.89551, 16.71836,   0.00000, 0.00000, 286.14005, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(3512, -483.21484, 588.29370, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -476.90317, 585.86389, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObjectEx(3512, -471.05170, 583.48816, 15.67256,   0.00000, 0.00000, 0.00000, 1000.0, 1000.0);
	CreateDynamicObject(870, -476.87411, 585.90314, 16.26664,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(869, -470.94504, 583.86298, 16.50610,   0.00000, 0.00000, 83.03999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(869, -482.91220, 588.18213, 16.50610,   0.00000, 0.00000, 88.86000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(3521, -466.04016, 582.47876, 17.47508,   0.00000, 0.00000, 106.19999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -488.04901, 593.69055, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -497.18481, 596.95874, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -499.59946, 590.28625, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1215, -490.39825, 587.03046, 19.63258,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObjectEx(3463, -530.42249, 607.13184, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -582.35425, 631.43939, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -628.02094, 651.71002, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);
	CreateDynamicObjectEx(3463, -695.20715, 680.91571, 16.19658,   0.00000, 0.00000, 68.99999, 1000.0, 1000.0);

	//PEAJE LV-LS / 121 objetos
	CreateDynamicObjectEx(9623, 2895.10010, -685.29999, 12.60000,   0.00000, 0.00000, 359.49500, 1000.0, 1000.0);
	CreateDynamicObjectEx(9623, 2877.30005, -649.59998, 12.60000,   0.00000, 0.00000, 359.50000, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 2875.80005, -654.79999, 9.77710,   0.00000, 0.00000, 358.48401, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 2877.60010, -654.79999, 9.77709,   0.00000, 0.00000, 179.97800, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 2894.19995, -680.00000, 9.8299,   0.00000, 0.00000, 358.97800, 1000.0, 1000.0);
	CreateDynamicObjectEx(966, 2895.50000, -680.09998, 9.8299,   0.00000, 0.00000, 179.47800, 1000.0, 1000.0);
	CreateDynamicObject(973, 2909.39990, -800.29999, 10.70000,   0.00000, 0.00000, 179.74699, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2914.80005, -800.29999, 10.70000,   0.00000, 0.00000, 180.25000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.60010, -795.79999, 10.70000,   0.00000, 0.00000, 90.74200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.50000, -786.50000, 10.70000,   0.00000, 0.00000, 90.49200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.50000, -777.20001, 10.70000,   0.00000, 0.00000, 89.48900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.69995, -758.59998, 10.70000,   0.00000, 0.00000, 89.23400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.60010, -767.90002, 10.70000,   0.00000, 0.00000, 89.48400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.80005, -749.29999, 10.70000,   0.00000, 0.00000, 89.48100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2904.89990, -740.29999, 10.70000,   0.00000, 0.00000, 89.22800, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.10010, -731.29999, 10.70000,   0.00000, 0.00000, 88.16500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.39941, -722.00000, 10.70000,   0.00000, 0.00000, 88.21500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.60010, -712.70001, 10.70000,   0.00000, 0.00000, 89.22000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.69922, -703.39941, 10.70000,   0.00000, 0.00000, 89.46700, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2902.69995, -697.70001, 10.70000,   0.00000, 0.00000, 89.21400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2904.10010, -706.79999, 10.70000,   0.00000, 0.00000, 108.24900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.79980, -694.09961, 10.70000,   0.00000, 0.00000, 89.21400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.89990, -684.79999, 10.70000,   0.00000, 0.00000, 89.71400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2895.00000, -699.79999, 10.70000,   0.00000, 0.00000, 263.99100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2894.00000, -699.59998, 10.60000,   0.00000, 0.00000, 95.99900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2894.50000, -704.50000, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2885.19995, -706.09998, 10.60000,   0.00000, 0.00000, 97.24600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2886.39990, -706.20001, 10.60000,   0.00000, 0.00000, 263.23999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2885.80005, -711.00000, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.00000, -696.90002, 10.60000,   0.00000, 0.00000, 269.24200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2884.60010, -696.90002, 10.60000,   0.00000, 0.00000, 89.46700, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1352, 2903.00000, -675.40002, 9.90000,   0.00000, 0.00000, 343.98199, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2903.00000, -673.40002, 10.70000,   0.00000, 0.00000, 89.21400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.00000, -675.50000, 10.70000,   0.00000, 0.00000, 88.96200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2904.69995, -664.40002, 10.70000,   0.00000, 0.00000, 69.24900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.19922, -666.29980, 10.70000,   0.00000, 0.00000, 88.20900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.39990, -657.00000, 10.70000,   0.00000, 0.00000, 89.20900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.60010, -647.70001, 10.70000,   0.00000, 0.00000, 88.20900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.69995, -638.59998, 10.70000,   0.00000, 0.00000, 90.70400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.69995, -629.29999, 10.70000,   0.00000, 0.00000, 89.20300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.69995, -610.90002, 10.70000,   0.00000, 0.00000, 93.94500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.10010, -601.90002, 10.80000,   0.00000, 359.00000, 93.44400, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.60010, -592.59998, 11.00000,   0.00000, 358.74500, 93.43900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2906.89990, -620.00000, 10.70000,   0.00000, 0.00000, 88.44800, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2905.19995, -583.40002, 10.50000,   0.00000, 7.49200, 91.43900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2885.19995, -634.79999, 10.60000,   0.00000, 0.00000, 89.48900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.50000, -634.79999, 10.60000,   0.00000, 0.00000, 269.24200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2886.89990, -625.50000, 10.60000,   0.00000, 0.00000, 277.74500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2885.80005, -625.50000, 10.60000,   0.00000, 0.00000, 83.18100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2877.50000, -634.70001, 10.50000,   0.00000, 0.00000, 275.99399, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2876.39990, -634.70001, 10.60000,   0.00000, 0.00000, 82.49600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2877.00000, -629.79999, 9.80000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2886.39990, -620.70001, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2868.39990, -628.29999, 10.50000,   0.00000, 0.00000, 284.74799, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2867.10010, -627.00000, 10.50000,   357.48401, 359.97900, 267.95300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.89990, -636.09998, 10.50000,   357.47900, 359.97800, 269.45099, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2869.50000, -637.40002, 10.50000,   357.46799, 359.97299, 269.19299, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.80005, -645.40002, 10.60000,   357.47400, 358.72699, 269.39600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2867.19995, -617.70001, 10.60000,   357.48401, 1.23000, 271.26300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.80005, -608.50000, 10.80000,   357.48401, 1.23000, 273.76801, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.10010, -599.50000, 11.00000,   357.48401, 1.23000, 275.26999, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.00000, -590.29999, 11.20000,   357.48801, 1.23200, 278.52301, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2863.60010, -581.29999, 11.50000,   357.48999, 2.48600, 279.32901, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2825.50000, -498.10001, 17.40000,   0.00000, 4.24700, 303.99701, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2830.69995, -505.79999, 16.70000,   0.00000, 4.24600, 303.99200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2835.89990, -513.50000, 16.00000,   0.00000, 4.24600, 303.99200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2844.80005, -529.40002, 14.80000,   359.75101, 4.24100, 295.50900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2848.80005, -537.50000, 14.10000,   359.74701, 4.74100, 297.00699, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2852.60010, -545.90002, 13.50000,   359.74701, 2.74100, 291.74600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2859.00000, -563.29999, 12.40000,   357.49701, 3.98900, 289.39899, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2861.69995, -572.20001, 11.90000,   357.49100, 2.23600, 284.57001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2855.89990, -554.59998, 13.00000,   357.49600, 3.48900, 290.13199, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2840.69995, -521.40002, 15.40000,   0.00000, 3.24600, 298.74200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2884.80005, -667.50000, 10.60000,   0.00000, 0.00000, 89.23900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2884.80005, -676.79999, 10.60000,   0.00000, 0.00000, 90.73600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.30005, -667.50000, 10.60000,   0.00000, 0.00000, 269.24500, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.10010, -676.70001, 10.60000,   0.00000, 0.00000, 268.49200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1352, 2893.60010, -675.29999, 9.90000,   0.00000, 0.00000, 343.97601, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2894.00000, -670.70001, 10.60000,   0.00000, 0.00000, 83.25000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2895.30005, -670.70001, 10.60000,   0.00000, 0.00000, 277.74600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2894.60010, -666.09998, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2887.39990, -658.29999, 10.60000,   0.00000, 0.00000, 269.50000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2884.89990, -658.20001, 10.60000,   0.00000, 0.00000, 89.49200, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1352, 2877.69995, -659.00000, 9.90000,   0.00000, 0.00000, 161.97099, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(978, 2876.00000, -663.90002, 10.60000,   0.00000, 0.00000, 95.75000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2877.19995, -663.90002, 10.60000,   0.00000, 0.00000, 261.24899, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1237, 2876.39990, -668.70001, 9.90000,   0.00000, 0.00000, 0.00000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2869.19995, -661.59998, 10.70000,   357.46799, 359.97299, 269.69299, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(1352, 2869.19995, -659.09998, 9.90000,   0.00000, 0.00000, 161.97600, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.59961, -663.89941, 10.70000,   357.46799, 359.97299, 269.19299, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.69995, -654.59998, 10.70000,   357.47299, 359.97400, 269.44501, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.39941, -673.19922, 10.70000,   357.45700, 359.96201, 268.44000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(979, 2867.80005, -670.70001, 10.70000,   0.00000, 0.25000, 252.74699, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.19995, -682.50000, 10.70000,   357.46201, 359.96701, 269.19000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2866.00000, -691.79999, 10.70000,   357.46201, 359.96701, 268.43701, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.80005, -701.09998, 10.70000,   357.46201, 359.96701, 269.18399, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.60010, -710.40002, 10.70000,   357.46201, 359.96701, 268.43201, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.39990, -719.70001, 10.70000,   357.46201, 359.96701, 269.17899, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.30005, -728.90002, 10.70000,   357.46201, 359.96701, 269.67599, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2865.10010, -738.20001, 10.70000,   357.46201, 359.96701, 267.92599, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.80005, -747.50000, 10.70000,   357.46201, 359.96701, 268.42401, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.69995, -756.79999, 10.70000,   357.46201, 359.96701, 270.42401, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.69995, -766.00000, 10.70000,   357.46201, 359.96701, 269.67300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.69995, -775.29999, 10.70000,   357.46201, 359.96701, 270.42001, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.69995, -784.40002, 10.70000,   357.46201, 359.96701, 269.66699, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2861.69995, -922.90002, 14.00000,   357.46301, 353.70200, 266.84100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2861.39990, -932.20001, 15.00000,   357.45999, 354.20001, 268.61301, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2862.60010, -904.40002, 12.00000,   357.47299, 353.70599, 268.35199, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2862.19995, -913.70001, 13.00000,   357.46600, 353.95499, 266.35800, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2862.89990, -895.20001, 11.10000,   357.47198, 354.96201, 267.41101, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2863.69995, -877.29999, 10.70000,   357.46201, 359.96701, 267.13501, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2863.30005, -886.00000, 10.70000,   357.46201, 359.96701, 267.63300, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.39990, -858.70001, 10.70000,   357.46201, 359.96701, 268.39301, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.10010, -868.00000, 10.70000,   357.46201, 359.96701, 267.89099, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.60010, -849.40002, 10.70000,   357.46201, 359.96701, 269.14499, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.60010, -840.09998, 10.70000,   357.46201, 359.96701, 270.89499, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.50000, -830.79999, 10.70000,   357.46201, 359.96701, 270.40100, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.39990, -821.50000, 10.70000,   357.46201, 359.96701, 270.90399, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.39990, -812.20001, 10.70000,   357.46201, 359.96701, 269.15900, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.50000, -802.90002, 10.70000,   357.46201, 359.96701, 269.66000, -1, -1, -1, MAX_RADIO_STREAM);
	CreateDynamicObject(973, 2864.60010, -793.59998, 10.70000,   357.46201, 359.96701, 269.16501, -1, -1, -1, MAX_RADIO_STREAM);
	// Estación de trenes market 45 Objs
	CreateDynamicObject(970, 850.40, -1392.67, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 845.85, -1388.55, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 841.92, -1384.99, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 836.89, -1380.43, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 832.98, -1376.85, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 827.97, -1372.22, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 824.12, -1368.70, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 810.35, -1355.69, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 806.60, -1352.27, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 801.66, -1347.68, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 797.81, -1344.15, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 792.84, -1339.48, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 788.95, -1335.98, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 784.07, -1331.50, -0.98, 0.00, 0.00, -42.36);
	CreateDynamicObject(970, 825.40002, -1337.38000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 821.20001, -1337.38000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 809.59998, -1337.38000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 813.79999, -1337.38000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 807.47998, -1339.50000, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 807.47998, -1343.69995, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 807.47998, -1354.69995, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 807.47998, -1350.50000, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 809.54999, -1356.91003, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1256, 827.00000, -1346.59998, 13.20000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1256, 812.00000, -1356.50000, 13.20000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1256, 827.09998, -1351.80005, 13.20000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1256, 817.29999, -1356.50000, 13.15000,   0.00000, 0.00000, 269.99500);
	CreateDynamicObject(1257, 835.00000, -1334.00000, 13.75000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1209, 820.09998, -1356.59998, 12.50000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1776, 821.40002, -1356.69995, 13.60000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(1359, 814.59003, -1356.46997, 13.11000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1359, 827.00000, -1349.19995, 13.11000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(962, 841.20001, -1340.40002, 7.14000,   90.00000, 0.00000, 295.00000);
	CreateDynamicObject(962, 842.40002, -1343.00000, 7.14000,   90.00000, 0.00000, 294.99899);
	CreateDynamicObject(962, 827.50800, -1354.66602, 13.60000,   90.00000, 0.00000, 270.00000);
	CreateDynamicObject(962, 824.11902, -1356.88306, 13.60100,   90.00000, 0.00000, 180.00000);

	// Trabajo Granjero | Edinson Walker | 1 Objeto
	CreateDynamicObject(1522, -383.50250, -1438.09363, 25.28196, 0.00000, 0.00000, -89.88002);

	//Paso autopista | By Logan | 26 Objetos
	CreateDynamicObject(1698, 1052.56140137, -1844.63635254, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (1)
	CreateDynamicObject(1698, 1052.56054688, -1847.93579102, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (2)
	CreateDynamicObject(1698, 1052.56054688, -1851.23559570, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (3)
	CreateDynamicObject(1698, 1052.56054688, -1854.23535156, 12.48390198, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (4)
	CreateDynamicObject(1698, 1052.56054688, -1857.53540039, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (5)
	CreateDynamicObject(1698, 1053.90551758, -1844.63574219, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (6)
	CreateDynamicObject(1698, 1053.91052246, -1847.93554688, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (7)
	CreateDynamicObject(1698, 1053.90051270, -1851.23535156, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (8)
	CreateDynamicObject(1698, 1053.90051270, -1854.23535156, 12.48390198, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (9)
	CreateDynamicObject(1698, 1053.90051270, -1857.53515625, 12.48890209, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (10)
	CreateDynamicObject(1698, 1054.90527344, -1844.63574219, 12.48190212, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (11)
	CreateDynamicObject(1698, 1054.91015625, -1847.93554688, 12.48290253, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (12)
	CreateDynamicObject(1698, 1054.90039062, -1851.23535156, 12.48690224, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (13)
	CreateDynamicObject(1698, 1054.90039062, -1854.23535156, 12.48190212, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (14)
	CreateDynamicObject(1698, 1054.90039062, -1857.53515625, 12.48490238, 0.00000000, 0.00000000, 0.00000000); //object(esc_step8) (15)
	CreateDynamicObject(1283, 1055.66955566, -1854.27990723, 15.47527790, 0.00000000, 0.00000000, 270.00000000); //object(mtraffic1) (1)
	CreateDynamicObject(1215, 1052.10522461, -1859.23962402, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (1)
	CreateDynamicObject(1215, 1055.42968750, -1842.87402344, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (2)
	CreateDynamicObject(1215, 1051.96875000, -1842.81640625, 13.13820648, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (3)
	CreateDynamicObject(1215, 1055.33630371, -1859.27746582, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (4)
	CreateDynamicObject(1215, 1053.69738770, -1859.27380371, 13.13463593, 0.00000000, 0.00000000, 0.00000000); //object(bollardlight) (5)
	CreateDynamicObject(1233, 1052.94128418, -1859.45385742, 14.12999249, 0.00000000, 0.00000000, 180.00000000); //object(noparkingsign1) (1)
	CreateDynamicObject(1214, 1055.34387207, -1851.12438965, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (1)
	CreateDynamicObject(1214, 1054.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (2)
	CreateDynamicObject(1214, 1053.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (3)
	CreateDynamicObject(1214, 1052.34375000, -1851.12402344, 12.61253357, 0.00000000, 0.00000000, 0.00000000); //object(bollard) (4)

	//- Aero puerto | By Edinson Walker | x objetos
	CreateDynamicObject(10757, 1962.35999, -2181.00000, 31.80000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(10838, 1961.69995, -2179.39990, 28.40000,   0.00000, 0.00000, 90.00000);
	//- Trabajo Jardinero
	CreateDynamicObject(994,1930.06762695,-1195.10400391,19.03111267,0.00000000,0.00000000,54.00000000); //object(lhouse_barrier2) (1)
	CreateDynamicObject(994,1933.77380371,-1190.03076172,19.03111267,0.00000000,0.00000000,36.24780273); //object(lhouse_barrier2) (2)
	CreateDynamicObject(994,1938.80236816,-1186.33972168,19.03111267,0.00000000,0.00000000,26.99389648); //object(lhouse_barrier2) (3)
	CreateDynamicObject(994,1944.53820801,-1183.43493652,19.03111267,0.00000000,0.00000000,18.99340820); //object(lhouse_barrier2) (4)
	CreateDynamicObject(994,1950.47802734,-1181.38256836,19.03111267,0.00000000,0.00000000,5.73986816); //object(lhouse_barrier2) (5)
	CreateDynamicObject(994,1955.08984375,-1180.83020020,19.03111267,0.00000000,0.00000000,16.73498535); //object(lhouse_barrier2) (6)
	CreateDynamicObject(994,1961.09252930,-1179.05603027,19.03111267,0.00000000,0.00000000,2.73217773); //object(lhouse_barrier2) (7)
	CreateDynamicObject(994,1967.35742188,-1178.74487305,19.03111267,0.00000000,0.00000000,352.73010254); //object(lhouse_barrier2) (8)
	CreateDynamicObject(994,1971.26062012,-1179.23913574,19.03111267,0.00000000,0.00000000,0.72705078); //object(lhouse_barrier2) (9)
	CreateDynamicObject(994,1977.50341797,-1179.15734863,19.03111267,0.00000000,0.00000000,354.47509766); //object(lhouse_barrier2) (10)
	CreateDynamicObject(994,1983.75317383,-1179.76293945,19.03111267,0.00000000,0.00000000,346.97387695); //object(lhouse_barrier2) (11)
	CreateDynamicObject(994,1929.41613770,-1201.37170410,19.03111267,0.00000000,0.00000000,83.99780273); //object(lhouse_barrier2) (12)
	CreateDynamicObject(994,1931.97705078,-1207.10449219,19.03111267,0.00000000,0.00000000,113.99597168); //object(lhouse_barrier2) (13)
	CreateDynamicObject(994,1936.43469238,-1211.50549316,19.03111267,0.00000000,0.00000000,135.24414062); //object(lhouse_barrier2) (14)
	CreateDynamicObject(994,1941.81494141,-1214.75793457,19.03111267,0.00000000,0.00000000,148.99169922); //object(lhouse_barrier2) (15)
	CreateDynamicObject(994,1947.64465332,-1217.07971191,19.03111267,0.00000000,0.00000000,158.24108887); //object(lhouse_barrier2) (16)
	CreateDynamicObject(994,1953.66333008,-1219.03588867,19.03111267,0.00000000,0.00000000,162.23608398); //object(lhouse_barrier2) (17)
	CreateDynamicObject(994,1959.74768066,-1220.54516602,19.03111267,0.00000000,0.00000000,165.98510742); //object(lhouse_barrier2) (18)
	CreateDynamicObject(994,1965.99462891,-1221.04443359,19.03111267,0.00000000,0.00000000,175.48144531); //object(lhouse_barrier2) (19)
	CreateDynamicObject(994,1972.27966309,-1220.91674805,19.03111267,0.00000000,0.00000000,181.22912598); //object(lhouse_barrier2) (20)
	CreateDynamicObject(994,1978.55810547,-1220.51733398,19.03111267,0.00000000,0.00000000,183.72497559); //object(lhouse_barrier2) (21)
	CreateDynamicObject(994,1984.73999023,-1219.58398438,19.03111267,0.00000000,0.00000000,188.47436523); //object(lhouse_barrier2) (22)
	CreateDynamicObject(994,1989.90246582,-1181.15686035,19.03111267,0.00000000,0.00000000,342.72021484); //object(lhouse_barrier2) (23)
	CreateDynamicObject(994,1995.89355469,-1182.99206543,19.03111267,0.00000000,0.00000000,334.21850586); //object(lhouse_barrier2) (24)
	CreateDynamicObject(994,2001.55249023,-1185.71228027,19.03111267,0.00000000,0.00000000,324.71508789); //object(lhouse_barrier2) (25)
	CreateDynamicObject(994,2006.68322754,-1189.31005859,19.03111267,0.00000000,0.00000000,309.71191406); //object(lhouse_barrier2) (26)
	CreateDynamicObject(994,2010.72058105,-1194.13781738,19.03111267,0.00000000,0.00000000,283.71008301); //object(lhouse_barrier2) (27)
	CreateDynamicObject(994,2012.20556641,-1200.26452637,19.03111267,0.00000000,0.00000000,250.20544434); //object(lhouse_barrier2) (28)
	CreateDynamicObject(994,1990.81201172,-1218.02111816,19.03111267,0.00000000,0.00000000,194.47045898); //object(lhouse_barrier2) (29)
	CreateDynamicObject(994,1996.81604004,-1216.02038574,19.03111267,0.00000000,0.00000000,198.46899414); //object(lhouse_barrier2) (30)
	CreateDynamicObject(994,2010.11608887,-1206.13574219,19.03111267,0.00000000,0.00000000,227.45263672); //object(lhouse_barrier2) (31)
	CreateDynamicObject(994,2005.76611328,-1210.80932617,19.03111267,0.00000000,0.00000000,212.94995117); //object(lhouse_barrier2) (32)
	CreateDynamicObject(997,1997.25329590,-1215.84448242,19.02343750,0.00000000,0.00000000,26.25000000); //object(lhouse_barrier3) (2)
	//-- Barco
	CreateDynamicObjectEx(3069, 2810.70898, -2388.07202, 12.59900,   -22.00000, 0.00000, 270.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(3069, 2810.70898, -2438.07202, 12.59900,   -22.00000, 0.00000, 270.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2384.69897, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2391.50000, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2434.69897, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);
	CreateDynamicObjectEx(19123, 2810.50000, -2441.50000, 13.10000,   0.00000, 0.00000, 0.00000, 1000.000, 1000.000);

	//Decorado unity
	CreateDynamicObject(970, 1726.33997, -1870.09900, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1726.33997, -1866.01001, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1724.19995, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1720.09998, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1319, 1723.59998, -1862.80005, 12.88000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(1319, 1723.59998, -1861.18994, 12.88000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1718.19995, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1722.30005, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1714.09998, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1710.19995, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1699.59998, -1845.69995, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1699.63306, -1849.80005, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1710.00000, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1705.90002, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1701.80005, -1860.00000, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1699.69995, -1857.90002, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(970, 1706.00000, -1863.93994, 13.00000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(970, 1703.90002, -1866.00000, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1703.90002, -1870.09998, 13.00000,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(970, 1699.66882, -1853.90002, 13.00000,   0.00000, 0.00000, 90.50000);
	CreateDynamicObject(1319, 1704.30005, -1861.19995, 12.88000,   0.00000, 0.00000, 270.00000);
	CreateDynamicObject(1319, 1704.30005, -1862.80005, 12.88000,   0.00000, 0.00000, 270.00000);

	//- Casas
	CreateObject(14755, -79.76019, 1375.42126, 1079.20508,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, -80.68050, 1382.76636, 1077.94690,   0.00000, 0.00000, 0.00000);
	CreateObject(14756, -48.48457, 1458.49207, 1086.61377,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, -47.69450, 1457.73669, 1084.60840,   0.00000, 0.00000, 90.00000);
	CreateObject(14748, 41.38534, 1440.95935, 1083.41199,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 46.51220, 1438.62793, 1081.40894,   0.00000, 0.00000, 90.00000);
	CreateObject(14750, 11.03331, 1314.19482, 1088.33093,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 6.96000, 1304.85022, 1081.82263,   0.00000, 0.00000, 0.00000);
	CreateObject(14754, 85.66241, 1280.42249, 1082.82739,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 82.19940, 1271.31091, 1078.86523,   0.00000, 0.00000, 0.00000);
	CreateObject(14758, 155.35648, 1409.17212, 1087.30750,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 154.62061, 1409.09656, 1085.43335,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 156.12061, 1409.09656, 1085.43335,   0.00000, 0.00000, 0.00000);
	CreateObject(14714, 289.94763, 1509.23218, 1079.22510,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 289.17270, 1501.17688, 1077.42126,   0.00000, 0.00000, 0.00000);
	CreateObject(14700, 329.35416, 1516.43005, 1086.31531,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 328.56949, 1512.34375, 1084.81165,   0.00000, 0.00000, 0.00000);
	CreateObject(14711, 382.01254, 1498.42480, 1080.69409,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 391.08289, 1505.09924, 1079.09644,   0.00000, 0.00000, 90.00000);
	CreateObject(14710, 366.74869, 1381.78625, 1080.31787,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 376.35840, 1377.81616, 1078.80579,   0.00000, 0.00000, 90.00000);
	CreateObject(14701, 448.67178, 1363.61853, 1083.28748,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 447.54770, 1353.26965, 1081.21570,   0.00000, 0.00000, 0.00000);
	CreateObject(14703, 506.95187, 1366.91003, 1080.07947,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 508.85950, 1353.45654, 1075.78345,   0.00000, 0.00000, 0.00000);
	CreateObject(14722, 510.94690, 1363.57544, 1078.67737,   0.00000, 0.00000, 0.00000);
	CreateObject(14724, 510.99319, 1363.60266, 1078.67590,   0.00000, 0.00000, 0.00000);
	CreateObject(14715, 510.92340, 1363.51001, 1078.70215,   0.00000, 0.00000, 0.00000);
	CreateObject(14723, 510.91971, 1363.70605, 1078.84021,   0.00000, 0.00000, 0.00000);
	CreateObject(14736, 755.25836, 1419.45801, 1102.58032,   0.00000, 0.00000, 0.00000);
	CreateObject(14738, 753.20190, 1415.76831, 1104.04199,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 744.47321, 1411.75403, 1101.42236,   0.00000, 0.00000, 0.00000);
	CreateObject(14713, 289.97849, 1289.53406, 1079.25183,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 294.37189, 1284.51709, 1077.43616,   0.00000, 0.00000, 0.00000);
	CreateObject(14718, 188.29053, 1293.25732, 1081.13208,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 190.53439, 1288.35291, 1081.13416,   0.00000, 0.00000, 0.00000);
	CreateObject(14712, 287.90448, 1249.52588, 1083.25146,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 290.09601, 1241.95874, 1081.70117,   0.00000, 0.00000, 0.00000);
	CreateObject(14709, 245.01108, 1155.45520, 1081.63599,   0.00000, 0.00000, 0.00000);
	CreateObject(14735, 342.67169, 1081.66528, 1082.87891,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 325.45471, 1074.26355, 1081.25549,   0.00000, 0.00000, 0.00000);
	CreateObject(14708, 200.11450, 1119.56934, 1083.97693,   0.00000, 0.00000, 0.00000);
	CreateObject(14706, 277.86502, 1069.62952, 1085.65552,   0.00000, 0.00000, 0.00000);
	CreateObject(14707, 275.53461, 992.44232, 1087.27319,   0.00000, 0.00000, 0.00000);
	CreateObject(15029, 2265.87500, -1122.75220, 1049.62781,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2260.34570, -1121.88794, 1047.87683,   0.00000, 0.00000, 90.00000);
	CreateObject(15031, 2281.78003, -1121.99768, 1049.92285,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2284.04028, -1126.90771, 1049.91650,   0.00000, 0.00000, 0.00000);
	CreateObject(15055, 2374.03271, -1102.76465, 1049.87073,   0.00000, 0.00000, 0.00000);
	CreateObject(1504, 2369.77124, -1094.13245, 1048.61951,   0.00000, 0.00000, 0.00000);
	CreateObject(15042, 2318.45508, -1230.66187, 1048.40820,   0.00000, 0.00000, 0.00000);
	CreateObject(1501, 2312.65112, -1231.38013, 1046.40540,   0.00000, 0.00000, 0.00000);
	CreateObject(15053, 2243.98071, -1024.30042, 1048.01758,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2243.21191, -1027.78198, 1046.76501,   0.00000, 0.00000, 0.00000);
	CreateObject(15054, 2260.93286, -1251.45007, 1051.05786,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2273.48657, -1243.43054, 1047.59131,   0.00000, 0.00000, 90.00000);
	CreateObject(15041, 2158.54736, -1220.96997, 1050.11694,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2149.11328, -1216.07935, 1048.11365,   0.00000, 0.00000, 0.00000);
	CreateObject(15046, 2364.22144, -1082.74231, 1048.01733,   0.00000, 0.00000, 0.00000);
	CreateObject(1498, 2363.47827, -1075.46021, 1046.76379,   0.00000, 0.00000, 0.00000);
	CreateObject(15048, 2364.55444, -1179.42346, 1055.79187,   0.00000, 0.00000, 0.00000);
	CreateObject(15059, 2364.56909, -1179.41418, 1055.79187,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2372.00317, -1184.51221, 1052.20117,   0.00000, 0.00000, 0.00000);
	CreateObject(1506, 2373.50317, -1184.51221, 1052.20117,   0.00000, 0.00000, 0.00000);
	CreateObject(14859, 245.20708, 321.97745, 1000.59143,   0.00000, 0.00000, 0.00000);
	CreateObject(14865, 269.22012, 322.22049, 998.14349,   0.00000, 0.00000, 0.00000);
	CreateObject(14889, 363.51450, 304.98868, 998.14722,   0.00000, 0.00000, 0.00000);
	CreateObject(15033, 2177.35718, -1069.85181, 1049.47449,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2190.13110, -1074.29504, 1049.47742,   0.00000, 0.00000, 90.00000);
	CreateObject(15034, 2254.38940, -1108.71704, 1049.87268,   0.00000, 0.00000, 0.00000);
	CreateObject(1535, 2254.09644, -1113.33044, 1048.11633,   0.00000, 0.00000, 0.00000);
	CreateObject(15030, 2293.09204, -1092.09229, 1049.62341,   0.00000, 0.00000, 0.00000);
	CreateObject(2904, 2298.69800, -1093.70605, 1048.97290,   0.00000, 0.00000, 90.00000);
	CreateObject(1535, 2298.64600, -1094.47375, 1047.87195,   0.00000, 0.00000, 90.00000);
	CreateObject(14876, 304.82809, 328.74170, 1003.21881,   0.00000, 0.00000, 0.00000);
	CreateObject(14877, 306.45309, 334.84299, 1000.21881,   0.00000, 0.00000, 0.00000);

	//de gaaznose
	new da_Object[104];
	da_Object[0] = CreateDynamicObject(19370, -2115.1728, -204.7023, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[0], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[1] = CreateDynamicObject(19370, -2118.4255, -204.7023, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[1], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[2] = CreateDynamicObject(19370, -2118.4255, -207.8123, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[2], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[3] = CreateDynamicObject(19386, -2116.7998, -204.8940, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[3], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[4] = CreateDynamicObject(19370, -2115.1835, -207.8123, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[4], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[5] = CreateDynamicObject(19462, -2129.3139, -210.5481, 36.0157, 0.0000, 0.0000, -45.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[5], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[6] = CreateDynamicObject(19462, -2123.3005, -209.3461, 36.0157, 0.0000, 0.0000, 90.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[6], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[7] = CreateDynamicObject(19462, -2131.6347, -217.6180, 36.0157, 0.0000, 0.0000, 0.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[7], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[8] = CreateDynamicObject(19462, -2131.6347, -227.2180, 36.0157, 0.0000, 0.0000, 0.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[8], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[9] = CreateDynamicObject(19462, -2115.1640, -214.2082, 36.0157, 0.0000, 0.0000, 0.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[9], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[10] = CreateDynamicObject(19462, -2115.1640, -223.7883, 36.0157, 0.0000, 0.0000, 0.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[10], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[11] = CreateDynamicObject(19386, -2129.9443, -231.9540, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[11], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[12] = CreateDynamicObject(19462, -2123.9011, -231.9561, 36.0157, 0.0000, 0.0000, 90.0000, 0, 0); //wall102
	SetDynamicObjectMaterial(da_Object[12], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[13] = CreateDynamicObject(19370, -2118.3554, -231.9421, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[13], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[14] = CreateDynamicObject(19370, -2116.4836, -231.8823, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[14], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[15] = CreateDynamicObject(19386, -2116.7998, -209.3641, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[15], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[16] = CreateDynamicObject(5820, -2136.0971, -210.8551, 34.4229, 0.0000, 0.0000, -90.0000, 0, 0); //odrampbit02
	da_Object[17] = CreateDynamicObject(19370, -2116.8352, -212.1721, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[17], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[18] = CreateDynamicObject(19370, -2120.0468, -212.1721, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[18], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[19] = CreateDynamicObject(1585, -2123.5458, -210.8806, 34.9577, 0.0000, 0.0000, 90.0000, 0, 0); //tar_civ2
	da_Object[20] = CreateDynamicObject(19416, -2123.3544, -210.8717, 36.0087, 0.0000, 0.0000, 0.0000, 0, 0); //wall064
	SetDynamicObjectMaterial(da_Object[20], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[21] = CreateDynamicObject(19370, -2116.8352, -218.5322, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[21], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[22] = CreateDynamicObject(19370, -2120.0358, -218.5322, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[22], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[23] = CreateDynamicObject(19370, -2121.7753, -218.5322, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[23], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[24] = CreateDynamicObject(923, -2117.4548, -216.0918, 35.1688, 0.0000, 0.0000, 5.8000, 0, 0); //Packing_carates2
	da_Object[25] = CreateDynamicObject(1583, -2118.1103, -216.6385, 34.7628, 0.0000, 0.0000, 0.0000, 0, 0); //tar_gun2
	da_Object[26] = CreateDynamicObject(19370, -2115.1535, -230.2122, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[26], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[27] = CreateDynamicObject(3798, -2122.3208, -215.9199, 34.2984, 0.0000, 0.0000, 0.0000, 0, 0); //acbox3_SFS
	da_Object[28] = CreateDynamicObject(923, -2119.9738, -216.3474, 35.1688, 0.0000, 0.0000, -8.3999, 0, 0); //Packing_carates2
	da_Object[29] = CreateDynamicObject(1584, -2119.0722, -216.9190, 34.6774, 0.0000, 0.0000, 0.0000, 0, 0); //tar_gun1
	da_Object[30] = CreateDynamicObject(1585, -2122.8125, -217.4592, 34.2483, 0.0000, 0.0000, -92.5000, 0, 0); //tar_civ2
	da_Object[31] = CreateDynamicObject(19370, -2123.3469, -216.9721, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[31], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[32] = CreateDynamicObject(19370, -2124.9873, -215.3521, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[32], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[33] = CreateDynamicObject(19386, -2127.4333, -215.3442, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[33], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[34] = CreateDynamicObject(19386, -2130.1437, -215.3442, 36.0193, 0.0000, 0.0000, 90.0000, 0, 0); //wall034
	SetDynamicObjectMaterial(da_Object[34], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[35] = CreateDynamicObject(19370, -2124.8688, -212.4021, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[35], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[36] = CreateDynamicObject(19370, -2128.0908, -212.4021, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[36], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[37] = CreateDynamicObject(19370, -2125.5810, -211.9320, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[37], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[38] = CreateDynamicObject(1584, -2125.8347, -211.3790, 34.6774, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun1
	da_Object[39] = CreateDynamicObject(1585, -2127.6555, -212.2016, 34.3472, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[40] = CreateDynamicObject(19370, -2130.0610, -222.1521, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[40], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[41] = CreateDynamicObject(19370, -2126.8994, -222.1521, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[41], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[42] = CreateDynamicObject(19370, -2124.3527, -221.1620, 36.0156, 0.0000, 0.0000, -45.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[42], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[43] = CreateDynamicObject(19416, -2130.0458, -219.7017, 36.0087, 0.0000, 0.0000, 90.0000, 0, 0); //wall064
	SetDynamicObjectMaterial(da_Object[43], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[44] = CreateDynamicObject(1583, -2123.6474, -217.0284, 34.7745, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun2
	da_Object[45] = CreateDynamicObject(1583, -2124.8476, -221.1166, 34.5262, 0.0000, 0.0000, 48.6999, 0, 0); //tar_gun2
	da_Object[46] = CreateDynamicObject(1585, -2130.0605, -219.8156, 34.9361, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[47] = CreateDynamicObject(1584, -2131.4851, -220.9062, 34.6925, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun1
	da_Object[48] = CreateDynamicObject(19370, -2125.5971, -220.4001, 33.5056, 0.0000, 0.0000, -45.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[48], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[49] = CreateDynamicObject(922, -2125.6704, -217.5006, 35.0222, 0.0000, 0.0000, -118.1000, 0, 0); //Packing_carates1
	da_Object[50] = CreateDynamicObject(19370, -2123.2487, -221.6522, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[50], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[51] = CreateDynamicObject(19429, -2128.3835, -221.3679, 35.1027, 0.0000, 0.0000, 0.0000, 0, 0); //wall069
	SetDynamicObjectMaterial(da_Object[51], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[52] = CreateDynamicObject(19370, -2121.6772, -220.0622, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[52], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[53] = CreateDynamicObject(19370, -2118.4567, -220.0622, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[53], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[54] = CreateDynamicObject(19370, -2116.8652, -221.3621, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[54], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[55] = CreateDynamicObject(19370, -2120.1081, -221.3621, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[55], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[56] = CreateDynamicObject(1583, -2123.0029, -220.7171, 34.6581, 0.0000, 0.0000, -91.5000, 0, 0); //tar_gun2
	da_Object[57] = CreateDynamicObject(1585, -2117.8627, -221.2078, 34.5522, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[58] = CreateDynamicObject(944, -2117.5361, -224.5289, 34.9723, 0.0000, 0.0000, 78.6000, 0, 0); //Packing_carates04
	da_Object[59] = CreateDynamicObject(944, -2118.3212, -228.4303, 34.9723, 0.0000, 0.0000, 32.2000, 0, 0); //Packing_carates04
	da_Object[60] = CreateDynamicObject(1584, -2117.7502, -229.2832, 34.7134, 0.0000, 0.0000, 33.0000, 0, 0); //tar_gun1
	da_Object[61] = CreateDynamicObject(1583, -2116.5466, -224.7402, 34.8627, 0.0000, 0.0000, 73.5000, 0, 0); //tar_gun2
	da_Object[62] = CreateDynamicObject(1585, -2116.7758, -225.8699, 35.0334, 0.0000, 0.0000, 71.5000, 0, 0); //tar_civ2
	da_Object[63] = CreateDynamicObject(942, -2121.0646, -230.7192, 34.8896, 0.0000, 0.0000, 0.0000, 0, 0); //CJ_DF_UNIT_2
	da_Object[64] = CreateDynamicObject(19370, -2123.2487, -224.8522, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[64], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[65] = CreateDynamicObject(19370, -2123.5891, -230.4121, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[65], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[66] = CreateDynamicObject(19370, -2128.9636, -230.4121, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[66], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[67] = CreateDynamicObject(19370, -2128.9636, -227.3321, 36.0156, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[67], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[68] = CreateDynamicObject(19370, -2127.3735, -225.7922, 36.0156, 0.0000, 0.0000, 90.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[68], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[69] = CreateDynamicObject(1584, -2124.0319, -221.9297, 34.5355, 0.0000, 0.0000, 0.0000, 0, 0); //tar_gun1
	da_Object[70] = CreateDynamicObject(3577, -2126.4301, -228.3406, 35.0449, 0.0000, 0.0000, 0.0000, 0, 0); //DockCrates1_LA
	da_Object[71] = CreateDynamicObject(1583, -2128.0283, -227.5128, 35.0616, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun2
	da_Object[72] = CreateDynamicObject(1583, -2128.0283, -229.0227, 35.0616, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun2
	da_Object[73] = CreateDynamicObject(1585, -2126.9204, -230.2261, 35.0902, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[74] = CreateDynamicObject(19370, -2126.8994, -223.4021, 33.7356, 0.0000, 0.0000, 0.0000, 0, 0); //wall018
	SetDynamicObjectMaterial(da_Object[74], 0, 18065, "ab_sfammumain", "plywood_gym", 0xFFFFFFFF);
	da_Object[75] = CreateDynamicObject(1584, -2127.5942, -224.1490, 34.8274, 0.0000, 0.0000, 87.1000, 0, 0); //tar_gun1
	da_Object[76] = CreateDynamicObject(1585, -2127.3547, -222.8378, 34.6758, 0.0000, 0.0000, 90.0000, 0, 0); //tar_civ2
	da_Object[77] = CreateDynamicObject(1583, -2130.9843, -228.8504, 34.7601, 0.0000, 0.0000, 0.0000, 0, 0); //tar_gun2
	da_Object[78] = CreateDynamicObject(1585, -2129.7919, -227.2067, 34.6716, 0.0000, 0.0000, 0.0000, 0, 0); //tar_civ2
	da_Object[79] = CreateDynamicObject(1502, -2117.6086, -204.9110, 34.2349, 0.0000, 0.0000, 0.0000, 0, 0); //Gen_doorINT04
	da_Object[80] = CreateDynamicObject(1502, -2116.0417, -209.3421, 34.2349, 0.0000, 0.0000, 180.0000, 0, 0); //Gen_doorINT04
	da_Object[81] = CreateDynamicObject(1502, -2126.6767, -215.2795, 34.2796, 0.0000, 0.0000, 180.0000, 0, 0); //Gen_doorINT04
	da_Object[82] = CreateDynamicObject(1502, -2130.9291, -215.3479, 34.2329, 0.0000, 0.0000, 0.0000, 0, 0); //Gen_doorINT04
	da_Object[83] = CreateDynamicObject(1502, -2130.7241, -232.0088, 34.2671, 0.0000, 0.0000, 0.0000, 0, 0); //Gen_doorINT04
	da_Object[84] = CreateDynamicObject(1584, -2128.6416, -221.3427, 34.7933, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun1
	da_Object[85] = CreateDynamicObject(2921, -2118.4533, -205.2211, 37.0861, 0.0000, 0.0000, 154.3999, 0, 0); //kmb_cam
	da_Object[86] = CreateDynamicObject(2921, -2115.3107, -209.4820, 37.0294, 0.0000, 0.0000, 43.8000, 0, 0); //kmb_cam
	da_Object[87] = CreateDynamicObject(2921, -2115.3925, -212.2509, 36.8157, 0.0000, 0.0000, 65.2999, 0, 0); //kmb_cam
	da_Object[88] = CreateDynamicObject(2921, -2131.5449, -215.8555, 36.9204, 0.0000, 0.0000, 174.9999, 0, 0); //kmb_cam
	da_Object[89] = CreateDynamicObject(2921, -2115.2966, -231.3661, 37.0120, 0.0000, 0.0000, -20.3999, 0, 0); //kmb_cam
	da_Object[90] = CreateDynamicObject(2921, -2123.5258, -231.5849, 36.8529, 0.0000, 0.0000, -14.5000, 0, 0); //kmb_cam
	da_Object[91] = CreateDynamicObject(2921, -2131.5151, -222.8318, 36.9422, 0.0000, 0.0000, 134.2999, 0, 0); //kmb_cam
	da_Object[92] = CreateDynamicObject(3867, -2133.1394, -221.0091, 25.5373, 0.0000, 0.0000, 90.0000, 0, 0); //ws_scaffolding_SFX
	da_Object[93] = CreateDynamicObject(3867, -2113.6806, -213.8392, 25.5642, 0.0000, 0.0000, -90.0000, 0, 0); //ws_scaffolding_SFX
	da_Object[94] = CreateDynamicObject(3867, -2113.6806, -230.6991, 25.5642, 0.0000, 0.0000, -90.0000, 0, 0); //ws_scaffolding_SFX
	da_Object[95] = CreateDynamicObject(5820, -2110.9968, -203.5312, 34.2629, 0.0000, 0.0000, 180.0000, 0, 0); //odrampbit02
	da_Object[96] = CreateDynamicObject(1963, -2121.0026, -208.5693, 34.7189, 0.0000, 0.0000, 0.0000, 0, 0); //est_desk
	da_Object[97] = CreateDynamicObject(2606, -2120.9609, -208.3531, 35.3990, 0.0000, 0.0000, 180.0000, 0, 0); //CJ_POLICE_COUNTER2
	da_Object[98] = CreateDynamicObject(2606, -2120.9609, -208.3531, 35.8589, 0.0000, 0.0000, 180.0000, 0, 0); //CJ_POLICE_COUNTER2
	da_Object[99] = CreateDynamicObject(2612, -2123.6745, -209.1782, 36.2586, 0.0000, 0.0000, 180.0000, 0, 0); //POLICE_NB2
	da_Object[100] = CreateDynamicObject(2619, -2120.8557, -209.1930, 36.7216, 0.0000, 0.0000, -90.0000, 0, 0); //mp_ammoambient
	da_Object[101] = CreateDynamicObject(1585, -2118.6103, -204.6605, 34.6795, 0.0000, 0.0000, 90.0000, 0, 0); //tar_civ2
	da_Object[102] = CreateDynamicObject(1584, -2118.6369, -205.9726, 34.7028, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun1
	da_Object[103] = CreateDynamicObject(1583, -2118.5288, -207.6379, 34.7058, 0.0000, 0.0000, 90.0000, 0, 0); //tar_gun2
	
	//portones pay'n'spray y garajes bomba - 23objs
	CreateDynamicObject(3055, -2716.31543, 217.10870, 4.81060,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, -1936.04590, 238.76511, 35.29234,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1904.38037, 277.68741, 44.22923,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, 488.26205, -1735.09851, 12.26543,   0.00000, 0.00000, -8.82009);
	CreateDynamicObject(3037, 2071.53345, -1831.41931, 14.71101,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3037, 1024.65637, -1029.40503, 33.17221,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, 719.99597, -462.45871, 16.18870,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, 1968.35901, 2162.46069, 12.03571,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3037, 2386.58740, 1043.47095, 11.59417,   0.00000, 0.00000, -90.00000);
	CreateDynamicObject(3055, -99.86170, 1111.43054, 21.92550,   0.00000, 0.00000, 180.06000);
	CreateDynamicObject(3055, -2425.47705, 1028.07092, 54.36167,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3037, 2004.33838, 2317.83545, 10.89087,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, 2393.64673, 1483.40466, 13.03957,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1420.48181, 2591.06958, 58.05499,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3055, 2644.70435, -2039.17969, 13.13976,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, -1904.38037, 277.68741, 39.18500,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3037, 1043.12134, -1026.01782, 33.16642,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, -99.86170, 1111.43054, 16.88100,   0.00000, 0.00000, 180.06000);
	CreateDynamicObject(3055, -2425.47705, 1028.07092, 49.32000,   0.00000, 0.00000, 180.00000);
	CreateDynamicObject(3037, 2004.76624, 2303.63574, 10.89087,   0.00000, 0.00000, 88.97997);
	CreateDynamicObject(3055, 2393.64673, 1483.40466, 7.99493,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(3055, 1843.35730, -1855.73181, 13.08770,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(3055, -1420.48181, 2591.06958, 53.01722,   0.00000, 0.00000, 180.00000);

    //Gym LV
	CreateDynamicObject(1472,765.0999800,-71.5600000,1000.0780000,0.0000000,0.0000000,0.0000000);
	CreateDynamicObject(1472,768.2999900,-65.7300000,1000.0700100,0.0000000,0.0000000,180.0000000);

	//iglesia - 114 objs
	CreateObject(3976, 1970.65723, -341.23883, 1100.22949,   0.00000, 0.00000, 0.00000);
	CreateObject(3976, 1962.70117, -400.46680, 1109.52942,   0.00000, 0.00000, 90.00000);
	CreateDynamicObject(9931, 1947.54004, -368.51270, 1108.01086,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(9931, 1980.55762, -368.51563, 1108.01086,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(11472, 1964.78711, -372.02051, 1089.22351,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(11472, 1963.28967, -372.02139, 1089.22351,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(11472, 1964.04480, -372.98050, 1089.46387,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2896, 1959.29248, -370.91724, 1093.34314,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(11472, 1962.66919, -373.82990, 1087.66956,   90.00000, 180.00000, 270.00000, 32, 32);
	CreateDynamicObject(11472, 1965.41260, -373.81992, 1087.66992,   90.00000, 180.00000, 90.00000, 32, 32);
	CreateDynamicObject(970, 1970.61438, -368.20404, 1093.28040,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1968.51074, -368.20703, 1093.28040,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1957.52185, -368.25833, 1093.28040,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1959.61914, -368.25586, 1093.28040,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(6959, 1963.97839, -368.12149, 1072.75439,   90.00000, 0.00000, 0.25000, 32, 32);
	CreateDynamicObject(2960, 1964.05884, -348.98987, 1101.36646,   0.00000, 90.00000, 89.99451, 32, 32);
	CreateDynamicObject(2960, 1963.98291, -349.00000, 1101.70667,   90.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2960, 1964.05872, -348.99045, 1100.00586,   0.00000, 90.00000, 90.00000, 32, 32);
	CreateDynamicObject(3872, 1964.02686, -346.40851, 1102.33020,   0.00000, 155.25000, 90.27026, 32, 32);
	CreateDynamicObject(1667, 1962.98828, -370.41272, 1093.62292,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1664, 1962.83521, -370.42520, 1093.70105,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2868, 1965.95605, -370.30142, 1093.53430,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2869, 1964.02185, -373.78528, 1093.66992,   0.00000, 0.00000, 323.75000, 32, 32);
	CreateDynamicObject(2870, 1965.26270, -373.64063, 1093.66992,   0.00000, 0.00000, 350.03003, 32, 32);
	CreateDynamicObject(2270, 1965.47998, -352.47623, 1093.48364,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(2257, 1964.05615, -373.94995, 1095.86133,   0.00000, 0.00000, 180.00000, 32, 32);
	CreateDynamicObject(2271, 1962.60437, -352.58060, 1093.48804,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2357, 1964.05090, -370.68906, 1093.12402,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2808, 1957.51367, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1959.68164, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1970.61328, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1968.44238, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1961.85547, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1966.27246, -364.26172, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2868, 1962.14697, -370.30624, 1093.53430,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(948, 1966.09277, -374.17285, 1092.72888,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(948, 1961.96313, -374.22888, 1092.72888,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2894, 1963.95081, -370.94278, 1093.53430,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(3462, 1959.30408, -374.06839, 1094.24255,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(3462, 1968.78125, -374.06836, 1094.24255,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(949, 1956.02258, -353.46194, 1095.83191,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2946, 1965.59985, -349.21301, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2946, 1962.47034, -349.19955, 1091.94543,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(2808, 1970.60681, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1968.43054, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1966.25378, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1957.52234, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1959.69580, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1961.86865, -360.67249, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1957.51660, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1959.69250, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1961.86780, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1970.61279, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1968.43701, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(2808, 1966.26782, -357.18195, 1092.59192,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(14705, 1962.68140, -373.67499, 1093.91895,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(14410, 1968.61401, -349.16000, 1092.01758,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(11472, 1971.98047, -351.97092, 1092.19568,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(11472, 1971.98047, -353.19620, 1092.19067,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(14410, 1959.47412, -349.41287, 1092.01660,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(11472, 1956.10046, -351.96487, 1092.19568,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(11472, 1956.10046, -353.19620, 1092.19067,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(11472, 1965.10974, -347.94531, 1095.44092,   0.00000, 90.00000, 180.00000, 32, 32);
	CreateDynamicObject(11472, 1962.98315, -347.94104, 1095.44019,   0.00000, 270.00000, 179.99451, 32, 32);
	CreateDynamicObject(1698, 1962.46606, -352.53400, 1095.31421,   0.00000, 0.00000, 270.27026, 32, 32);
	CreateDynamicObject(1698, 1962.87317, -352.53400, 1095.53918,   0.00000, 0.00000, 270.26917, 32, 32);
	CreateDynamicObject(1698, 1963.24683, -352.53400, 1095.76416,   0.00000, 0.00000, 270.26917, 32, 32);
	CreateDynamicObject(1698, 1965.60022, -352.53400, 1095.31421,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(1698, 1965.20435, -352.53400, 1095.53918,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(1698, 1964.72375, -352.53400, 1095.76416,   0.00000, 0.00000, 270.26917, 32, 32);
	CreateDynamicObject(970, 1964.05688, -353.88498, 1096.74243,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1959.94470, -353.88498, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1955.77246, -353.88589, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1968.17297, -353.88498, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1972.25000, -353.88589, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1959.97607, -351.29065, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1968.10303, -351.29065, 1095.74719,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(970, 1965.96204, -349.21619, 1096.74170,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(970, 1962.13757, -349.21619, 1096.74243,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2887, 1964.04822, -349.34906, 1094.78955,   90.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(949, 1971.95068, -353.46039, 1095.83191,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(948, 1965.68555, -352.45767, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(948, 1962.38428, -352.45767, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1955.84399, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1957.28174, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1958.71167, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1960.15112, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1971.77673, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1970.34277, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1968.90930, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1742, 1967.47534, -353.83832, 1091.94543,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(949, 1961.60730, -354.34103, 1092.58167,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(949, 1966.46326, -354.34805, 1092.58167,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(1720, 1970.09338, -373.59497, 1092.72888,   0.00000, 0.00000, 180.00000, 32, 32);
	CreateDynamicObject(1720, 1970.91199, -373.58316, 1092.72888,   0.00000, 0.00000, 179.99451, 32, 32);
	CreateDynamicObject(741, 1969.29675, -369.22723, 1093.71252,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(3440, 1969.29126, -370.86264, 1091.08008,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(14455, 1955.32813, -348.54144, 1096.87585,   0.00000, 0.00000, 270.00000, 32, 32);
	CreateDynamicObject(14455, 1972.78357, -352.90488, 1096.86743,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.51917, -365.60892, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.51843, -363.77881, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.51868, -361.94879, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52173, -360.12714, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52637, -358.30560, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52600, -356.47940, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52344, -354.64612, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52136, -352.82816, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.51868, -350.99310, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2842, 1964.52026, -349.16046, 1091.94543,   0.00000, 0.00000, 90.00000, 32, 32);
	CreateDynamicObject(2833, 1963.55750, -369.65057, 1092.72888,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(2834, 1968.81580, -372.52481, 1092.72888,   0.00000, 0.00000, 0.00000, 32, 32);
	CreateDynamicObject(6959, 1951.26587, -360.22650, 1095.56030,   310.00000, 180.00000, 90.00000, 32, 32);
	CreateDynamicObject(6959, 1976.87695, -356.75421, 1095.51965,   310.00000, 180.00000, 270.00000, 32, 32);
	CreateDynamicObject(6959, 1958.95715, -378.23306, 1096.33813,   309.99573, 179.99451, 180.00000, 32, 32);
	// Mercado Negro Ext - Int | By Edinson Walker | 50 Objetos
	CreateDynamicObject(18981, 2113.49634, -1999.67468, -0.58289,   0.00000, 0.00000, -50.00000);
	CreateDynamicObject(3050, 2119.14551, -2012.48022, 9.15464,   0.00000, 0.00000, 17.34000);
	CreateDynamicObject(3050, 2127.13770, -2005.59766, 9.15464,   0.00000, 0.00000, 41.34000);
	CreateDynamicObject(3050, 2123.64917, -2008.59717, 9.15464,   0.00000, 0.00000, 75.30000);
	CreateDynamicObject(1271, 2120.17993, -2001.39001, 7.31000,   0.00000, 0.00000, 41.88000);
	CreateDynamicObject(1271, 2119.64990, -2000.79004, 7.31000,   0.00000, 0.00000, 41.88000);
	CreateDynamicObject(3014, 2118.83008, -2000.48999, 7.19000,   0.00000, 0.00000, 41.40000);
	CreateDynamicObject(2359, 2119.04004, -2000.43994, 7.92000,   0.00000, 0.00000, -37.50000);
	CreateDynamicObject(2040, 2118.84009, -2000.34998, 7.80000,   0.00000, 0.00000, 52.92000);
	CreateDynamicObject(2358, 2119.35010, -1999.95996, 7.83000,   0.00000, 0.00000, -26.64000);
	CreateDynamicObject(2041, 2119.76001, -2000.37000, 7.91000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2042, 2119.39990, -1999.94995, 8.03000,   0.00000, 0.00000, -29.94000);
	CreateDynamicObject(2037, 2119.76001, -2000.77002, 7.78000,   0.00000, 0.00000, -39.48000);
	CreateDynamicObject(2038, 2119.76001, -2000.60999, 7.80000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2037, 2119.56006, -2000.78003, 7.78000,   0.00000, 0.00000, 13.50000);
	CreateDynamicObject(1650, 2120.70996, -2002.05005, 8.02000,   0.00000, 0.00000, -115.02000);
	CreateDynamicObject(3016, 2120.82007, -2001.65002, 7.86000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1650, 2120.40991, -2001.96997, 8.02000,   0.00000, 0.00000, -153.66000);
	CreateDynamicObject(3028, 2119.92993, -2001.91003, 7.72000,   98.16000, 46.74000, 0.00000);
	CreateDynamicObject(2358, 2121.06006, -2001.45996, 7.10000,   0.00000, 0.00000, 78.36000);
	CreateDynamicObject(2358, 2120.54004, -2002.04004, 7.08000,   0.00000, 0.00000, 45.30000);
	CreateDynamicObject(2358, 2121.81006, -2001.07996, 7.10000,   0.00000, 0.00000, 219.42000);
	CreateDynamicObject(335, 2120.51001, -2001.70996, 7.70000,   90.78000, 26.40000, 110.52000);
	CreateDynamicObject(3862, 2120.33008, -2000.53003, 8.09000,   0.00000, 0.00000, -45.60000);
	CreateDynamicObject(335, 2120.38989, -2001.40002, 7.70000,   90.78000, 26.40000, 238.74001);
	CreateDynamicObject(335, 2120.35010, -2001.87000, 7.70000,   90.78000, 26.40000, 70.44000);
	CreateDynamicObject(2359, 2121.39990, -2000.66003, 7.19000,   0.00000, 0.00000, -147.48000);
	CreateDynamicObject(2619, 2121.61011, -2000.05005, 8.35000,   2.16000, 1.02000, 44.28000);
	CreateDynamicObject(2619, 2120.65991, -1999.09998, 8.35000,   -18.96000, -0.06000, 44.28000);
	CreateDynamicObject(337, 2111.14990, -2005.28003, 7.33000,   -1.02000, -6.78000, 28.50000);
	CreateDynamicObject(337, 2111.02002, -2004.97998, 7.33000,   -1.02000, -6.78000, 28.50000);
	CreateDynamicObject(18633, 2110.98999, -2005.38000, 7.77000,   -1.20000, 95.64000, 26.94000);
	CreateDynamicObject(18634, 2110.43994, -2005.78003, 7.77000,   -0.30000, -96.12000, -132.42000);
	CreateDynamicObject(3863, 2110.31006, -2006.71997, 8.12000,   0.00000, 0.00000, 114.06000);
	CreateDynamicObject(18635, 2110.82007, -2006.59998, 7.81000,   -88.80000, -76.86000, 0.00000);
	CreateDynamicObject(18635, 2110.88989, -2006.72998, 7.81000,   -88.80000, -76.86000, 66.84000);
	CreateDynamicObject(18633, 2111.56006, -2007.35999, 7.77000,   0.00000, 0.00000, -31.32000);
	CreateDynamicObject(18633, 2111.48999, -2007.37000, 7.77000,   0.00000, 0.00000, -32.82000);
	CreateDynamicObject(1575, 2114.52002, -2010.56006, 7.69000,   -0.30000, 15.72000, 21.78000);
	CreateDynamicObject(3861, 2114.65991, -2011.63000, 8.05000,   0.00000, 0.00000, 136.80000);
	CreateDynamicObject(1575, 2114.17993, -2010.60999, 7.65000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(1577, 2115.63086, -2011.59753, 7.65000,   0.00000, 0.00000, -86.04000);
	CreateDynamicObject(18451, 2126.25684, -2010.36853, 7.51649,   0.00000, 0.00000, 70.56002);
	CreateDynamicObject(4227, 2116.98584, -1997.30798, 9.49283,   0.00000, 0.00000, 39.91999);
	CreateDynamicObject(1458, 2123.44482, -2005.02600, 7.20789,   0.00000, 0.00000, -196.80000);
	CreateDynamicObject(2969, 2123.73999, -2002.88000, 7.31000,   0.00000, 0.00000, 46.56000);
	CreateDynamicObject(2969, 2124.12988, -2003.46997, 7.09000,   0.00000, 0.00000, 0.00000);
	CreateDynamicObject(2969, 2123.73999, -2002.88000, 7.10000,   0.00000, 0.00000, 46.56000);
	CreateDynamicObject(2969, 2124.68994, -2003.84998, 7.07000,   0.00000, 0.00000, 63.36000);
	CreateDynamicObject(1438, 2117.82373, -2014.41174, 6.96544,   0.00000, 0.00000, 17.64000);

	//almacenes x gaaz y edinsonwalker
	CreateDynamicObject(8419, 2805.68945, 2616.73096, -1.89150,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(8419, 2805.68945, 2615.64087, 25.00840,   0.00000, -180.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2797.75488, 2591.22192, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2793.13647, 2593.83911, 11.57190,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(19447, 2801.53906, 2594.06812, 11.57190,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(19447, 2798.02173, 2597.67920, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(1497, 2793.19092, 2595.22559, 9.78470,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(3062, 2793.46606, 2591.74878, 11.13300,   17.69990, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(942, 2798.27515, 2592.59424, 12.04140,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(2912, 2800.88403, 2596.77954, 9.85020,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(2912, 2800.88525, 2596.01025, 9.85020,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2798.04712, 2628.76074, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2787.25830, 2633.66357, 11.57190,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(19447, 2800.16016, 2633.47485, 11.57190,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(19447, 2798.04712, 2638.33472, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(1497, 2800.10156, 2635.95508, 9.78470,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(2970, 2789.10156, 2629.13672, 9.85930,   -78.20000, 90.00000, 0.00000, -1, 73);
	CreateDynamicObject(2567, 2793.06909, 2637.15283, 11.55130,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(3005, 2800.05151, 2637.58960, 9.83540,   0.00000, 0.00000, -80.49990, -1, 73);
	CreateDynamicObject(5856, 2800.12134, 2631.51782, 11.83400,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(3015, 2788.14526, 2629.18677, 9.97180,   0.00000, 0.00000, -13.50000, -1, 73);
	CreateDynamicObject(1271, 2800.30444, 2594.65063, 10.16970,   0.00000, 0.00000, 14.20000, -1, 73);
	CreateDynamicObject(19447, 2849.43970, 2633.45435, 11.57190,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2849.43970, 2623.84302, 11.57190,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2844.60962, 2625.52271, 11.57190,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(19447, 2844.62036, 2638.33472, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(1497, 2844.71362, 2638.27661, 9.78470,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2833.01953, 2633.45435, 11.57190,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(19447, 2833.01636, 2623.84302, 11.57190,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(2957, 2849.40625, 2635.01123, 11.42830,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(2957, 2849.40625, 2630.14160, 11.42830,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(1792, 2833.15479, 2627.12671, 10.20130,   -17.80000, -90.00000, 90.00000, -1, 73);
	CreateDynamicObject(1271, 2795.07422, 2593.00732, 10.16970,   0.00000, 0.00000, 14.20000, -1, 73);
	CreateDynamicObject(935, 2848.91602, 2626.02783, 10.38290,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(1685, 2839.29395, 2637.25806, 10.33140,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(2567, 2834.35522, 2634.08130, 11.55740,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(1431, 2842.61011, 2637.75513, 10.38120,   0.00000, 0.00000, 0.00000, -1, 73);
	CreateDynamicObject(1441, 2845.96729, 2626.00952, 10.45300,   0.00000, 0.00000, 180.00000, -1, 73);
	CreateDynamicObject(931, 2834.03687, 2629.41675, 10.85860,   0.00000, 0.00000, 90.00000, -1, 73);
	CreateDynamicObject(2679, 2837.37695, 2625.96753, 10.85590,   -12.90000, 0.00000, -180.00000, -1, 73);
	CreateDynamicObject(19447, 2788.41479, 2628.75781, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2788.41479, 2638.33472, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2834.99731, 2638.33472, 11.57190,   0.00000, 0.00000, -90.00000, -1, 73);
	CreateDynamicObject(19447, 2834.99731, 2625.52271, 11.57190,   0.00000, 0.00000, 90.00000, -1, 73);
	return 1;
}

forward create_object_ext(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ);
public create_object_ext(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ)
{
	return CreateDynamicObject(modelid, X, Y, Z, rX, rY, rZ, 0, 0, -1, 1000.0, 500.0);
}

forward CreateObjectEx(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ, Float: DrawDistance);
public CreateObjectEx(modelid, Float: X, Float: Y, Float: Z, Float: rX, Float: rY, Float: rZ, Float: DrawDistance)
{
	MAX_OBJECT_FIJOS++;
	return CreateObject(modelid, X, Y, Z, rX, rY, rZ, DrawDistance);
}
