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
	void REGIST(int i);					//ע��
	void LOGIN();
	void CHANGE(){}

	void CHOISE(int i);
	void GETFILE();						//���ļ���ȡ��Ϣ
};

#define DELAY 600000000
#define L 25							//���ݿ��ܴ�С
static StrLibrary StrLib[L];
static int I = 0;						//���ݿ��������ݸ���

void StrLibrary::MENU()
{
	StrLibrary o_Menu;
	int CH;
	cout << "\n\n1.��½\t2.ע��\n\n3.�޸�\t0.�˳�";
	cout << "\n\n��������Ҫѡ��Ĳ���:";
	cin >> CH;

	o_Menu.GETFILE();					//��ʱ���ļ�ˢ�����ݣ����ڴ��

	if (I <= 0)							//���ݿ�Ϊ�գ��ļ�Ϊ��
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
	string NameP, PasswordP;			//��ʱʹ�õ�string
	cout << "\n\nPlease input your infomation.";
	cout << "\n\nName:";
	cin >> NameP;
	StrLib[i].Name = NameP;				//����������ݴ��浽�ڴ��У�Ȼ�󴢴浽�ļ���
	cout << "\nPassword:";
	cin >> PasswordP;
	StrLib[i].Password = PasswordP;
	I++;

	ofstream FileA("InfoLibrary.txt");
	for (int i = 0; i < I; i++)			//���ո�����Ĵ��浽�ļ���
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
	string NameQ, PasswordQ;			//��ʱʹ�õ�����
	int Flag = 0;

	cout << "\n\nPlease input your infomation.";
	cout << "\n\nName:";
	cin >> NameQ;
	cout << "\nPassword:";
	cin >> PasswordQ;

	for (int i = 0; i < I; i++)			//��Ҫ�б���룡��������������������
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
			  o_Ch.GETFILE();		//��ʱ���ļ����£�ʵ�ָ�ע��Ϳ��Ե�½�Ĺ���			
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
	while (getline(FileB, C))		//ͳ������
		Count++;
	I = Count / 2;
	FileB.close();

	FileB.open("InfoLibrary.txt", ios_base::in);
	while (getline(FileB, StrLib[i].Name) && j < 1 + (2 * i))
	{								//���ļ������û���
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
	{								//��������
		j++;
		if (j == 2 + (2 * i))
			i++;
		if (i == (Count / 2))
			break;
	}
	j = 0;
	i = 0;
	FileB.close();

/*	for (int i = 0; i < Count / 2; i++)					//��ʾ������������
		cout <<i<<"Count is" << Count / 2 << "\t" << StrLib[i].Name << "\t" << StrLib[i].Password << endl;*/
}

int main()
{
	StrLibrary Lib;
	Lib.MENU();

	return 0;
}