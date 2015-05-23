
#include <iostream>
#include <conio.h>

using namespace std;

bool comprobador;
int numero1= 12;
int numero2=12;

int main()
{
    comprobador=(numero1== numero2);
    cout<<"valor"<<comprobador<<endl;
    comprobador=(numero1!= numero2);
    cout<<"valor"<<comprobador<<endl;
    comprobador=(numero1< numero2);
    cout<<"valor"<<comprobador<<endl;
    comprobador=(numero1 > numero2);
    cout<<"valor"<<comprobador<<endl;
    comprobador=(numero1<= numero2);
    cout<<"valor"<<comprobador<<endl;
    comprobador=(numero1 >= numero2);
    cout<<"valor"<<comprobador<<endl;

    getch();
    return 0;
}
