#include "col.h"

col::col(int a){
   fptr=new ndo[1];
   hptr=fptr;
   fptr[0].ptr=0;
   fptr[0].val=a;
   idx=1;
}

col::~col(){
    for(int i=idx; i>0; i--){
        ndo* aux=hptr[0].ptr;
        delete[] hptr;
        hptr=aux;
    }
}

void col::push(int a){
  fptr[0].ptr=new ndo[1];
  ndo* aux=fptr[0].ptr;
  fptr=aux;
  fptr[0].val=a;
  idx++;
}

int col::pop(){
   if(isem()){
    return 0;
   }else{
     int aux=frent();
     ndo* aux2=hptr[0].ptr;
     delete[] hptr;
     hptr=aux2;
     idx--;
     return aux;
   }
}

bool col::isem(){
   if(idx==0){
    return true;
   }else{return false;}
}

int col::frent(){
   if(isem()==false){
    return hptr[0].val;
   }else{
    return 0;
   }
}
int col::siz(){
   return idx;
}
