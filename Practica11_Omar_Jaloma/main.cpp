#include "Objetos.h"

int main(int argc, char* argv[])
{   string s="";
    for(int i=1; i<argc; i++){
        s+=argv[i];
    }
    vecob PRECIOS(s);
    unsigned int p;
    p=PRECIOS.beneficiomax(40);
    cout<<p;
    return 0;
}
