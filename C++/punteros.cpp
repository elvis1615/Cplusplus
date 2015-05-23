#include <iostream>

using namespace std;

int numero=12;
//asi se declara un puntero
int *puntero=&numero;

int main()
{
    //& operador de referencia  y en este casi nos permite ver en que direccion se almacena  la variable
    cout<< &numero<<endl;
    cout<< puntero<<endl;
    // el  * cambia la direccion de memoria por el valor que esta contiene
    cout<< *puntero<<endl;
    cin.get();
    return 0;
}
