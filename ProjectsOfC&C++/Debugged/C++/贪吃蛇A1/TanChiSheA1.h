/*Using VS2017

主要思路为用一个二维数组铺地图
另一数组记录蛇身体各部分的坐标
（第三个维度为每个二维空间大小）

瑕疵1：吃到食物后要走两步后才会变长
改过数组坐标后上面瑕疵1解决

一定注意snakeBody[][]第一个值
不要用snakeLarge+i，因为i=snakeLarge+2了，直接用i即可

瑕疵2：屏幕闪烁问题（已用gotoxy()解决）
瑕疵3：碰到自身GameOver延迟一次的问题
瑕疵4：自动行走有一格延迟，下一版本再说
*/

#ifndef TCSH_H
#define TCSH_H

#include <iostream>
#include <cstdlib>
#include <conio.h>
#include <ctime>
#include <Windows.h>
using namespace std;

#define Size 28
char Map[Size][Size+12][3];
char Food[3];
int Direction = 2;			//1234上下左右
int snakeLarge = 0;
int snakeBody[10000][2];	//蛇的身体
int foodRandX_New = rand() % (Size - 2) + 1;
int foodRandY_New = rand() % (Size - 2) + 1;
int foodRandX_Old;
int foodRandY_Old;

class Init
{
public:
	//Init();
	//~Init();
	void InitMapBegin();
	void ShowMap();
	void InitScore();
	void InitFood(bool eat);
	void InitSnake();

private:
	int i = 1;
	int ii = 2;
};
class Operation
{
public:
	//Operation();
	//~Operation();
	void Move(int dir);
	void SnakeRules(bool food);
	void JudgeFood();
	void JudgeSelf(int dir);
	void JudgeWall();
	void GameOver();

private:
	
};


