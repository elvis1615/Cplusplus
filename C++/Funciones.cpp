#include <iostream>

using namespace std;
int num1=4;
int num2=6;

int suma;

int sumar(int a, int b)
{
    return (a)+(b);
}

void funcion()
{
cout<<"Funcion sin valor de reotorno"<<endl;
}

int main()
{
    suma=sumar(num1,num2);
    funcion();
    cout<<"el resultado es"<<suma<<endl;
    cin.get();
    return 0;

}

