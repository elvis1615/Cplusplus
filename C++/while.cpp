#include <iostream>

using namespace std;

int main()
{
    int i=0;
    int i2=10;

    while(i<=5)
        {
        cout<<"el valor es "<<i<<endl;
        i++;
        }
    do
        {
        cout<<"el valor es "<<i2<<endl;
        i++;
        }
    while(i2<5);

    cin.get();
    return 0;
}
