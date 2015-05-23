#include <stdio.h>//entrada y salida
#include <stdlib.h>// libreria standar para system

int main()
{
    char nom[20]; //declaro un vector char que almacena  char
    printf("Como te llamas: ");
    //%f float ,%s string %c chat %d Decimal
    scanf("%s",&nom);//leyendo datos y asigna a la variable
    printf("Hola %s",nom);
    // concatena en el lugar donde aparece el modificador
    printf("Hola %s gusto en conocerte",nom);
    return 0;
    // para paralizar el prrograma si no corre de largo  y desaparecera
    system("PAUSE");
}
