#include <iostream>
#include <string>			//一定要包含string头文件（声明string变量）
using namespace std;


#define code "12345"
int main()
{
//	char codde;
	string codde;			//注意为string而不是char
	cout<<"Please input:";
	cin>>codde;
	if(codde==code)			//string可以直接用等号对比
		cout<<"Success!"<<endl;
	else
		cout<<"Failed!"<<endl;

	return 0;
}




int ex(int num,int sta)
{
	switch(num)
	{
	case 0:return sta*0;	//有return直接退出函数，不用break了。
	case 1:return sta*1;	//同时让函数的返回值有选择性。
	case 2:return sta*2;
	}
}