#include "pil.h"
#include "ndo.h"

pil::pil(int a){
  idx=0;
  ptr=new ndo[1];
  ptr[0].ptr=0;
  ptr[0].val=a;
  idx++;
}


pil::~pil(){
    for(int i=idx; i>0; i--){
        ndo* aux=ptr[0].ptr;
        delete[] ptr;
        ptr=aux;
    }
}

void pil::push(int a){
    ndo* ax=ptr;
    ptr=new ndo[1];
    ptr[0].ptr=ax;
    ptr[0].val=a;
    idx++;
}

int pil::pop(){
   if(isem()){
    return 0;
   }else{
    int ax;
    ndo* ax2;
    ax=frent();
    ax2=ptr[0].ptr;
    delete[] ptr[0].ptr;
    ptr=ax2;
    idx--;
    return ax;
   }
}

bool pil::isem(){
   if(idx==0){
    return true;
   }else{return false;}
}

int pil::frent(){
    if(isem()==false){
      return ptr[0].val;
    }else{
    return 0;
    }

}

int pil::siz(){
   return idx;
}
