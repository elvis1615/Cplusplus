#include <iostream>

using namespace std;

int main()
{
    char c;
    cout<<"Escribe una letra"<<endl;

    //sirve para recibir del teclado
    // lo que el usuario escribe se guarda en la variable cuyo identificador esta
    //despues de >>
    cin>>c;
    switch(c)
    {
        case 'a' :
        case 'e' :
        case 'i' :
        case 'o' :
        case 'u' :
            cout <<"es una vocal \n"<< endl;
            break;
        //cuando no cumple
        default:
            cout <<"es consonante \n"<< endl;

    }

    cin.get();
    return 0;
}
