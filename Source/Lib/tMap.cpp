#include "tMap.h"
#include "tSala.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
tMap::tMap()
{
	pLocation =   tSala();
	pLocation.generateTileSet();
	srand((unsigned)time(0));
		if(pLocation .este == false)
			este =   tSala();
		else
			este =   tSala(-1);
		if(pLocation .oeste == false)
			oeste =   tSala();
		else
			oeste =  tSala(-1);
		if(pLocation .norte == false)
			norte =   tSala();
		else
			norte =  tSala(-1);
		if(pLocation .sur == false)
			sur =   tSala();
		else
			sur =  tSala(-1);
		
}
void tMap::irNorte()
{
	srand((unsigned)time(0));

	if ((norte.id != -1)&&(pLocation.norte==false)){
		pLocation = norte;
		if(pLocation .este == false)
			este =   tSala();
		if(pLocation .oeste == false)
			oeste =   tSala();
		if(pLocation .norte == false)
			norte =   tSala();
		oeste=tSala(-1);
		pLocation . sur = true;
		pLocation.generateTileSet();

	}
}
void tMap::irSur()
{
	srand((unsigned)time(0));

	if ((sur.id != -1)&&(pLocation.sur==false)) {
		pLocation = sur;
		if(pLocation .este == false)
			este =   tSala();
		if(pLocation .oeste == false)
			oeste =   tSala();
		if(pLocation .sur == false)
			sur =   tSala();
		oeste=tSala(-1);
		pLocation . norte = true;
		pLocation.generateTileSet();

	}
}
void tMap::irEste()
{
	srand((unsigned)time(0));
	if ((este.id != -1)&&(pLocation.este==false)) {
		pLocation = este;
		if(pLocation .este == false)
			este =   tSala();
		if(pLocation .sur == false)
			sur =   tSala();
		if(pLocation .norte == false)
			norte =   tSala();
		oeste=tSala(-1);
		pLocation . oeste = true;
		pLocation.generateTileSet();

	}
}

void tMap::irOeste()
{
	srand((unsigned)time(0));
	if ((oeste.id != -1) &&(pLocation.oeste==1)){
		pLocation = oeste;
		pLocation =tSala();
		if(pLocation .sur == false)
			sur =   tSala();
		else
			sur =   tSala(-1);
		if(pLocation .oeste == false)
			oeste =   tSala();
		else
			oeste =   tSala(-1);
		if(pLocation .norte == false)
			norte =   tSala();
		else
			norte =   tSala(-1);
		pLocation . este = true;
		este=tSala(-1);
		pLocation.generateTileSet();

	}
}
