#include <iostream>
#include "Matrix.h"


using namespace std;

Matrix::Matrix(int rens, int cols, double a){
      nrens=rens;
      ncols=cols;
      data=new double*[nrens];
      for(int i=0; i<nrens; i++){
        data[i]=new double[ncols];
      }

      for(int i=0; i<nrens; i++){
        for(int j=0; j<ncols; j++){
            data[i][j]=a;
        }
      }
}

Matrix::~Matrix(){
     for(int i=0; i<nrens; i++){
        delete[] data[i];
     }
     delete[] data;
}

void Matrix::PRM(){
    for(int i=0; i<nrens; i++){
        for(int j=0; j<ncols; j++){
            if(j==0){
                cout<<"|\t";
            }
            cout<< data[i][j]<< "\t";
            if(j==ncols-1){
                cout<<"|";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

Matrix Matrix::Suma(Matrix M){
      Matrix R(nrens, ncols, 0);
      double m, a;
      if(M.nrens!=nrens || M.ncols!=ncols){
        return R;
      }else{
      for(int i=0; i<nrens; i++){
            for(int j=0; j<ncols; j++){
                a=getvalue(i, j);
                m=M.getvalue(i, j);
                R.Setvalue(i, j, a+m);
            }
        }
      }
      return R;
}

double Matrix::getvalue(int i, int j){
      return data[i][j];
}

Matrix Matrix::MultEs(double d){
    Matrix R(nrens, ncols, 0);
    for(int i=0; i<nrens; i++){
        for(int j=0; j<ncols; j++){
            R.Setvalue(i, j, d*data[i][j]);
        }
    }
    return R;
}

void Matrix::Setvalue( int i, int j, double a){
      data[i][j]=a;
}

Matrix Matrix::Trans(){
       Matrix R(nrens, ncols, 0);
       for(int i=0; i<nrens; i++){
        for(int j=0; j<ncols; j++){
            R.Setvalue(i, j, data[j][i]);
        }
       }
       return R;
}

Matrix Matrix::MultiM(Matrix M){
       Matrix R(nrens, nrens, 0);
       double p=0;
       if(nrens!=M.ncols || ncols!=M.nrens){
        return R;
       }else{
          for(int i=0; i<nrens; i++){
            for(int j=0; j<nrens; j++){
                for(int k=0; k<ncols; k++){
                    p+=(getvalue(i, k)*M.getvalue(k, j));
                }
                R.Setvalue(i, j, p);
                p=0;
            }
          }
       }
       return R;

}
