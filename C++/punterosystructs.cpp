# include <iostream>

using namespace std;

//estructura
struct miestructura
{
    int a;
} miEstructura,*puntero;

int main()
{
    miEstructura.a=12;
    puntero=&miEstructura;
// obtubo la direccion de mi estructura y la puos en pantalla
    cout <<puntero<<endl;
    // direccion de la estructura = a la direccion de la variable
    cout<<&miEstructura.a<<endl;
    //obtengo el valor almacenado dela variable
    cout<< puntero->a<<endl;
    cin.get();
    return 0;

}
