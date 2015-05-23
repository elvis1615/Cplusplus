#include <iostream>
#include <stdlib.h>

using namespace std;

char letra='d';
char letra2='hola';
//char* es como usar string almacena cadena de caraceres
char* letra3="hola mundo";

bool variable=false;
//almacena numericas pero retorna 1 si el valor es distinto de cero
bool variable1=32;
bool variable2=0;


int main()
{
    cout<<"\t"<<letra<<"\n\n"<<endl;
    //imprime solo el ultimo caracter
    cout<<"\t"<<letra2<<"\n\n"<<endl;
    // imprmir
    cout<<"\t"<<letra3<<"\n\n"<<endl;
    //imprime 1 o 0
    cout<<"\t"<<variable<<"\n\n"<<endl;
    cout<<"\t"<<variable1<<"\n\n"<<endl;
    cout<<"\t"<<variable2<<"\n\n"<<endl;
    system("PAUSE");
    return 0;
}
