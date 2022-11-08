#include <iostream>
#include "Vector.h"

using namespace std;

Vector::Vector(int dim, double inic){
      tam=dim;
      data= new double[dim];
      for(int i=0; i<dim; i++){
        data[i]=inic;
      }
}

Vector::~Vector(){
     delete[] data;
}

int Vector::getsize(){
    return tam;
}

double Vector::getvalue(int j){
     return data[j];
}

void Vector::Setvalue(int j, double f){
     data[j]=f;
}

Vector Vector::MultEs(double a){
    Vector R(tam, 1);
    for(int i=0; i<tam; i++){
        R.data[i]=data[i]*a;
    }
    return R;
}

Vector Vector::Suma(Vector B){
    Vector R(tam, 0);
    if(B.tam!=tam){
        return R;
    }else{
       for(int i=0; i<tam; i++){
           R.data[i]=data[i]+B.data[i];
       }
    }
    return R;
}

double Vector::Ppunto(Vector B){
     double s=0;
     if(B.tam!=tam){
        return 0;
     }else{
         for(int i=0; i<tam; i++){
            s+=((B.data[i])*data[i]);
         }
     }
     return s;
}

void Vector::PRV(){
    cout << endl;
    for(int i=0; i<tam; i++){
        cout<< "| "<< data[i]<<"|"<<endl;
    }
}
