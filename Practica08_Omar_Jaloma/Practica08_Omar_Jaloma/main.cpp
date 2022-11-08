#include "PriorQ.h"

using namespace std;

int main()
{
    priorQ patients;
    int priority;
    string type, name;
    do{
        cin>>type;
     if(type=="Agregar"){
        cin>>priority;
        cin>>name;
        patients.insertar(priority, name);
        cout<<"Se agrego a "<<name<<endl;
     }
     if(type=="Siguiente"){
        cout<<"Se atendio a "<<patients.pop()<<endl;
     }
    }while(type!="Cerrar");
    cout<<"Consultorio cerrado"<<endl;
    patients.delete_list();
    return 0;
}



