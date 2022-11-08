#ifndef MATRIX_H_INCLUDED
#define MATRIX_H_INCLUDED

class Matrix{
    int nrens, ncols;
    double** data;

public:
    Matrix(int, int, double);
    ~Matrix();
    void PRM();
    Matrix Suma(Matrix);
    double getvalue(int, int);
    Matrix MultEs(double);
    void Setvalue(int, int, double);
    Matrix Trans();
    Matrix MultiM(Matrix);
};


#endif // MATRIX_H_INCLUDED
