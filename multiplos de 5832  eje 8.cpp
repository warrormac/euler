#include <iostream>

using namespace std;

int main()
{
    int a=2,o=5832,z=1,b=1;
    while (b!=-1)
    {
        if (o%a==0 )
        {
            z=z*a;
            cout<<a<<"*";
            o=o/a;
            a=2;
        }

        else a++;


        if (o==1)
            break;
        b++;
    }
    cout<<"1= "<<o;
}
