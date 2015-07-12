#include "Matriz.h"


int main()
{
    matrizOrtogonal* matriz;
    matriz= new matrizOrtogonal();

    matriz->llenar(3,3);
    int dato=matriz->l->busqueda(0)->Filas->primero->abajo->derecha->dato;
    cout<<dato<<endl;



}