void Init::InitMapBegin()
{
	for (int i = 0; i < Size; i++)			//给整个数组初始化为两字节空格
	{										//如果不初始化，数组为空最后一列会并到第二列
		for (int j = 0; j < Size + 12; j++)
			strcpy_s(Map[i][j], "  ");
	}

	for (int i = 0; i < Size; i++)			//画出边框
	{
		for (int j = 0; j < Size; j++)
		{
			if (i == 0)
			{
				if (j == 0)
					strcpy_s(Map[i][j], "╔");
				else if (j == Size - 1)
					strcpy_s(Map[i][j], "╗");
				else
					strcpy_s(Map[i][j], "═");
			}
			if (i == Size - 1)
			{
				if (j == 0)
					strcpy_s(Map[i][j], "╚");
				else if (j == Size - 1)
					strcpy_s(Map[i][j], "╝");
				else
					strcpy_s(Map[i][j], "═");
			}
			if (j == 0 && i != 0 && i != Size - 1)
				strcpy_s(Map[i][j], "║");
			if (j == Size - 1 && i != 0 && i != Size - 1)
				strcpy_s(Map[i][j], "║");
		}
	}
}
void Init::ShowMap()
{
	for (int i = 0; i < Size; i++)
	{
		for (int j = 0; j < Size + 12; j++)
			cout << Map[i][j];
		cout << endl;
	}
}
void Init::InitScore()
{
	strcpy_s(Map[5][Size + 2], "贪");
	strcpy_s(Map[5][Size + 3], "吃");
	strcpy_s(Map[5][Size + 4], "蛇");
	strcpy_s(Map[5][Size + 5], "A1");
	strcpy_s(Map[5][Size + 6], ".0");
	
	strcpy_s(Map[7][Size + 2], "By");
	strcpy_s(Map[7][Size + 3], ":M");
	strcpy_s(Map[7][Size + 4], ".X");
	strcpy_s(Map[7][Size + 5], "Y ");

	strcpy_s(Map[12][Size + 2], "Sc");
	strcpy_s(Map[12][Size + 3], "or");
	strcpy_s(Map[12][Size + 4], "e:");
	//*Map[12][Size + 5] = '0' + snakeLarge;	//给字符型数组赋整型值（已由新方法解决）
	strcpy_s(Map[12][Size + 5], "0 ");

	strcpy_s(Map[16][Size + 2], "Q ");
	strcpy_s(Map[16][Size + 3], ": ");
	strcpy_s(Map[16][Size + 4], "退");
	strcpy_s(Map[16][Size + 5], "出");

	strcpy_s(Map[18][Size + 2], "P ");
	strcpy_s(Map[18][Size + 3], ": ");
	strcpy_s(Map[18][Size + 4], "暂");
	strcpy_s(Map[18][Size + 5], "停");

	strcpy_s(Map[20][Size + 2], "N ");
	strcpy_s(Map[20][Size + 3], ": ");
	strcpy_s(Map[20][Size + 4], "重");
	strcpy_s(Map[20][Size + 5], "新");
	strcpy_s(Map[20][Size + 6], "开");
	strcpy_s(Map[20][Size + 7], "始");


}
void Init::InitFood(bool eat)
{
	strcpy_s(Food, "[]");
	foodRandX_Old = foodRandX_New;
	foodRandY_Old = foodRandY_New;

	if (eat == true)
	{
		i = time(0);
		ii = i * i;
		//strcpy_s(Map[foodRandX_Old][foodRandY_Old], "  ");
		srand(i);										//用系统时间产生随机数
		foodRandX_New = rand() % (Size - 2) + 1;		//1-(Size-2)的随机数
		srand(ii);
		foodRandY_New = rand() % (Size - 2) + 1;
	}
	//strcpy_s(Map[foodRandX_New][foodRandY_New], Food);		//(已由新方法解决)

	//for (int i = 0; i < 30; i++)
	//	cout << rand() % 26 + 1 << endl;
}
void Init::InitSnake()
{
	snakeBody[0][0] = 10;
	snakeBody[0][1] = 13;
	snakeBody[1][0] = snakeBody[0][0] - 1;
	snakeBody[1][1] = snakeBody[0][1];
	snakeBody[2][0] = snakeBody[0][0] - 2;
	snakeBody[2][1] = snakeBody[0][1];
	strcpy_s(Map[(snakeBody[0][0])][(snakeBody[0][1])], "■");
	strcpy_s(Map[(snakeBody[1][0])][(snakeBody[1][1])], "□");
	strcpy_s(Map[snakeBody[2][0]][snakeBody[2][1]], "  ");

	for (int i = 3; i < 100; i++)
	{
		snakeBody[i][0] = 0;
		snakeBody[i][1] = 0;
	}
	snakeLarge = 0;
}


