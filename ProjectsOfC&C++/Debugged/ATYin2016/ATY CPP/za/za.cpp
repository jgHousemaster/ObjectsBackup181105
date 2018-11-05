#include <iostream>
using namespace std;

void delay(int x)
{
    while(x)
    {
        x--;
    }
}

int main()
{
    char a=1,i;
    for(i=0;;i++)
    {
        cout<<a;
        a++;
    }
}