#include "tMap.h"
#include "tSala.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
/*0 -> norte, 1 - > oeste,2->sur, 3->este */
tMap::tMap()
{
	pLocation = new tSala();
	srand((unsigned)time(0));
	norte = rand() % 3 == 1 ? new tSala() : NULL;
	sur = rand() % 3 == 1 ? new tSala() : NULL;
	este = rand() % 3 == 1 ? new tSala() : NULL;
	oeste = rand() % 3 == 1 ? new tSala() : NULL;
}
void tMap::irNorte()
{
	srand((unsigned)time(0));

	if (norte != NULL) {
		tSala *aux;
		aux = pLocation;
		free(aux);
		pLocation = norte;
		free(este);
		free(oeste);
		free(sur);
		if(pLocation ->este == 1)
			este = new tSala();
		if(pLocation ->este == 1)
			oeste = new tSala();
		if(pLocation ->este == 1)
			norte = new tSala();
		pLocation -> sur = 2;
	}
}
void tMap::irSur()
{
	srand((unsigned)time(0));

	if (sur != NULL) {
		tSala *aux;
		aux = pLocation;
		free(aux);
		pLocation = sur;
		free(este);
		free(oeste);
		free(norte);
		if(pLocation ->este == 1)
			este = new tSala();
		if(pLocation ->oeste == 1)
			oeste = new tSala();
		if(pLocation ->sur == 1)
			sur = new tSala();
		pLocation -> norte = 2;
	}
}
void tMap::irEste()
{
	srand((unsigned)time(0));

	if (este != NULL) {
		tSala *aux; 
		aux = pLocation;
		free(aux);
		pLocation = este;
		free(norte);
		free(oeste);
		free(sur);
		if(pLocation ->este == 1)
			este = new tSala();
		if(pLocation ->sur == 1)
			sur = new tSala();
		if(pLocation ->norte == 1)
			norte = new tSala();
		pLocation -> oeste = 2;
	}
}

void tMap::irOeste()
{
	srand((unsigned)time(0));

	if (oeste != NULL) {
		tSala *aux;
		aux = pLocation;
		free(aux);
		pLocation = oeste;
		free(este);
		free(norte);
		free(sur);
		if(pLocation ->sur == 1)
			sur = new tSala();
		if(pLocation ->oeste == 1)
			oeste = new tSala();
		if(pLocation ->norte == 1)
			norte = new tSala();
		pLocation -> este = 2;
	}
}
