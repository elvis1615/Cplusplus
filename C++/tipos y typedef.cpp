#include <iostream>

using namespace std;

//los tipos son para poder dar un alias a los tipos de datos;
// aqui cambias el dato int sin signo por un alias uint
typedef unsigned int uint;
// ahora para usar un int podria usar la palabra entero
typedef int entero;

int main()
{
    uint numero=10;
    cout<<numero<<endl;
    cin.get();
    return 0;

}

