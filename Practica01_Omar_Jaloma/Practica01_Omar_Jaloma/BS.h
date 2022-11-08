#ifndef BS_H_INCLUDED
#define BS_H_INCLUDED

class BATALLA_NAVAL_1D{
protected:
    int tablero[20];
    int fin;
private:
    int objetivosactuales;
public:
    BATALLA_NAVAL_1D(int);
    int objetivosrestantes();
    void atacacasilla(int);
    void imprimetablero();
    int termino();
};

void GOTOXY(int, int);

#endif // BS_H_INCLUDED
