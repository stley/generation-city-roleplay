

/* sistema de anuncios */
new
	id_ultimo
;
#define MAX_ANUNCIOS (10)

enum ad_left
{
	num_ad,
	tiempo_ad,
	por_ad[32],
	texto_ad[256],
};
new ad_info[MAX_ANUNCIOS][ad_left];