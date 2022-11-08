#include <iostream>
#include <cstdlib>
#include "AlgMSort.h"
#include <string>
#include <fstream>

using namespace std;

int Merge_Sort(float* u, int p, int r){
   static int G=0;
   if(p>=r){
     return 0;
   }
   else{
    int q=(p+r)/2;

    Merge_Sort(u, p, q);
    Merge_Sort(u, q+1, r);
    G+=MARGE(u, p, q, r);
   }
   return G;
}

int Merge_Sort(int* u, int p, int r){
   static int G=0;
   if(p>=r){
     return 0;
   }
   else{
    int q=(p+r)/2;

    Merge_Sort(u, p, q);
    Merge_Sort(u, q+1, r);
    G+=MARGE(u, p, q, r);
   }
   return G;
}

int MARGE(float* u, int p, int q, int r){
   int H=0;
   int n1=q-p+1, n2=r-q;
   float B[n1+1], C[n2+1];
   for(int i=0; i<n1; i++){
       B[i]=u[i+p];
   }
   for(int i=0; i<n2; i++){
       C[i]=u[i+q+1];
   }
   B[n1]=RAND_MAX;
   C[n2]=RAND_MAX;
   int i=0, j=0;
   for(int k=p; k<r+1; k++){
      if(B[i]<C[j]){
        u[k]=B[i];
        i++;
      }else{
        u[k]=C[j];
        j++;
      }
      H++;
   }
   return H;
}

int MARGE(int* u, int p, int q, int r){
   int H=0;
   int n1=q-p+1, n2=r-q;
   int B[n1+1], C[n2+1];
   for(int i=0; i<n1; i++){
       B[i]=u[i+p];
   }
   for(int i=0; i<n2; i++){
       C[i]=u[i+q+1];
   }
   B[n1]=RAND_MAX;
   C[n2]=RAND_MAX;
   int i=0, j=0;
   for(int k=p; k<r+1; k++){
      if(B[i]<C[j]){
        u[k]=B[i];
        i++;
      }else{
        u[k]=C[j];
        j++;
      }
      H++;
   }
   return H;
}
int Merge_Sort(double* u, int p, int r){
   static int G=0;
   if(p>=r){
     return 0;
   }
   else{
    int q=(p+r)/2;

    Merge_Sort(u, p, q);
    Merge_Sort(u, q+1, r);
    G+=MARGE(u, p, q, r);
   }
   return G;
}

int MARGE(double* u, int p, int q, int r){
   int H=0;
   int n1=q-p+1, n2=r-q;
   double B[n1+1], C[n2+1];
   for(int i=0; i<n1; i++){
       B[i]=u[i+p];
   }
   for(int i=0; i<n2; i++){
       C[i]=u[i+q+1];
   }
   B[n1]=RAND_MAX;
   C[n2]=RAND_MAX;
   int i=0, j=0;
   for(int k=p; k<r+1; k++){
      if(B[i]<C[j]){
        u[k]=B[i];
        i++;
      }else{
        u[k]=C[j];
        j++;
      }
      H++;
   }
   return H;
}

int Merge_Sort(string*u, int p, int r){
   static int G=0;
   if(p>=r){
     return 0;
   }
   else{
    int q=(p+r)/2;

    Merge_Sort(u, p, q);
    Merge_Sort(u, q+1, r);
    G+=MARGE(u, p, q, r);
   }
   return G;
}

int MARGE( string *u, int p, int q, int r){
   int H=0;
   int n1=q-p+1, n2=r-q;
   string B[n1+1], C[n2+1];
   for(int i=0; i<n1; i++){
       B[i]=u[i+p];
   }
   for(int i=0; i<n2; i++){
       C[i]=u[i+q+1];
   }
   B[n1]=RAND_MAX;
   C[n2]=RAND_MAX;
   int i=0, j=0;
   for(int k=p; k<r+1; k++){
      if(B[i]<C[j]){
        u[k]=B[i];
        i++;
      }else{
        u[k]=C[j];
        j++;
      }
      H++;
   }
   return H;
}

int Bubble_Sort(int* A, int n){
    int c=0;
     for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(A[j]>A[j+1]){
                int aux=A[j];
                A[j]=A[j+1];
                A[j+1]=aux;
                c++;
            }
        }
     }
     return c;
}

void Merge_Sort_PokemonN(pokemon* ls, int p, int r){
   if(p>=r){
   }
   else{
    int q=(p+r)/2;
    Merge_Sort_PokemonN(ls, p, q);
    Merge_Sort_PokemonN(ls, q+1, r);
    MARGE_PokemonN(ls, p, q, r);
}
}

void MARGE_PokemonN(pokemon* ls, int p, int q, int r){
   int n1=q-p+1, n2=r-q;
   pokemon B[n1+1], C[n2+1];
   for(int i=0; i<n1; i++){
       B[i]=ls[i+p];
   }
   for(int i=0; i<n2; i++){
       C[i]=ls[i+q+1];
   }
   B[n1].number=RAND_MAX;
   C[n2].number=RAND_MAX;
   int i=0, j=0;
   for(int k=p; k<r+1; k++){
      if(B[i].number<C[j].number){
        ls[k]=B[i];
        i++;
      }else{
        ls[k]=C[j];
        j++;
      }

   }
}

pokemon* ReadPoktxt(string fl){
   ifstream f;
   f.open(fl, ios::in);
   if(f.fail()){
     cout<<"No se encontro el archivo";
     exit(1);
   }
   int n;
   f>>n;
   pokemon* rt;
   rt=new pokemon[n];
   for(int i=0; i<n; i++){
      f>>rt[i].number;
      f>>rt[i].name;
      f>>rt[i].HP;
      f>>rt[i].AT;
      f>>rt[i].DF;
   }
   f.close();
   return rt;
}

void Merge_Sort_PokemonAT(pokemon* ls, int p, int r){
    int tam;
    int nin;
    for(tam=1; tam<=r-p; tam*=2){
        for(nin=p; nin<r-p+1; nin+=2*tam){
            int q=nin+tam-1;
            int s=min(q+2*tam-1, r-p);
            MARGE_PokemonAT(ls, nin, q, s);
        }
    }

}

void MARGE_PokemonAT(pokemon* ls, int nin, int q, int s){
    int i, j, k;
    int n1=q-nin+1;
    int n2=s-q;
    pokemon B[n1], C[n2];
    for(i=0; i<n1; i++){
        B[i]=ls[nin+i];
    }
    for(j=0; j<n2; j++){
        C[j]=ls[q+1+j];
    }
    i=0;
    j=0;
    k=nin;
    while(i<n1 && j<n2){
    if(B[i].AT<=C[j].AT){
        ls[k]=B[i];
        i++;
    }else{
        ls[k]=C[j];
        j++;
      }
     k++;
    }
    while(i<n1){
        ls[k]=B[i];
        i++;
        k++;
    }
    while(j<n2){
        ls[k]=C[j];
        j++;
        k++;
    }
}

