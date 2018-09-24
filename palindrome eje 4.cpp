#include <iostream>

using namespace std;

bool prim(int a )
{
    int b,c,d;
    d=0;b=2;c=2;
    while (b<a)
    {
        if (a%b==0)
            d=1;
         if (d==1){
            b=a;
            return 0;
        }
        b=b+1;
    }
    if (d==0)
        return 1;
}

int multi(int a)
{
    int b=0,o=2,z=1,x,y;
    x=a;
    y=prim(a);
    if (y==0)
    {
        while (b<3)
        {
            if (a%o==0 )
            {
                z=z*o;
                a=a/o;
                if ((z/100)>0 && (z/100)<=9)
                    cout<<z<<" * "<<a<<" = "<<x;
                o=2;
                b++;
            }
            else o++;
        }
}
    else{
        cout<<x<<" *  1 = "<<x;
    }

}

int main()
{
    int a,b=0,c;
    cout<<"ingrese su numero: ";
    cin>>a;
    multi(a);
}
