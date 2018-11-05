#include <math.h>
#include <iostream>
using namespace std;

class shape
{
public:
    shape(){}
    virtual void area()=0;
    virtual void per()=0;
    virtual void display()=0;
};

class circle:public shape
{
public:
    circle(int r1):r(r1){}
    int r;
    void display()
    {
        cout<<"Please input R of the circle:";
        cin>>r;
    }
    void area()
    {
        cout<<"The area of the circle is:"<<3.14*r*r<<endl;
    }
    void per()
    {
        cout<<"The perimeter of the circle is:"<<2*3.14*r<<"\n"<<endl;
    }
};

class rectangle:public shape
{
public:
    rectangle(int a1,int b1):a(a1),b(b1){}
    int a,b;
    void display()
    {
        cout<<"Please input A and B of the rectangle:";
        cin>>a>>b;
    }
    void area()
    {
        cout<<"The area of the rectangle is:"<<a*b<<endl;
    }
    void per()
    {
        cout<<"The perimeter of the rectangle is:"<<2*(a+b)<<"\n"<<endl;
    }
};

class triangle:public shape
{
public:
    triangle(int l1,int m1,int n1):l(l1),m(m1),n(n1){}
    int l,m,n;
    void display()
    {
        cout<<"Please input L&M&N of the tirangle:";
        cin>>l>>m>>n;
    }
    void area()
    {
        float p,ss;
        p=(l+m+n)/2;
        ss=p*(p-l)*(p-m)*(p-n);
        cout<<"The area of the triangle is:" <<sqrt(ss)<<endl;
    }
    void per()
    {
        cout<<"The perimeter of the triangle is:"<<l+m+n<<"\n"<<endl;
    }
};

void areas(shape *ptrA)
{
    ptrA->area();
}
void pers(shape *ptrP)
{
    ptrP->per();
}

int main()
{
    circle C(0);
    rectangle R(0,0);
    triangle T(0,0,0);
    int r,a,b,l,m,n;
    C.display();areas(&C);pers(&C);
    R.display();areas(&R);pers(&R);
    T.display();areas(&T);pers(&T);
    return 0;
}