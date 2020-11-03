#include <iostream>
#include "arreglo.h"
using namespace std;

int main(){
    
    Arreglo<string> arreglo;

    arreglo.insertar_inicio("b");
    arreglo.insertar_inicio("a");
    arreglo.insertar_final("y");
    arreglo.insertar_final("z");

    for (size_t i = 0; i < arreglo.size(); i++){
        cout<<arreglo[i]<<" ";
    }
    cout<<endl<<endl;

    arreglo.insertar("c",2);

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