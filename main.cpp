#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    
    Arreglo<string> arreglo;

    arreglo.insertar_inicio("q");
    arreglo.insertar_inicio("w");
    arreglo.insertar_final("e");
    arreglo.insertar_final("r");

    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl<<endl;

    arreglo.insertar("t",2);

    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl<<endl;

    arreglo.eliminar_inicio();
    arreglo.eliminar_final();
    arreglo.eliminar(1);

    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl<<endl;
    
    system("pause");
    return 0;
}