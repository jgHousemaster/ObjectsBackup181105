#include <iostream>
using namespace std;

class BaseClass
{
public:
	int Number;
	BaseClass(int i)
	{
		cout<<"Construct has been called!"<<endl;
	}
	~BaseClass()
	{
		cout<<"Destruct has been called!"<<endl;
	}
};

class DerivedClass:public BaseClass
{
public:
	DerivedClass(int a):BaseClass(a)
	{}
};

int main()
{
	DerivedClass no1(2);
	return 0;
}