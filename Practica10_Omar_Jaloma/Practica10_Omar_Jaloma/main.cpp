#include "HashT.h"

#define N 10000
#define R 87
using namespace std;

int main()
{
    srand(time(NULL));
    TablaHash T(R, 1);
    for(int i=0; i<N; i++){// función que genera los strings aleatorios
        string s="";
        int r=1+(rand()%10);
        for(int j=0; j<r; j++){
            s+=(char)(97+rand()%26);
        }
        T.insertar(s);
    }
    TablaHash T2(R, 2);
    for(int i=0; i<N; i++){// función que genera los strings aleatorios
        string s="";
        int r=1+(rand()%10);
        for(int j=0; j<r; j++){
            s+=(char)(97+rand()%26);
        }
        T2.insertar(s);
    }
    vector<int> A1, A2;
    for(int i=0; i<R; i++){
        A1.push_back(T.tamlista(i));
        cout<<A1[i]<<endl;
    }
    cout<<endl<<"tamaños de la segunda tabla"<<endl<<endl;
    for(int i=0; i<R; i++){
        A2.push_back(T2.tamlista(i));
        cout<<A2[i]<<endl;
    }
    int a1=0, a2=0;
    for(int i=0; i<R; i++){
        if(A1[i]<A2[i]){
            a1++;
        }else if(A1[i]>A2[i]){
            a2++;
        }else{}
    }

    if(a1<a2){
        cout<<endl<<"la tabla mejor distribuida es la tabla 1"<<endl;
    }else if(a2>a1){
        cout<<endl<<"la tabla mejor distribuida es la tabla 2"<<endl;
    }else{
    }
    return 0;
}
