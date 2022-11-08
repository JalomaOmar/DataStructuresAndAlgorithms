#ifndef PRIORQ_H_INCLUDED
#define PRIORQ_H_INCLUDED

#include<string>
#include<cstdlib>
#include <iostream>
#include <vector>

using namespace std;

typedef struct paciente{
  int prioridad;
  string nombre;
}paciente;

class priorQ{
private:
  int heapsize;
  void maxheapify(int );
  int derecho(int i);
  int izquierdo(int i);
  int padre(int i);
  void buildmaxheap();
  void heapsort();
  vector<paciente> lista;
public:
  priorQ();
  ~priorQ();
  void insertar(int, string);
  string pop();
  void imprimir();
  void delete_list();
};


#endif // PRIORQ_H_INCLUDED
