#include <iostream>

using namespace std;

int div(int a)
{
    int b=1;
    while (b<=20)
    {
        if (a%b!=0)
        {
            a++;
            b=1;
        }
        b++;

    }
    cout<<a;

}
int main()
{
    int a=2520;
    div(a);
}
