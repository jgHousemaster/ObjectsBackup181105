#include <iostream>
using namespace std ;

int fib(int n);
int main()
{int n,cons;
cout<<"Please input n:";
cin>>n;
cons=fib(n);
cout<<"Fibonacci is "<<cons<<endl;
}

int fib(int n)
{int Process;
if (n<3)
	return 1;
else 
	{Process=fib(n-2)+fib(n-1);
	return Process;}
}