#include "BS.h"
#include <iostream>
#include <cstdlib>
#include <windows.h>

using namespace std;

BATALLA_NAVAL_1D::BATALLA_NAVAL_1D(int n){

    if (n<=0 || n>19){
        cout<< "Numero de objetivos no permitido"<<endl;
        exit(1);
    }else{
      int aux;
      BATALLA_NAVAL_1D::fin=0;
      BATALLA_NAVAL_1D::objetivosactuales=n;
      for(int i=0; i<20; i++){
        BATALLA_NAVAL_1D::tablero[i]=0;
      }
      for(int j=0; j<n; j++){
        aux=rand()%20;
        if(BATALLA_NAVAL_1D::tablero[aux]==1){
           j--;
        }else{
          BATALLA_NAVAL_1D::tablero[aux]=1;
        }
      }
    }
}

int BATALLA_NAVAL_1D::objetivosrestantes(){
    return BATALLA_NAVAL_1D::objetivosactuales;
}

void BATALLA_NAVAL_1D::imprimetablero(){
   for(int i=0; i<20; i++){
        if(BATALLA_NAVAL_1D::tablero[i]==2){
            cout<<"X";
        }else if(BATALLA_NAVAL_1D::tablero[i]==3){
            cout<<"Y";
        }else{cout<<"-"; }
   }
}

void BATALLA_NAVAL_1D::atacacasilla(int m){
    if(BATALLA_NAVAL_1D::tablero[m]==1){
        BATALLA_NAVAL_1D::objetivosactuales--;
        BATALLA_NAVAL_1D::tablero[m]=2;
    }else{
        BATALLA_NAVAL_1D::tablero[m]=3;
    }

    if(BATALLA_NAVAL_1D::objetivosactuales==0){
        BATALLA_NAVAL_1D::fin=1;
    }
}

void GOTOXY(int x, int y){
   COORD coord;
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int BATALLA_NAVAL_1D::termino(){
    return BATALLA_NAVAL_1D::fin;
}
