#include <iostream>
using namespace std;

class CExption
{
public:
    void Reason(int x)
    {
        if(x==2)
            cout<<"Your input is not  within 0-9!\n\nPlease input a number(0--9):";
        else if(x==1)
            cout<<"Your input is not a number!\n\nPlease input a number(0--9):";
    }
};

void fn1()
{
    char y[10]={'\0'},n;
    cin>>y;
    if(y[0]>=48&&y[0]<=57&&y[1]=='\0')
        cout<<"The number you input is:"<<y<<"\n"<<endl;
    else if(y[0]<48||y[0]>57)
        throw 1;
    else if(y[1])
        throw 2;
}

int main()
{
    CExption E;
    int e;
    cout<<"Please input a number(0--9):";
    do
    {
        e=0;
        try
        {
            fn1();
        }
        catch(int j)
        {
            E.Reason(j);
            e=j;
        }
    }while(e);
    return 0;
}