#include <iostream>

using namespace std;

int ar[5];

int *p;

int main ()
{
p=ar;// esto lo mismo que poner  p=&ar[0]

cout <<"direccion array[0] "<< &ar<<endl;
cout <<"puntero "<< p<< endl;
// asi se obtiene la posicion de memoria en la siguiente posicion del array
p++;
cout <<"puntero "<< p<< endl;

cin.get();
return 0;
}
