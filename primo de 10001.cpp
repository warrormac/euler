#include <iostream>

using namespace std;


bool prim(int a )
{
    int d=0, b=2, c=2;
    while (b<a)
    {
        if (a%b==0)
        {
            d=1;
        }
         if (d==1){
            b=a;
            return false;
        }


        b=b+1;


    }
    if (d==0)
        {
            return true;
        }

}



int main()
{
    int b=1,c;
    int a=10001;
    while (b<a)
    {
       c=prim(b);
       if (c==1)
        cout<<b<<"\n";

       b++;
    }




}
