#include "tSala.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
tSala::tSala(int id){
	id = id;
}

tSala::tSala() 
{
	norte = true;
	sur = true;
	este = true;
	oeste = true;
	id = rand() % 50 + 1;
		while ((norte && oeste) || (sur && este)) {
			norte = (rand() % 3 == 1);
			oeste = (rand() % 3 == 1);
			sur = (rand() % 3 == 1);
			este = (rand() % 3 == 1);

		}


}
void tSala::generateTileSet(){
    srand(unsigned(time(0)));
    for (int i = 0; i< 22; i++)
		for(int j = 0; j<22; j++)
			tileMap[i][j] = 0;
    for(int y = 1 ; y < 20 ; y++ ){
        if(y == 10){
            for (int x = 1;x < 20; x++)
                tileMap[x][y] = 1;
        }else{
			tileMap[10][y] = 1;
        for (int x = 1,generatedNumber = 0;x < 10; x++){
			generatedNumber=((rand() % 3)+1);
			if(generatedNumber > 1)
				if(rand() % 2 == 1)
					generatedNumber = 1;
			tileMap[10-x][y] = generatedNumber;
			tileMap[10+x][y] = generatedNumber;
       }
   }
    }
    if(norte == false){
        tileMap[10][0] = 4;
        } //ID correcto 500
    if(sur == false){
        tileMap[10][20] = 4; //Id correcto 499
    }
    if(este == false){
        tileMap[0][10] = 4; //ID correcto 498
    }
    if(oeste == false){
        tileMap[20][10] = 4; //ID correcto 497
	}
    
}

void tSala::printTileSet(){
        for(int x = 0 ; x < 21 ; x++ ){
            for (int y = 0;y < 21; y++)
                cout <<" "<<tileMap[y][x]<<" ";
        cout << "\n";
    }
}



	
