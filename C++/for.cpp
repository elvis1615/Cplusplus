#include <iostream>

using namespace std;

int main()
{
     char c[5];
     c[0]='h';
     c[1]='o';
     c[2]='l';
     c[3]='a';
     c[4]='!';

     for(int i=0;i<5;i++)
        {
        cout << c[i];
        }
    //se puede cerrar la linea despues de las iteraciones
     cout<<endl;

     cin.get();
    return 0;
}
