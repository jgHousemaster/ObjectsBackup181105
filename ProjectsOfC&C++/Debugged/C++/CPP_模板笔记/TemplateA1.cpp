#include <iostream>
#include <string>
using namespace std;

//模板主要为了让一个函数或类使用多种！！数据类型！！

/*
//////////////////////函数模板////////////////////////////////////
template <class T>		//可以讲从class替换为typename
T max(T a, T b)			//error C2951: 模板 声明只能在全局、命名空间或类范围内使用
{
	return (a > b) ? a : b;
}
//////////////////////////////////////////////////////////////////
template <int t>		//有参数的函数模板
void display1()
{
	cout << t << endl;
}
//////////////////////////////////////////////////////////////////
template <typename C,typename D>	//typename和class可以混用
void display2(C c, D d)
{
	cout << c << "      " << d << endl;
}
//////////////////////////////////////////////////////////////////
template <class Q,int P>			//Q为类型，P为变量
void displayQ(Q q)
{
	for (int i = 0; i < P; i++)
		cout << q << endl;
}
//////////////////////////////////////////////////////////////////


int main()
{
//////////////////////////////////////////////////////////////////
	int a = max(100, 90);
	char b = max<char>('a', 'b');//强制使用char类型
	cout << a << endl;
	cout << b << endl;
//////////////////////////////////////////////////////////////////
	display1<10>();		//调用参数函数模板，赋予其为10
//////////////////////////////////////////////////////////////////
	int c = 1024; string str = "hello";
	display2<int, string>(c, str);//必须将类型指定出来
//////////////////////////////////////////////////////////////////
	displayQ<int, 5>(15);
//////////////////////////////////////////////////////////////////

	return 0;
}//函数模板可以重载（模板的参数）
*/

/*
/////////////////函数模板实例：交换两个任意类型数据////////////////
template <typename T>
void display(T a, T b)
{
	cout << a << "		" << b << endl;
	T t = a; a = b; b = t;
	cout << a << "		" << b << endl;
}
int main()
{
	display('a', 'z');	//可以不强制类型，让系统自己判断
	return 0;
}
*/

/*
///////////////////////////类模板////////////////////////////////////
template <typename T,int t>
class MyClass
{
public:
	void display(char a);
private:
	T m_C;
};

template <typename T,int t>		//在类外定义函数前必须加上这句,在类内定义不用
void MyClass<T,t>::display(char a)	//类外定义函数必须有<T,t>说明
{
	m_C = a;
	for (int i = 0; i < t; i++, m_C++)
		cout << m_C << endl;
}

int main()
{
	MyClass<char,5> CC;			//实例化类时要加上<>参数列表
	CC.display('a');

	return 0;
}
//注意：模板代码必须要放在一个文件中，不能跨文件编译，例如类模板的声明在1.h中，则函数定义或其他也必须在1.h中,不能在2.h或1.cpp中
*/









