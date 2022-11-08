#include "Practica9.h"

using namespace std;

void LeeDatos(string archivo, vector<player> &lista){
   ifstream f;
   f.open(archivo, ios::in);
   if(f.fail()){
     cout<<"no se encontro el archivo"<<endl;
     exit(1);
   }else{
     int n;
     f>>n;
     for(int i=0; i<n; i++){
        string _name, _team;
        int _num;
        f>>_name;
        f>>_num;
        f>>_team;
        player x(_name, _num, _team);
        lista.push_back(x);
     }
     f.close();
   }
}

unsigned int CambiarHashNombre(const player &j, unsigned int c=0, unsigned int n=0){
        static int ck=2, nk=3;
        if(c!=0 || n!=0){
            if(c!=0){
                ck=c;
            }if(n!=0){
               nk=n;
            }
            return 1;
        }
        int m=j.name.size();
        unsigned int sum=(int)j.name[m-1];
         for(int i=m-1; i>0; i--){
            sum=((((int)j.name[i-1])%nk)+(((ck%nk)*(sum%nk))%nk))%nk;
         }
        return sum;
}
unsigned int hashNombre(const player &j){
     return CambiarHashNombre(j);
}

unsigned int hashNumero(const player& j){
      return CambiarHashNumModular(j, 0);
}
unsigned int CambiarHashNumModular(const player &j, unsigned int m=0){
    static unsigned int k=4;
    if(m!=0){
        k=m;
    }
    unsigned int h;
    h=j.num;
    return (h%k);
}

string hashEquipo(const player &j){
    string s="";
    for(int i=0; i<3; i++){
        s+=j.team[i];
    }
    return s;
}


