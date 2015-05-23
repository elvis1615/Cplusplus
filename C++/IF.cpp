#include <iostream>

using namespace std;

int numero1=12;
int numero2=14;
bool hola = true;

int main()
{
    if(numero1==numero2)
        {
        cout<<"es menor"<<endl;
        }
    else if(hola==false && !(numero1<numero2))
        {
        cout<<"es mayor o igual";
        }
    else
        {
        cout<<"ningun caso"<< endl;
        }

    cin.getch();
    return 0;
}
