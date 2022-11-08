#ifndef HASHT_H_INCLUDED
#define HASHT_H_INCLUDED

#include <iostream>
#include <vector>
#include <list>
#include <string>
#include <cstdlib>
#include <time.h>

using namespace std;

class TablaHash{
private:

   int Modular;
   int f;
   unsigned int Hash1(string);
   unsigned int Hash2(string);
public:
       vector<list<string>> Tab;
   TablaHash(int, int);
   ~TablaHash();
   void insertar(string);
   int tamlista(int);
};


#endif // HASHT_H_INCLUDED
