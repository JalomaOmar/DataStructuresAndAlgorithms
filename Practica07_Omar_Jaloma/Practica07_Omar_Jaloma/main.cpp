#include <iostream>
#include "binarythree.h"

using namespace std;

int main(int argc, char* argv[])
{
    int* b;
    int*&a=b;
    string p="";
    for(int i=1; i<argc; i++){
        p+=argv[i];
    }
    int num;
    num=ObtenerArray(p, a);
    cout<<endl<<b[2]<<endl<<num;
    Btree arbo(b, num);
    bool B;
    B=arbo.buscar(11);
    cout<<endl<<arbo.root->left->value;
        delete[] b;

    return 0;
}

