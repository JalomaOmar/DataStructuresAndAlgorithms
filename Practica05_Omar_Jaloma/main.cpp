#include <iostream>
#include "Alumno.cpp"
using namespace std;


int main()
{
  vector<Alumno> LI;
  LI=ReadVecA("C:\\Users\\ACER\\Documents\\2do Semestre Lic. Matemáticas\\Estructuras de Datos y Algoritmos\\Tareas\\Practica05_Omar_Jaloma\\Salida5.txt");
  cout<<LI[3].Nombre<<endl;
  cout<<LI[3].Bday<<endl;
  cout<<LI[3].Calif<<endl;
    return 0;
}


