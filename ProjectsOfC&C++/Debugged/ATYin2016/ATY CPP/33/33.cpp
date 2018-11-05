#include <iostream>
#include <cmath>
using namespace std ;

int main()
{int x,y,con;
cout<<"请输入底数X和指数Y(以空格隔开):";
cin>>x>>y;
con=pow(x,y);
cout<<x<<"的"<<y<<"次方为:"<<con<<endl;
}