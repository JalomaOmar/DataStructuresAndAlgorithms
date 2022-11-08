#include <iostream>
#include "Practica9.h"

using namespace std;

int main()
{
    vector<player> v;
    vector<player> &w=v;
    LeeDatos("C:\\Users\\ACER\\Documents\\2do Semestre Lic. Matemáticas\\Estructuras de Datos y Algoritmos\\Tareas\\Practica09_Omar_Jaloma\\Practica09_Omar_Jaloma\\FIFA18.txt", w);

    CambiarHashNombre(v[0], 256, 101);
    vector<player> ret, ret1, ret2, ret3, ret4, ret5;
    hashTable<unsigned int> TABLA(hashNombre);
    for(int i=0; i<736; i++){
        TABLA.insertar(v[i]);
    }
    ret=TABLA.encuentra(2);//AQUI RAM no funciona porque no es el tipo correcto
    for(int i=0; i<ret.size(); i++){
        cout<<endl<<ret[i].name;
    }
    cout<<endl;
    player jug(" OCHOA_Guillermo ", 13 , " Mexico " );
    player &jugador=jug;
    ret1=TABLA.encuentra(jugador);
    for(int i=0; i<ret1.size(); i++){
        cout<<endl<<ret1[i].name;
    }
    hashTable<unsigned int> TABLA1(hashNumero);
    for(int i=0; i<736; i++){
        TABLA1.insertar(v[i]);
    }
    cout<<endl;
    CambiarHashNumModular(v[0], 11);
    ret2=TABLA1.encuentra(12);
    for(int i=0; i<ret2.size(); i++){
        cout<<endl<<ret2[i].name;
    }
    cout<<endl;
    ret3=TABLA1.encuentra(jugador);
    for(int i=0; i<ret3.size(); i++){
        cout<<endl<<ret3[i].name;
    }
    hashTable<string> TABLA2(hashEquipo);
    for(int i=0; i<736; i++){
        TABLA2.insertar(v[i]);
    }
    cout<<endl;
    /*ret4=TABLA2.encuentra("Nig"); //Aquí no supe que hacer, porque en la declaración de la función, por el template, el compilador no me deja hacer esta llamada con el parámetro como un string. Traté de modificarlo, pero no pude llegar a nada
    for(int i=0; i<ret4.size(); i++){
        cout<<endl<<ret4[i].name;
    }*/
    cout<<endl;
    ret5=TABLA2.encuentra(jugador);
    for(int i=0; i<ret5.size(); i++){
        cout<<endl<<ret5[i].name;
    }
    return 0;
}
