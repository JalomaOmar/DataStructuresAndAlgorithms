#include <iostream>
#include <ctime>
#include <vector>
#include <stdlib.h>
#include "AlgMSort.h"
#include <fstream>
#include <conio.h>


using namespace std;

int main()
{
    //PARTE 1
    /*srand(time(NULL));
    int* arr;
    arr=new int[100000];
    for(int i=0; i<100000; i++){
        arr[i]=rand();
    }
    //int a=Bubble_Sort(arr, 100);
    int b=Merge_Sort(arr, 0, 99999);
    delete[] arr;
    cout<<b;
    //cout<<a;*/

    //PARTE 2.1
    /*pokemon* team;
    team=ReadPoktxt("C:\\Users\\ACER\\Documents\\2do Semestre Lic. Matemáticas\\Estructuras de Datos y Algoritmos\\Tareas\\Practica06_Omar_Jaloma\\Practica06_Omar_Jaloma\\pokemons.txt");
    Merge_Sort_PokemonN(team, 0, 28);
    for(int i=0; i<29; i++){
        cout<<team[i].number<<" "<<team[i].name<<endl;
    }
    cout<<team[0].name;
    delete[]team;
    getch();*/

    //PARTE 2.2
    pokemon* team2;
    team2=ReadPoktxt("C:\\Users\\ACER\\Documents\\2do Semestre Lic. Matemáticas\\Estructuras de Datos y Algoritmos\\Tareas\\Practica06_Omar_Jaloma\\Practica06_Omar_Jaloma\\pokemons.txt");
    Merge_Sort_PokemonAT(team2, 0, 28);
    for(int i=0; i<29; i++){
        cout<<team2[i].AT<<" "<<team2[i].name<<endl;
    }
    delete[] team2;
    return 0;
}
