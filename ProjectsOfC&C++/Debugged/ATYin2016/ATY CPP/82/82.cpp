#include <iostream>
using namespace std;

class car
{
public:
	int MaxSpeed;
	int Weight;
	car(){cout<<"Construct of car has been called!"<<endl;}
	~car(){cout<<"Destruct of car has been called!"<<endl;}
	virtual void Run(){cout<<"\nCar Run!"<<endl;}
	virtual void Stop(){cout<<"\nCar Stoped!\n"<<endl;}
};

class bicycle:virtual public car
{
public:
	bicycle(){cout<<"Construct of bicycle has been called!"<<endl;}
	~bicycle(){cout<<"Destruct of bicycle has been called!"<<endl;}
	int Height;
    virtual void Run(){cout<<"\nBicycle Run!"<<endl;}
    virtual void Stop(){cout<<"\nBicycle Stoped!\n"<<endl;}
};

class motocar:virtual public car
{
public:
	motocar(){cout<<"Construct of motocar has been called!"<<endl;}
	~motocar(){cout<<"Destruct of motocar has been called!"<<endl;}
	int SeatNum;
    virtual void Run(){cout<<"\nMotocar Run!"<<endl;}
	virtual void Stop(){cout<<"\nMotocar Stoped!\n"<<endl;}
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
		cout<<MaxSpeed<<"\t    "<<Weight<<"\t      "<<Height<<"\t        "<<SeatNum<<endl;
	}
    virtual void Run(){cout<<"\nMotocycle Run!"<<endl;}
    virtual void Stop(){cout<<"\nMotocycle Stoped!\n"<<endl;}
};

int main()
{
	motocycle c1;
	c1.Run();
	cout<<"\n"<<"MaxSpeed    "<<"Weight    "<<"Height    "<<"SeatNum"<<endl;
	c1.Show(2,4,6,8);
	c1.Stop();
	return 0;
}

