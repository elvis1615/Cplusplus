#include <iostream>
#include <cstdlib>

using namespace std;
// declara una clase
class  Fecha
{
    private:
        int d,m,a;// atributos
    public :
        Fecha(int,int,int);//constructor
        void cambiaFecha(int,int,int);//metodo
        void imprimeFecha(void);//metodo
};
// implementacion
Fecha::Fecha(int dd,int mm,int aaaa)
{
    d=dd;
    m=mm;
    a=aaaa;
}

void Fecha::cambiaFecha(int dia,int mes,int an)
{
    d=dia;
    m=mes;
    a=an;
}

void Fecha::imprimeFecha(void)
{
cout <<"\n la fecha es: \n"<<d<<"/"<<m<<"/"<<a<<endl;
}

int main()
{
    Fecha martes(7,5,14);// objeto de la clase fecha
    martes.imprimeFecha();
    martes.cambiaFecha(14,2,2015);
    martes.imprimeFecha();


    cin.get();
    return 0;
}
