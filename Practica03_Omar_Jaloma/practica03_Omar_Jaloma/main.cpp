#include <iostream>
#include <windows.h>
#include<cstdio>
#include<string>
#include "pil.cpp"
#include "col.cpp"

#define N 3 //Define el número de números en el juego
#define TM 4

using namespace std;

void TorresHanoi();
void GotoXY(int, int);
void borr(int);
void mens(string, int);
pil ret(int);

   pil A(N);
   pil B(1);
   pil C(1);

int main()
{
   /*pil E(32);
   cout<< E.siz() <<endl;
   E.push(8);
   cout<< E.frent()<<endl;
   cout<< E.frent()<<endl;
   cout<< E.pop() <<endl;
   cout<< E.pop()<<endl;
   cout<< E.siz()<<endl;
   E.push(5);
   if( E.isem()){
    cout<<"La pila está vacía"<<endl;
   }else{
    cout<<"La pila tiene algún elemento"<<endl;
   }*/
   /*col D(34);
   cout<< D.siz()<<endl;
   D.push(98);
   D.push(99);
   cout<< D.frent()<<endl;
   cout<< D.frent()<<endl;
   cout<< D.pop()<<endl;
   cout<< D.pop()<<endl;
   cout<< D.pop()<<endl;
   cout<< D.siz()<<endl;
   if(D.isem()){
    cout<<"La cola está vacía"<<endl;
   }else{
    cout<<"La cola tiene algún elemento"<<endl;
   }*/
   TorresHanoi();

    return 0;
}

void TorresHanoi(){
   A.pop();
   B.pop();
   C.pop();
   for(int i=0; i<N; i++){
      A.push(N-i);
      if(i==0){
        GotoXY(10, N+6);
        cout<<"___";
        GotoXY(20, N+6);
        cout<<"___";
        GotoXY(30, N+6);
        cout<<"___";
      }
      GotoXY(10, N+5-i);
      cout<<A.frent();
   }
   int a,b;
   while(C.siz()!=N){
    mens("Movimiento? ", N);
    cin>>a;
    GotoXY(50, N+2);
    cin>>b;
    if(((a<1 || a>3) || (b<1 || b>3)) || (a==b)){
    }else{
      if((a==1 && b==2) && A.isem()==false && (A.frent()<B.frent() || B.frent()==0)){
        int aux1;
        aux1=A.pop();
        B.push(aux1);
        GotoXY(20, N+6-B.siz());
        cout<<aux1;
        GotoXY(10, N+5-A.siz());
        cout<<" ";
      }else if((a==1 && b==3) && A.isem()==false && (A.frent()<C.frent() || C.frent()==0)){
        int aux2;
        aux2=A.pop();
        C.push(aux2);
        GotoXY(30, N+6-C.siz());
        cout<<aux2;
        GotoXY(10, N+5-A.siz());
        cout<<" ";
      }else if((a==2 && b==1) && B.isem()==false && (B.frent()<A.frent() || A.frent()==0)){
        int aux3;
        aux3=B.pop();
        A.push(aux3);
        GotoXY(10, N+6-A.siz());
        cout<<aux3;
        GotoXY(20, N+5-B.siz());
        cout<<" ";
      }else if((a==2 && b==3) && B.isem()==false && (B.frent()<C.frent() || C.frent()==0)){
        int aux4;
        aux4=B.pop();
        C.push(aux4);
        GotoXY(30, N+6-C.siz());
        cout<<aux4;
        GotoXY(20, N+5-B.siz());
        cout<<" ";
      }else if((a==3 && b==1) && C.isem()==false && (C.frent()<A.frent() || A.frent()==0)){
        int aux5;
        aux5=C.pop();
        A.push(aux5);
        GotoXY(10, N+6-A.siz());
        cout<<aux5;
        GotoXY(30, N+5-C.siz());
        cout<<" ";
      }else if((a==3 && b==2) && C.isem()==false && (C.frent()<B.frent() || B.frent()==0)){
        int aux6;
        aux6=C.pop();
        B.push(aux6);
        GotoXY(20, N+6-B.siz());
        cout<<aux6;
        GotoXY(30, N+5-C.siz());
        cout<<" ";
      }
    }
   }
}


void GotoXY(int x, int y){
   COORD coord;
   coord.X=x;
   coord.Y=y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void borr(int n){
   for(int i=0; i<70; i++){
    for(int j=0; j<n+8; j++){
        GotoXY(i, j);
        cout<<" ";
    }
   }
   GotoXY(50, n);
}

void mens(string s,int n){
    GotoXY(50, n);
    cout<<s;
    GotoXY(50, n+1);
}

pil ret(int m){
    pil R(0);
   if(m<1 || m>3){
    return R;
   }else{
     if(m==1){
        return A;
     }else if(m==2){
        return B;
     }else{
       return C;
     }
   }
}
