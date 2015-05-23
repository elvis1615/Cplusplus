#include <iostream>
#include <conio.h> // funcion para sustituir el pause y ya no necesito los \n

using namespace std;

int main()
{
    float num=2.567;
    float num2=1.3;

    cout<<"El numero es  "<<num<<endl;
    cout<<"El numero2 es  "<<num2<<endl;
     cout<<"la suma es  "<<num+num2<<endl;
// impide q se cierre el prgrama como system("PAUSE")
    getch();
    return 0;
}
