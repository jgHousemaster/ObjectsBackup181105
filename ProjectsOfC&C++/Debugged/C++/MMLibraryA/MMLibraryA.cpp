#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class StrLibrary
{
public:
	string Name;
	string Password;

	void MENU();
	void REGIST(int i);					//注册
	void LOGIN();
	void CHANGE(){}

	void CHOISE(int i);
	void GETFILE();						//从文件读取信息
};

#define DELAY 600000000
#define L 25							//数据库总大小
static StrLibrary StrLib[L];
static int I = 0;						//数据库现有数据个数

void StrLibrary::MENU()
{
	StrLibrary o_Menu;
	int CH;
	cout << "\n\n1.登陆\t2.注册\n\n3.修改\t0.退出";
	cout << "\n\n请输入您要选择的操作:";
	cin >> CH;

	o_Menu.GETFILE();					//及时从文件刷新数据（到内存里）

	if (I <= 0)							//数据库为空，文件为空
	{
		if (CH != 2 && CH != 0)
		{
			cout << "\n\nThe Library is empty,Please regist.";
			o_Menu.MENU();
		}
	}

	system("cls");
	o_Menu.CHOISE(CH);
}

void StrLibrary::REGIST(int i)
{
	StrLibrary o_Reg;
	string NameP, PasswordP;			//暂时使用的string
	cout << "\n\nPlease input your infomation.";
	cout << "\n\nName:";
	cin >> NameP;
	StrLib[i].Name = NameP;				//将输入的数据储存到内存中，然后储存到文件中
	cout << "\nPassword:";
	cin >> PasswordP;
	StrLib[i].Password = PasswordP;
	I++;

	ofstream FileA("InfoLibrary.txt");
	for (int i = 0; i < I; i++)			//将刚刚输入的储存到文件中
	{
		FileA << StrLib[i].Name << "\n";
		FileA << StrLib[i].Password << "\n";
	}
	FileA.close();

	o_Reg.MENU();
}

void StrLibrary::LOGIN()
{
	StrLibrary o_Log;
	string NameQ, PasswordQ;			//暂时使用的数据
	int Flag = 0;

	cout << "\n\nPlease input your infomation.";
	cout << "\n\nName:";
	cin >> NameQ;
	cout << "\nPassword:";
	cin >> PasswordQ;

	for (int i = 0; i < I; i++)			//主要判别代码！！！！！！！！！！！
	{
		if (StrLib[i].Name == NameQ)
		{
			Flag = 0;
			if (StrLib[i].Password == PasswordQ)
			{
				cout << "\n\nWelcom!\n\n\n";
				Flag = 0;
				exit(0);
			}
			else
			{
				Flag = 2;
			}
		}
		else
		{
			Flag = 1;
		}
	}

	if (Flag == 1)
	{
		system("cls");
		cout << "\n\nName Wrong!";
		for (int i = 0; i < DELAY; i++){}
		system("cls");
		o_Log.MENU();
	}
	else if (Flag == 2)
	{
		system("cls");
		cout << "\n\nPassword Wrong!";
		for (int i = 0; i < DELAY; i++){}
		system("cls");
		o_Log.MENU();
	}
}

void StrLibrary::CHOISE(int i)
{
	StrLibrary o_Ch;
	switch (i)
	{
	case 1:
	{
			  system("cls");
			  o_Ch.GETFILE();		//随时从文件更新，实现刚注册就可以登陆的功能			
			  o_Ch.LOGIN();
			  break;
	}
	case 2:
	{
			  system("cls");
			  o_Ch.GETFILE();
			  o_Ch.REGIST(I);
			  break;
	}
	case 0:
		exit(0);
	}
}

void StrLibrary::GETFILE()
{
	StrLibrary o_GF;
	ifstream FileB;
	int Count = 0; string C;
	int j = 0, i = 0;

	FileB.open("InfoLibrary.txt", ios_base::in);
	while (getline(FileB, C))		//统计行数
		Count++;
	I = Count / 2;
	FileB.close();

	FileB.open("InfoLibrary.txt", ios_base::in);
	while (getline(FileB, StrLib[i].Name) && j < 1 + (2 * i))
	{								//从文件导入用户名
		j++;
		if (j == 1 + (2 * i))
			i++;
		if (i == (Count / 2))
			break;
	}
	j = 0;
	i = 0;
	FileB.close();

	FileB.open("InfoLibrary.txt", ios_base::in);
	while (getline(FileB, StrLib[i].Password) && j < 2 + (2 * i))
	{								//导入密码
		j++;
		if (j == 2 + (2 * i))
			i++;
		if (i == (Count / 2))
			break;
	}
	j = 0;
	i = 0;
	FileB.close();

/*	for (int i = 0; i < Count / 2; i++)					//显示库内现有数据
		cout <<i<<"Count is" << Count / 2 << "\t" << StrLib[i].Name << "\t" << StrLib[i].Password << endl;*/
}

int main()
{
	StrLibrary Lib;
	Lib.MENU();

	return 0;
}