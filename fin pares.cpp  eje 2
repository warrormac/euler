#include <iostream>

using namespace std;


int fib(int a, int b, int c, int d)
{
    cout<<d<<":  "<<b<<"\n";
    d++;
    while(d<a)
    {
        b=c+b;
        if (b%2==0)
            cout<<d<<":  "<<b<<"\n";
        d++;
        c=c+b;
        if (c%2==0)
            cout<<d<<":  "<<c<<"\n";
        d++;
    }
}
int main()
{
    int a,b,c,d;
    cout<<"ingrese su numero:";cin>>a;
    b=0;
    c=1;
    d=0;
    fib(a,b,c,d);

}
