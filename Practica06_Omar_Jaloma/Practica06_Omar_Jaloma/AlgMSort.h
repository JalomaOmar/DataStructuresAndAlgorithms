#ifndef ALGMSORT_H_INCLUDED
#define ALGMSORT_H_INCLUDED
#include <fstream>
#include <string>

using namespace std;

struct pokemon{
   string name;
   int number;
   int HP;
   int AT;
   int DF;
};

int MARGE(float*, int, int, int);
int MARGE(int*, int, int, int);
int MARGE(string*, int, int, int);
int MARGE(double*, int, int, int);

int Merge_Sort(float*, int, int);
int Merge_Sort(int*, int, int);
int Merge_Sort(string*, int, int);
int Merge_Sort(double*, int, int);
int Bubble_Sort(int*, int);

void Merge_Sort_PokemonN(pokemon* , int, int);
void Merge_Sort_PokemonAT(pokemon* , int, int);
void MARGE_PokemonN(pokemon*, int, int, int);
void MARGE_PokemonAT(pokemon*, int, int, int);

pokemon* ReadPoktxt(string);


#endif // ALGMSORT_H_INCLUDED
