#include "tSala.h"
#include <iostream>
#include <cstdlib>
#include <ctime>


tSala::tSala(int _norte, int _oeste, int _sur, int _este) :norte(_norte), oeste(_oeste), sur(_sur), este(_este)
{
	srand(unsigned(time(NULL)));
	id = rand() % 50 + 1;
	generateTileSet();

}

tSala::tSala(int puertaEntrada /*0 -> norte, 1 - > oeste,2->sur, 3->este */) {
	norte = 0;
	sur = 0;
	este = 0;
	oeste = 0;
	srand((unsigned)time(0));
	switch (puertaEntrada) {
		case 0:
				while(oeste + sur + este == 0) {
					if ((oeste = rand() % 2) == 2) oeste = oeste / 2;
					if ((sur = rand() % 2) == 2) sur = sur / 2;
					if ((este = rand() % 2) == 2) este = este / 2;
				}
				norte = 2;
			break;
		case 1:
			while (norte + sur + este == 0) {
				if ((norte = rand() % 2)==2) norte=norte/2;
				if ((sur = rand() % 2)==2) sur = sur /2;
				if ((este = rand() % 2)==2) este = este /2;
			}
			oeste = 2;
			break;
		case 2:
			while (norte + oeste + este == 0) {
				if ((norte = rand() % 2) == 2) norte = norte / 2;
				if ((oeste = rand() % 2) == 2) oeste = oeste / 2;	
				if ((este = rand() % 2) == 2) este = este / 2;
			}
			sur = 2;
			break;
		case 3:
			while (norte + oeste + sur == 0) {
				if ((norte = rand() % 2) == 2) norte = norte / 2;
				if ((sur = rand() % 2) == 2) sur = sur / 2;
				if ((oeste = rand() % 2) == 2) oeste = oeste / 2;
			}
			este = 2;
			break;
	}
		generateTileSet();


}
    void tSala::generateRow(){
        srand(unsigned(time(NULL)));
        for(int i =0; i < 9; i ++)
            tileRow[i]=rand() % 4;
    }
tSala::tSala() 
{
	srand(unsigned(time(NULL)));
	id = rand() % 50 + 1;
	norte = rand() % 2;
	oeste = rand() % 2;
	sur = rand() % 2;
	este = rand() % 2;
	generateTileSet();


}
void tSala::generateTileSet(){
    for(int x = 1 ; x < 21 ; x++ ){
        if(x == 10){
            for (int y = 0;y < 21; y++)
                tileMap[y][x] = 1;
        }else{
        generateRow();
        for (int y = 1;y < 10; y++)
            tileMap[y][x] = tileRow[y];
        tilemap[10][x] = 1; //Valor del suelo para la zona de las puertas.
        for (int y = 10;y>1;y--)
            tileMap[11+(10-y)][x] = tileRow[y]
        }
       
    }
    if(norte == 1)
        tileMap[0][10] == 500;
    if(sur == 1)
        tileMap[21][10] == 499;
    if(este == 1)
        tileMap[10][10] == 498;
    if(oeste == 1)
        tileMap[0][10] == 497;

    
}

void tSala::printTileSet(){
        for(int x = 0 ; x < 21 ; x++ ){
            for (int y = 0;y < 21; y++)
                cout <<" "<<tileMap[y][x]<<" ";
        cout << "\n";
    }
}



	
