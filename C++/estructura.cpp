#include <iostream>

using namespace std;

int main()
{
    // es aproximadamete una clase
    struct hogar
    {
        int numeroDireccion;
        int numeroTel;
        // constructor de struct
        hogar()
        {
        numeroDireccion=0;
        numeroTel=2;
        }
        // funcion de struct
        int verDir()
        {
            return numeroDireccion;
        }

        int guardarDir(int a)
        {
        numeroDireccion=a;
        //return 0;
        }

    }Fernandez,Gonzalez, Perez;

    Fernandez.numeroTel=1034;
    Fernandez.numeroDireccion=324;

    Gonzalez= Fernandez;
    cout<<Gonzalez.numeroTel<<endl;
    cout<<Perez.numeroTel<<endl;

    Perez.guardarDir(156);
    cout<<Perez.verDir()<<endl;



    cin.get();
    return 0;
}
