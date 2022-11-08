#include <iostream>
#include "vector.cpp"
#include "Matrix.cpp"
#include <cstdlib>

using namespace std;

int main()
{
    /*int p;
    float f, g;
    Vector V(3, 2);
    Vector W(3, 0);
    Vector T(3, 0);
    p=V.getsize();
    f=V.getvalue(2);
    cout << p << endl;
    cout << f << endl;
    W=V.MultEs(4);
    f=W.getvalue(2);
    cout << f << endl;
    T=V.Suma(W);
    f=T.getvalue(2);
    cout << f << endl;
    Vector Z(3, 3);
    V.PRV();
    Z.PRV();
    g=V.Ppunto(Z);
    cout<< g <<endl;*/
    /*Matrix M(2, 2, 1);
    Matrix R(2, 2, 3);
    Matrix N=M.Suma(R);
    M.PRM();
    R.PRM();
    N.PRM();*/
    /*Matrix A(3, 3, 2);
    Matrix B(3, 3, 0);
    B=A.MultEs(6);
    B.PRM();*/
    /*Matrix E(3, 3 , 0);
    Matrix F(3, 3, 1);
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            F.Setvalue(i, j, rand()%20);
        }
    }
    F.PRM();
    E=F.Trans();
    E.PRM();*/
    /*Matrix D(2, 3, 0);
    Matrix I(3, 2, 0);
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            D.Setvalue(i, j, rand()%6);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<2; j++){
            I.Setvalue(i, j, rand()%7);
        }
    }
    D.PRM();
    I.PRM();
    Matrix P(2, 2, 0);
    P=D.MultiM(I);
    P.PRM();*/
    return 0;
}
