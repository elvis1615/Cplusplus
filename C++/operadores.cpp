#include <iostream>
#include <conio.h>

using namespace std;

int numero=12;
int numero1=10;
//
int operacion;

int suma,resta,multiplicacion,division,modulo;

int main()
{
    // operadores de asignacion
    operacion=12;
    cout<<"la asignacion es "<<operacion<<endl;
    operacion+=3;
    cout<<"la asignacion es "<<operacion<<endl;
    operacion*=3;
    cout<<"la asignacion es "<<operacion<<endl;

    // operaciones basicas
    suma=numero+numero1;
    resta= numero- numero1;
    multiplicacion= numero*numero1;
    division=numero/numero1;
    modulo= numero%numero1;
    cout<<"la suma es "<<suma<<endl;
    cout<<"la resta es "<<resta<<endl;
    cout<<"la multiplicacion es "<<multiplicacion<<endl;
    cout<<"la Division es "<<division<<endl;
    cout<<"la division modular es "<<modulo<<endl;
    getch();
    return 0;
}
