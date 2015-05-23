#include "cabecera.h"
// sirve para sustituir palabras
//define seguido de la sustitucion
#define sumar(a,b) a+b // asi mandamos a llamar la macreo
#define mutiplicar(a,b) a*b // asi mandamos a multimplicar
#define dividir(a,b) a/b// macro para dividir

int numero=2;
int numero2=4;

int suma;
int mult;
int divid;

using namespace std;

int main()
{
    suma=sumar(numero,numero2);
    mult=mutiplicar(numero, numero2);
    divid=dividir(numero,numero2);

    cout<<"la suma es "<<suma<<endl;
    cout<<"el producto es "<<mult<<endl;
    cout<<"el cociente es "<<divid<<endl;
    cin.get();
    return 0;

}
