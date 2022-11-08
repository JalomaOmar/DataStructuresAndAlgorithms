#ifndef PRACTICA9_H_INCLUDED
#define PRACTICA9_H_INCLUDED

#include<iostream>
#include<vector>
#include<fstream>
#include<cstdlib>
#include<cmath>
#include<map>

using namespace std;

class player{
public:
  string name;
  int num;
  string team;
  player(string _name, int _num, string _team):
   name(_name),
   num(_num),
   team(_team){};
};

template <class T>
class hashTable{
private:
    map <T, vector<player> > theTable;
    T (*F)(const player &);
public:
    hashTable( T (*f)(const player &)){
    F=f;};
    ~hashTable(){};
    int insertar(const player &j){
      T t;
      t=F(j);
      int col=theTable[t].size();
     theTable[t].push_back(j);
     return col;
    };
    vector<player> encuentra(const T k){
       T t;
       player p("", k, "");
       player &j=p;
       t=F(j);
      return theTable[t];
    }
    vector<player> encuentra(const player& j){
       T t;
       t=F(j);
       return theTable[t];
    }
};

void LeeDatos(string, vector<player>&);
unsigned int hashNombre(const player &);
unsigned int hashNumero(const player &);
string hashEquipo(const player &);
unsigned int CambiarHashNumModular(const player &, unsigned int);
unsigned int CambiarHashNombre(const player&, unsigned int, unsigned int);

#endif // PRACTICA9_H_INCLUDED
