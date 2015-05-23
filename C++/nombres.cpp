#include <iostream>

// para escribir en pantalla el cout y el cin.get()



// un namespace es para tener varias variaables con el mismo nombre pero cdentro de distinto espacio de nombre
namespace cuidad
{
int calle;
}

// puede tener 2 variables del mismo nombre mientras esten en distinto namespace
namespace pueblito
{
int calle=10;
}

using namespace cuidad;

int main()
{
calle=12;
//con :: se puede usar el name space cuando no esta en using
std::cout<<pueblito::calle<<std::endl;

std::cout<<calle<<std::endl;
std::cin.get();
return 0;
}