void Operation::Move(int dir)		//主要功能函数
{
	JudgeSelf(dir);

	switch (dir)
	{
	case 72:
	{
		int i = snakeLarge + 2;
		//strcpy_s(Map[(snakeBody[i][0])][(snakeBody[i][1])], "  ");	//(已由新方法解决)
		for (; i > 0; i--)
		{
			snakeBody[i][0] = snakeBody[(i - 1)][0];
			snakeBody[i][1] = snakeBody[(i - 1)][1];
		}
		/*for (i = snakeLarge + 2; i > 0; i--)							//(已由新方法解决)
		{
			strcpy_s(Map[(snakeBody[i][0])][(snakeBody[i][1])], "□");
		}*/
		snakeBody[0][0] -= 1;
		//strcpy_s(Map[(snakeBody[0][0])][(snakeBody[0][1])], "■");	//(已由新方法解决)
		break;
	}
	case 80:
	{
		int i = snakeLarge + 2;
		//strcpy_s(Map[(snakeBody[i][0])][(snakeBody[i][1])], "  ");	//(已由新方法解决)
		for (; i > 0; i--)
		{
			snakeBody[i][0] = snakeBody[(i - 1)][0];
			snakeBody[i][1] = snakeBody[(i - 1)][1];
		}
		/*for (i = snakeLarge + 2; i > 0; i--)							//(已由新方法解决)
		{
			strcpy_s(Map[(snakeBody[i][0])][(snakeBody[i][1])],"□");
		}*/
		snakeBody[0][0] += 1;
		//strcpy_s(Map[(snakeBody[0][0])][(snakeBody[0][1])], "■");	//(已由新方法解决)
		break;
	}
	case 75:
	{
		int i = snakeLarge + 2;
		//strcpy_s(Map[(snakeBody[i][0])][(snakeBody[i][1])], "  ");
		for (; i > 0; i--)
		{
			snakeBody[i][0] = snakeBody[(i - 1)][0];
			snakeBody[i][1] = snakeBody[(i - 1)][1];
		}
		/*for (i = snakeLarge + 2; i > 0; i--)
		{
			strcpy_s(Map[(snakeBody[i][0])][(snakeBody[i][1])], "□");
		}*/
		snakeBody[0][1] -= 1;
		//strcpy_s(Map[(snakeBody[0][0])][(snakeBody[0][1])], "■");
		break;
	}
	case 77:
	{
		int i = snakeLarge + 2;
		//strcpy_s(Map[(snakeBody[i][0])][(snakeBody[i][1])], "  ");
		for (; i > 0; i--)
		{
			snakeBody[i][0] = snakeBody[(i - 1)][0];
			snakeBody[i][1] = snakeBody[(i - 1)][1];
		}
		//for (i = snakeLarge + 2; i > 0; i--)
		//{
		//	strcpy_s(Map[(snakeBody[i][0])][(snakeBody[i][1])], "□");
		//}
		snakeBody[0][1] += 1;
		//strcpy_s(Map[(snakeBody[0][0])][(snakeBody[0][1])], "■");
		break;
	}
	}
}
void Operation::SnakeRules(bool food)
{
	if (food == true)
	{
		snakeLarge += 1;
	}
}
void Operation::JudgeFood()
{
	Init initB3;

	if (snakeBody[0][0] == foodRandX_New && snakeBody[0][1] == foodRandY_New)
	{
		initB3.InitFood(true);
		SnakeRules(true);

		char color[9] = {"color 0"};		//变换颜色
		srand(time(0));
		int i = rand() % 9 + 1;
		color[7] = '0' + i;
		system(color);
	}
	else
	{
		initB3.InitFood(false);
		SnakeRules(false);
	}
}
void Operation::JudgeSelf(int dir)
{
	if (snakeBody[1][0] < snakeBody[0][0] && dir == 1)
		GameOver();
	if (snakeBody[1][0] > snakeBody[0][0] && dir == 2)
		GameOver();
	if (snakeBody[1][1] < snakeBody[0][1] && dir == 3)
		GameOver();
	if (snakeBody[1][1] > snakeBody[0][1] && dir == 4)
		GameOver();
	for (int i = 0; i < snakeLarge; i++)
	{
		if (snakeBody[0][0] == snakeBody[i + 3][0] && snakeBody[0][1] == snakeBody[i + 3][1])
			GameOver();
	}
}
void Operation::JudgeWall()
{
	if (snakeBody[0][0] == 0 || snakeBody[0][0] == Size - 1)
		GameOver();
	if (snakeBody[0][1] == 0 || snakeBody[0][1] == Size - 1)
		GameOver();
}
void ChoseA(int Ca);
void Operation::GameOver()
{
	Init initB4;
	system("cls");
	initB4.InitMapBegin();
	strcpy_s(Map[13][11], "Ga");
	strcpy_s(Map[13][12], "me");
	strcpy_s(Map[13][13], "  ");
	strcpy_s(Map[13][14], "Ov");
	strcpy_s(Map[13][15], "er");
	initB4.ShowMap();
	_getch();
	ChoseA(0);
}


