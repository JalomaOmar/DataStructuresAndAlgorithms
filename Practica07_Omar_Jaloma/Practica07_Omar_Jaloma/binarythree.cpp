#include "binarythree.h"
#include <fstream>
#include <iostream>
#include <cstdlib>

using namespace std;

int ObtenerArray(string s, int*& arr){//Obtiene el número de elementos en el arreglo y además el arreglo mediante un parámetro por referencia del arreglo.
    ifstream f;
    f.open(s, ios::in);
    if(f.fail()){
        cout<<"No se encontro el archivo"<<endl;
        exit(1);
    }
    else{
        int n;
        f>>n;
      arr= new int(n);
      for(int i=0; i<n; i++){
        f>>arr[i];
      }
      f.close();
      return n;
    }
}

node::node(){
    right=NULL;
    left=NULL;
}

Btree::Btree(int* arr, int n){
    root=NULL;
    nn=n;
    for(int i=0; i<n; i++){
        insertar(arr[i]);
    }

}
void Btree::insertar(int v, node* subar){
      if(subar==NULL){
        subar=new node;
        subar->value=v;
      }else{
         if(v>=subar->value){
            insertar(v, subar->right);
         }else{
            insertar(v, subar->left);
         }
      }
}
void Btree::insertar(int v){
    if(root==NULL){
        root=new node;
        root->value=v;
    }else{
       if(v>= root->value){
           insertar(v, root->right);
       }else{
           insertar(v, root->left);
       }
    }
    //insertar(v, root);

}

void node::borrnd(){
   if(right!=NULL){
      right->borrnd();
      right->~node();
   }
   if(left!=NULL){
      left->borrnd();
      left->~node();
   }

}
Btree::~Btree(){
   if(root!=NULL){
      root->borrnd();
      root->~node();
   }
}

node::~node(){

}

/*void Btree::showtree(){
    int k=nn/2;
    if(nn%2==1){
        k++;
    }
    int m=k;
    for(int j=0; j<k+1; j++){
            cout<<" ";
    }
    cout<<root->value;
    for(int j=0; j<k+1; j++){
            cout<<" ";
        }
        k=k/2;
    for(int i=1; i<nn; i++){
        for(int j=0; j<k+1; j++){
            cout<<" ";
        }
    }
}*/

bool Btree::buscar(int v){
    /*if(root!=NULL){
        if(v==root->value){
            return 1;
        }
        else if(v>root->value){
            return buscar( v, root->right);
        }else{
            return buscar( v, root->left);
        }
    }else{
      return 0;
    }*/
    return buscar(v, root);

}

bool Btree::buscar(int v, node* subar){
     if(subar!=NULL){
        if(v==subar->value){
            return 1;
        }else if(v>subar->value){
            return buscar(v, subar->right);
        }else{
           return buscar(v, subar->left);
        }
     }else{
       return 0;
     }
}
