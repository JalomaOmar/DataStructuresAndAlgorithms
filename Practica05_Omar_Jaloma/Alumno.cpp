#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <vector>
#include <string>
#include <fstream>


using namespace std;

typedef struct Alumno{
 string Nombre;
 string Bday;
 int Calif;
}Alumno;

vector<Alumno> ReadVecA(char s[]){
  vector<Alumno> L;
  ifstream f;
  f.open(s, ios::in);
  if(f.fail()){
    cout<<"No se encontro el archivo";
    exit(1);
  }
  int sz;
  f>>sz;
  string aux1;
  string aux2;
  int aux3;
  for(int i=0; i<sz; i++){
    f>>aux1;
    f>>aux2;
    f>>aux3;
    Alumno R;
    R.Nombre=aux1;
    R.Bday=aux2;
    R.Calif=aux3;
    L.push_back(R);
  }
  f.close();
  return L;
}

void OrdenaAlfabeticamente(vector<Alumno> &L){


}
