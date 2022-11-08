#include "BS.h"
#include <iostream>
using namespace std;

int main()
{
    int numerodeobjetivos=5 , nuevoataque;
    BATALLA_NAVAL_1D juego(numerodeobjetivos);
    do{

        cout<<"\n\nObjetivos restantes: "<<juego.objetivosrestantes()<<endl;
        cout<<"Tablero: "<<endl;
        juego.imprimetablero();
        cout<<"\nIngrese la casilla que desea atacar: ";
        cin>>nuevoataque;
        juego.atacacasilla(nuevoataque);

    }while(juego.termino()==0);
    if(juego.termino()==1){
        cout<<"Felicidades, ganaste";
    }
    return 0;
}
