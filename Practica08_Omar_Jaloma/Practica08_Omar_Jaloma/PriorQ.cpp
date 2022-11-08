#include "PriorQ.h"

priorQ::priorQ(){
}

priorQ::~priorQ(){
}
void priorQ::maxheapify(int i){
    int l=izquierdo(i);
    int r=derecho(i);
    int largest;
    if((l<=heapsize) && (lista[l].prioridad >= lista[i].prioridad) ){
        largest=l;
    }else{
        largest=i;
    }

    if((r<=heapsize) && (lista[r].prioridad >= lista[largest].prioridad)){
        largest=r;
    }
    if(largest!=i){
        paciente x;
        x=lista[largest];
        lista[largest]=lista[i];
        lista[i]=x;
        maxheapify(largest);
    }
}

void priorQ::buildmaxheap(){
    heapsize=lista.size()-1;
    int r=heapsize;
    for(int i=(r-1)/2; i>=0; i--){
        maxheapify(i);
    }
}

void priorQ::heapsort(){
    buildmaxheap();
    for(int i=(lista.size()-1); i>=1; i--){
        paciente x;
        x=lista[i];
        lista[i]=lista[0];
        lista[0]=x;
        heapsize--;
        maxheapify(0);
    }

}
void priorQ::insertar(int p, string nom){
     paciente pac;
     pac.nombre=nom;
     pac.prioridad=p;
     lista.push_back(pac);
     heapsort();
}

string priorQ::pop(){
    string r;
    r=lista[lista.size()-1].nombre;
    int s;
    s=lista.size();
    s--;
    lista.resize(s);
    return r;
}

int priorQ::padre(int i){
   if((i==1)||(i==2)){
      return 0;
   }else{
      if(i%2==0){
        return ((i/2)-1);
      }else{
         return i/2;
      }
   }
}

int priorQ::izquierdo(int i){
   if(i==0){
     return 1;
   }else{
     return((2*i)+1);
   }
}

int priorQ::derecho(int i){
   if(i==0){
    return 2;
   }else{
    return 2*(i+1);
   }
}

void priorQ::delete_list(){
    for(int i=0; i<lista.size(); i++){
        string r;
        r=pop();
    }
}

void priorQ::imprimir(){
  for(int i=0; i<lista.size(); i++){
    cout<<"|"<<lista[i].nombre<<" "<<lista[i].prioridad<<"|"<<endl;
  }
}
