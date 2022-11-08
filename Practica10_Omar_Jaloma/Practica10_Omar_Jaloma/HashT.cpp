#include "HashT.h"

TablaHash::TablaHash(int M, int m){
  Modular=M;
  f=m;
  list<string> lista;
  lista.resize(0);
  for(int i=0; i<M; i++){
    Tab.push_back(lista);
  }
}

TablaHash::~TablaHash(){};

void TablaHash::insertar(string s){
     int r;
     list<string> lista;
     if(f==1){
       r=Hash1(s);
       Tab[r].push_back(s);
     }else if(f==2){
       int r=Hash2(s);
       Tab[r].push_back(s);
     }else{
       cout<<"Fallo en el parametro de función Hash"<<endl;
     }
}

unsigned int TablaHash::Hash1(string s){
   int r=0, k;
   for(int i=0; i<s.size(); i++){
     r+=(int)s[i];
   }
   k=(r%Modular);
   return k;
}


unsigned int TablaHash::Hash2(string s){
    int r=0, k;
    for(int i=0; i<s.size(); i++){
        r+=(((int)s[i])*(i+1));
    }
    k=(r%Modular);
    return k;
}

int TablaHash::tamlista(int i){
    return Tab[i].size();
}
