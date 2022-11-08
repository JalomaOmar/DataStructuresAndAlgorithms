#ifndef VECTOR_H_INCLUDED
#define VECTOR_H_INCLUDED

class Vector{
   int tam;
   double* data;
   public:
       Vector(int, double);
       ~Vector();
       int getsize();
       double getvalue(int);
       void Setvalue(int, double);
       Vector MultEs(double);
       Vector Suma(Vector);
       double Ppunto(Vector);
       void PRV();
};

#endif // VECTOR_H_INCLUDED
