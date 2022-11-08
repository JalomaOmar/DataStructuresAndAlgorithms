#ifndef BINARYTHREE_H_INCLUDED
#define BINARYTHREE_H_INCLUDED
#include <string>
#include <vector>

using namespace std;
class node{
public:
    node* right;
    node* left;
    int value;
    void borrnd();
    node();
    ~node();
};

class Btree{
public:
    node* root;
    int nn; //número de nodos
    void insertar(int);
    void insertar(int, node*);
    void showtree();
    void showtree(node*);
    bool buscar(int);
    bool buscar(int, node*);
    Btree(int*, int);
    ~Btree();
};

int ObtenerArray(string, int*&);

#endif // BINARYTHREE_H_INCLUDED
