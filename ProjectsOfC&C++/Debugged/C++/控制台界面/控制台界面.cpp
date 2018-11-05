#include <iostream>
#include <string>
using namespace std;

#define Size 22
char Map[Size][Size][3];

class Init
{
public:
	//Init();
	//~Init();
	void InitMap();
	void ShowMap();

private:

};

void Init::InitMap()
{
	for (int i = 0; i < Size; i++)			//�����������ʼ��Ϊ���ֽڿո�
	{										//�������ʼ��������Ϊ�����һ�лᲢ���ڶ���
		for (int j = 0; j < Size; j++)
			strcpy(Map[i][j], "  ");
	}

	for (int i = 0; i < Size; i++)			//�����߿�
	{
		for (int j = 0; j < Size; j++)
		{
			if (i == 0)
			{
				if (j == 0)
					strcpy(Map[i][j],"�X");
				else if (j == Size - 1)
					strcpy(Map[i][j], "�[");
				else
					strcpy(Map[i][j], "�T");
			}
			if (i == Size - 1)
			{
				if (j == 0)
					strcpy(Map[i][j], "�^");
				else if (j == Size - 1)
					strcpy(Map[i][j], "�a");
				else
					strcpy(Map[i][j], "�T");
			}
			if (j == 0 && i != 0 && i != Size - 1)
				strcpy(Map[i][j], "�U");
			if (j == Size - 1 && i != 0 && i != Size - 1)
				strcpy(Map[i][j], "�U");
		}
	}
}

void Init::ShowMap()				//��ʾ��ͼ
{
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size; j++)
			cout << Map[i][j];
		cout << endl;
	}
}


int main()
{
	Init init1;
	init1.InitMap();
	init1.ShowMap();

	//char a[3];
	//strcpy(a,"�a");
	//cout << a;


	return 0;
}