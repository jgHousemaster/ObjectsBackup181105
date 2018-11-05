#include <iostream>
using namespace std;

class Animal
{
public:
	int age;
};

class dog:virtual public Animal
{
public:
	void SetAge(int n)
	{age=n;
	cout<<age<<endl;}
};

void main()
{
	int i=2;
	dog d;
	d.SetAge(i);
}

