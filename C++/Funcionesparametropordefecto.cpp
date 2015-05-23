#include <iostream>

using namespace std;
// asigna un valor por defecto en caso de  q no traiga parametro
//tambien llamado prototipo de la funcion
void funcion(int num=2);

//funcion a realizar por la linea de arriba
// de no traer parametro toma por defecto
//el 2 si no usa el nuevo parametro
void funcion(int num)
{
cout<<(num+3)<<endl;
}


int main()
{
    funcion();
    funcion(12);
    cin.get();
    return 0;
}



