#include <iostream>
using namespace std;

class point
{
public:
	point(int xx=0,int yy=0):_x(xx),_y(yy){}
	point operator ++();
	point operator ++(int);
	point operator --();
	point operator --(int);
private:
	int _x,_y;
};

point point::operator ++()
{
	_x+=1;_y+=1;
	cout<<"++(x,y)=("<<_x<<","<<_y<<")"<<endl;
	return point(_x+=1,_y+=1);
}
point point::operator ++(int)
{
	int x1=_x,y1=_y;
	cout<<"(x,y)++=("<<x1<<","<<y1<<")"<<endl;
	_x+=1;_y+=1;
	return point(x1,y1);
}
point point::operator --()
{
	_x-=1;_y-=1;
	cout<<"--(x,y)=("<<_x<<","<<_y<<")"<<endl;
	return point(_x-=1,_y-=1);
}
point point::operator --(int)
{
	int x1=_x,y1=_y;
	cout<<"(x,y)--=("<<x1<<","<<y1<<")"<<endl;
	_x-=1;_y-=1;
	return point(x1,y1);
}


void main()
{
	int x,y;
	cin>>x>>y;
	point p(x,y),p1=p,p2=p,p3=p,p4=p,q1,q2,q3,q4;
	q1=++p1;
	q2=p2++;
	q3=--p3;
	q4=p4--;
}