void gotoxy(int x, int y)
{
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(hOut, pos);
}
void ChoseB(int Cb, bool B);
void ChoseA(int Ca)
{
	system("color 0A");
	Init initA;
	initA.InitSnake();
	system("cls");
	initA.InitMapBegin();

	strcpy_s(Map[8][10], "贪");
	strcpy_s(Map[8][11], "  ");
	strcpy_s(Map[8][12], "吃");
	strcpy_s(Map[8][13], "  ");
	strcpy_s(Map[8][14], "蛇");
	strcpy_s(Map[8][15], "  ");
	strcpy_s(Map[8][16], "A1");
	strcpy_s(Map[8][17], ".0");


	strcpy_s(Map[10][12], "By");
	strcpy_s(Map[10][13], ":M");
	strcpy_s(Map[10][14], ".X");
	strcpy_s(Map[10][15], "Y ");

	strcpy_s(Map[16][12], "1.");
	strcpy_s(Map[16][13], "开");
	strcpy_s(Map[16][14], "始");
	strcpy_s(Map[18][12], "2.");
	strcpy_s(Map[18][13], "退");
	strcpy_s(Map[18][14], "出");
	initA.ShowMap();

	Ca = _getch();
	if (Ca == 49)
		ChoseB(0, true);
	else if (Ca == 50)
	{
		system("cls");
		initA.InitMapBegin();

		strcpy_s(Map[12][8], "感");
		strcpy_s(Map[12][10], "谢");
		strcpy_s(Map[12][12], "您");
		strcpy_s(Map[12][14], "的");
		strcpy_s(Map[12][16], "使");
		strcpy_s(Map[12][18], "用");

		initA.ShowMap();
		exit(0);
	}
	else
		ChoseA(0);
}
void ChoseB(int Cb,bool B)
{
	if (B == true)
	{
		Init initB;
		Operation opeB;
		initB.InitMapBegin();
		initB.InitSnake();
		initB.InitFood(false);
		system("cls");
		initB.InitScore();
		initB.ShowMap();
		Cb = _getch();

		while(1)
		{
			//_getch();					//上下左右可以只用一个键监测
			//if (kbhit())				//自动行走有延迟现象，下一版本解决
			{
				Cb = _getch();

				if (Cb == 113 || Cb == 50)				//Q或2
				{
					system("cls");
					initB.InitMapBegin();

					strcpy_s(Map[12][8], "感");
					strcpy_s(Map[12][10], "谢");
					strcpy_s(Map[12][12], "您");
					strcpy_s(Map[12][14], "的");
					strcpy_s(Map[12][16], "使");
					strcpy_s(Map[12][18], "用");

					initB.ShowMap();
					exit(0);
				}
				else if (Cb == 112)			//P
				{
					system("cls");
					strcpy_s(Map[12][13], "暂");
					strcpy_s(Map[12][14], "停");
					initB.ShowMap();
					for (int i = 0;; i++)
					{
						if (_getch() == 112)
						{
							strcpy_s(Map[12][13], "  ");
							strcpy_s(Map[12][14], "  ");
							break;
						}
					}
				}
				else if (Cb == 110)			//N
					ChoseA(0);
				else if (Cb == 49)			//1
					ChoseB(0, true);
				else if (Cb == 72)			//上
					opeB.Move(72);
				else if (Cb == 80)			//下
					opeB.Move(80);
				else if (Cb == 75)			//左
					opeB.Move(75);
				else if (Cb == 77)			//右
					opeB.Move(77);
			}
			//opeB.Move(Cb);


			gotoxy(snakeBody[snakeLarge + 2][1] * 2, snakeBody[snakeLarge + 2][0]);
			cout << "  ";
			gotoxy(snakeBody[0][1] * 2, snakeBody[0][0]);
			cout << "■";
			for (int i = 1; i < snakeLarge + 2; i++)
			{
				gotoxy(snakeBody[i][1] * 2, snakeBody[i][0]);
				cout << "□";
			}
			opeB.JudgeFood();
			gotoxy(foodRandY_New * 2, foodRandX_New);
			cout << "[]";
			gotoxy((Size + 5) * 2, 12);
			cout << snakeLarge;
			opeB.JudgeWall();
			//_sleep(200);

		}
	}
}

#endif // !TCSH_H