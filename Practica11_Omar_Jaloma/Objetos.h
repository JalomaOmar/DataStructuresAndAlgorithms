#ifndef OBJETOS_H_INCLUDED
#define OBJETOS_H_INCLUDED

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

struct objeto{
   unsigned int peso;
   unsigned int beneficio;
};

class vecob{ //Vector de objetos//
private:
    vector<objeto> v;

public:
    //vector<objeto> v;
    vecob(string);
    ~vecob();
    unsigned int beneficiomax(unsigned int);
};

int maxo(int, int);

#endif // OBJETOS_H_INCLUDED
