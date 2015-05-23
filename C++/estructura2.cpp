#include <iostream>

using namespace std;

int main()
{
    //en c es necesario struct en c++ no
    struct personaje
    {
        int edad;
        int tel;
    }Elvis;// hasta aca se crea la estructura
    Elvis.edad=21;
    Elvis.tel= 23154687;



    cout<<Elvis.edad<<endl;
    cin.get();
    return 0;
}
