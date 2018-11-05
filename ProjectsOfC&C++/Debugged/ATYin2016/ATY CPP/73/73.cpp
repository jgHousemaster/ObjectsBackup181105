#include <iostream>
using namespace std;

class car
{
public:
	int MaxSpeed;
	int Weight;
	car(){cout<<"Construct of car has been called!"<<endl;}
	~car(){cout<<"Destruct of car has been called!"<<endl;}
	void Run(){cout<<"Run!"<<endl;}
	void Stop(){cout<<"Stoped!"<<endl;}
};

class bicycle:virtual public car
{
public:
	bicycle(){cout<<"Construct of bicycle has been called!"<<endl;}
	~bicycle(){cout<<"Destruct of bicycle has been called!"<<endl;}
	int Height;
};

class motocar:virtual public car
{
public:
	motocar(){cout<<"Construct of motocar has been called!"<<endl;}
	~motocar(){cout<<"Destruct of motocar has been called!"<<endl;}
	int SeatNum;
};

class motocycle:public bicycle,public motocar
{
public:
	motocycle(){cout<<"Construct of motocycle has been called!"<<endl;}
	~motocycle(){cout<<"Destruct of motocycle has been called!"<<endl;}
	void Show(int a,int b,int c,int d)
	{
		MaxSpeed=a;
		Weight=b;
		Height=c;
		SeatNum=d;
		cout<<MaxSpeed<<"\t    "<<Weight<<"\t      "<<Height<<"\t        "<<SeatNum<<"\n\n"<<endl;
	}
};

int main()
{
	motocycle c1;
	cout<<"\n\n"<<"MaxSpeed    "<<"Weight    "<<"Height    "<<"SeatNum"<<endl;
	c1.Show(2,4,6,8);
	return 0;
}