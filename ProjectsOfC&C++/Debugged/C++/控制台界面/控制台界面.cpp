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
	for (int i = 0; i < Size; i++)			//给整个数组初始化为两字节空格
	{										//如果不初始化，数组为空最后一列会并到第二列
		for (int j = 0; j < Size; j++)
			strcpy(Map[i][j], "  ");
	}

	for (int i = 0; i < Size; i++)			//画出边框
	{
		for (int j = 0; j < Size; j++)
		{
			if (i == 0)
			{
				if (j == 0)
					strcpy(Map[i][j],"╔");
				else if (j == Size - 1)
					strcpy(Map[i][j], "╗");
				else
					strcpy(Map[i][j], "═");
			}
			if (i == Size - 1)
			{
				if (j == 0)
					strcpy(Map[i][j], "╚");
				else if (j == Size - 1)
					strcpy(Map[i][j], "╝");
				else
					strcpy(Map[i][j], "═");
			}
			if (j == 0 && i != 0 && i != Size - 1)
				strcpy(Map[i][j], "║");
			if (j == Size - 1 && i != 0 && i != Size - 1)
				strcpy(Map[i][j], "║");
		}
	}
}

void Init::ShowMap()				//显示地图
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
	//strcpy(a,"╝");
	//cout << a;


	return 0;
}