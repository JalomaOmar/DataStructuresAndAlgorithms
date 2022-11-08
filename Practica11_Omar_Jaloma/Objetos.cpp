#include "Objetos.h"

vecob::vecob(string s){
ifstream f;
  f.open(s, ios::in);
  if(f.fail()){
    cout<<"No se encontro el archivo"<<endl;
  }else{
    int n;
    f>>n;
    int t=0, i=1;
    objeto obaux, obaux2;
    obaux.beneficio=0;
    obaux2.beneficio=0;
    obaux.peso=0;
    v.push_back(obaux);
    while(t!=n){//Lo que hace el constructor es tomar un archivo de texto con pesos y beneficios y generar un vector de tamaño m+1 donde m es el peso más grande. Esto es útil para poder maxificar el beneficio total de una manera más simple utilizando una manera parecida a la del ejemplo CUT-ROD
        f>>obaux.peso;
        f>>obaux.beneficio;
        while(i!=obaux.peso){
            obaux2.peso=i;
            v.push_back(obaux2);
            i++;
        }
        v.push_back(obaux);
        t++;
        i++;
    }
  }
  f.close();
}

vecob::~vecob(){};

unsigned int vecob::beneficiomax(unsigned int n){
    objeto obaux;
    obaux.beneficio=0;
    int k=v.size();
    for(int i=0; i<n-k+1; i++){
        obaux.peso=k+i;
        v.push_back(obaux);
    }
     vector<int> r;
     r.push_back(0);
     for(int j=1; j<n+1; j++){
        int q=-RAND_MAX;
        for(int i=1; i<=j; i++){
            q=maxo(q, v[i].beneficio+r[j-i]);
        }
        r.push_back(q);
     }
     return r[n];
}

int maxo(int l, int m){
    if(l>=m){
        return l;
    }else{ return m;}
}
