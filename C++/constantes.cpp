#include <iostream>
#include <conio.h>

//para q funcione cout
using namespace std;

//variable
int num=2;

const int num2=12;

int main()
{
    num=32;
    cout<<"variable es  "<<num<<endl;
    // si la intento cambiar da nullpointer
    //num2=22;
    cout<<"constante es  "<<num2<<endl;

    getch();
    return 0;
}
