#include <iostream>

using namespace std;

bool comprobador;

int numero1,numero2,numero3,numero4;
cout<<"valor"<<comprobador<<endl;


int main()
{
    numero1=12;
    numero2=20;
    numero3=4;
    numero4=13;
    //and
    comprobador=(numero4>numero1 && numero3<numero2);

    cout<<"valor"<<comprobador<<endl;
    //or
    comprobador=(numero4>numero1 || numero3>numero2);

    cout<<"valor"<<comprobador<<endl;

    // not
     comprobador=!(numero4>numero1);

    cout<<"valor"<<comprobador<<endl;

    // para q no se cierre la pantalla
    cin.get();
    return 0;
}
