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
		if(pLocation ->este == 1)
			este = new tSala();
		else
			este = new tSala(-1);
		if(pLocation ->oeste == 1)
			oeste = new tSala();
		else
			oeste =new tSala(-1);
		if(pLocation ->norte == 1)
			norte = new tSala();
		else
			norte =new tSala(-1);
		if(pLocation ->sur == 1)
			sur = new tSala();
		else
			sur =new tSala(-1);
		
}
void tMap::irNorte()
{
	srand((unsigned)time(0));

	if (norte->id != -1){
		tSala *aux;
		aux = pLocation;
		pLocation = NULL;
		//~ if(aux != NULL)
			//~ delete(aux);
		//~ pLocation = norte;
		//~ if(este != NULL)
			//~ delete(este);
		//~ if(oeste != NULL)
			//~ delete(oeste);
		//~ if(sur != NULL)
			delete(sur);
		if(pLocation ->este == 1)
			este = new tSala();
		if(pLocation ->oeste == 1)
			oeste = new tSala();
		if(pLocation ->norte == 1)
			norte = new tSala();
		pLocation -> sur = 2;
	}
}
void tMap::irSur()
{
	srand((unsigned)time(0));

	if (sur->id != -1) {
		tSala *aux;
		aux = pLocation;
		pLocation = NULL;
		//~ if(aux != NULL)
			//~ delete(aux);
		//~ pLocation = sur;
		//~ if(este != NULL)
			//~ delete(este);
		//~ if(oeste != NULL)
			//~ delete(oeste);
		//~ if(norte != NULL)
			//~ delete(norte);
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

	if (este->id != -1) {
		tSala *aux; 
		aux = pLocation;
		pLocation = NULL;
		//~ if(aux != NULL)
			//~ delete(aux);
		//~ pLocation = este;
		//~ if(norte != NULL)
			//~ delete(norte);
		//~ if(oeste != NULL)
			//~ delete(oeste);
		//~ if(sur != NULL)
			//~ delete(sur);
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

	if (oeste->id != -1) {
		tSala *aux;
		aux = pLocation;
		pLocation =NULL;
		//if(aux != NULL)
			//delete(aux);
		//pLocation = oeste;
		//if(norte != NULL)
			//delete(norte);
		//if(este != NULL)
			//delete(este);
		//if(sur != NULL)
			//delete(sur);
		if(pLocation ->sur == 1)
			sur = new tSala();
		else
			sur = new tSala(-1);
		if(pLocation ->oeste == 1)
			oeste = new tSala();
		else
			oeste = new tSala(-1);
		if(pLocation ->norte == 1)
			norte = new tSala();
		else
			norte = new tSala(-1);
		pLocation -> este = 2;
	}
}
