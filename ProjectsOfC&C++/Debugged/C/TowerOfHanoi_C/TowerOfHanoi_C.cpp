#include <stdio.h>
#include <string.h>
#include <iostream>
#include <conio.h>


//for (i = 0; i < n; i++)
//{													//加上花括号之后的printf中StrI无法识别
char StrI[8] = { ' ', ' ', ' ', '|', ' ', ' ', ' ' };	//8用（2*i）+1时显示“烫烫烫乱码”
static char StrN1[3][8] = { ' ' };
static char StrN2[3][8] = { ' ' };
static char StrN3[3][8] = { ' ' };
char StrP3[8] = { ' ', ' ', '=', '=', '=', ' ', ' ' };
char StrP5[8] = { ' ', '=', '=', '=', '=', '=', ' ' };
char StrP7[8] = { '=', '=', '=', '=', '=', '=', '=' };
//}


void Menu();				//前向引用声明
int main()
{
	Menu();

	return 0;
}


void Play();
void Show()
{
	printf("\n\tR:  重新开始\tB:  返回主菜单\tQ:  退出游戏\n");
	printf("\n-------------------------------------------------------------------\n");
	printf("\n| |                                                             | |");
	printf("\n| |                                                             | |");
	printf("\n| |                                                             | |");
	printf("\n| |\t\t%s\t\t%s\t\t%s\t\t| |", StrI, StrI, StrI);
	printf("\n| |\t\t%s\t\t%s\t\t%s\t\t| |", StrI, StrI, StrI);
	printf("\n| |\t\t%s\t\t%s\t\t%s\t\t| |", StrI, StrI, StrI);
	printf("\n| |\t\t%s\t\t%s\t\t%s\t\t| |", StrI, StrI, StrI);
	printf("\n| |\t\t%s\t\t%s\t\t%s\t\t| |", StrN1[0], StrN1[1], StrN1[2]);
	printf("\n| |\t\t%s\t\t%s\t\t%s\t\t| |", StrN2[0], StrN2[1], StrN2[2]);
	printf("\n| |\t\t%s\t\t%s\t\t%s\t\t| |", StrN3[0], StrN3[1], StrN3[2]);
	printf("\n| |\t     ---------------------------------------------     \t| |");
	printf("\n| |                                                             | |");
	printf("\n| |                                                             | |");
	printf("\n| |                                                             | |");
	printf("\n-------------------------------------------------------------------\n\n");
}


void Getin()
{
	char CH = '\0';
	printf("\n\t\t\t\t输入");
	CH = _getch();							//_getch()实现键盘监测
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '1' && strcmp(StrN1[0], StrI) != 0 && strcmp(StrN1[0], StrP3) == 0)					//如果键入1且1柱顶层不为空且为三
	{
		printf("1");
		CH = _getch();
		if (CH == '2')																				//因为1柱顶不为空，所以1柱所移动的片全部放在2柱底部
		{
			printf("2");
			strcpy_s(StrN1[0], StrI);									//1柱顶层制空
			strcpy_s(StrN3[1], StrP3);									//2柱底层加三
			system("cls");					//此处使用iostream
			Show();
			Getin();						//递归调用
		}
		if (CH == '3')																				//因为1柱顶不为空，所以1柱所移动的片直接放在2柱底部
		{
			printf("3");
			strcpy_s(StrN1[0], StrI);									//1柱顶层制空
			strcpy_s(StrN3[2], StrP3);									//3柱底层加三
			system("cls");
			Show(); 
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN1[0], StrI) != 0 && strcmp(StrN1[0], StrP5) == 0)			//如果键入1且1柱顶层不为空且为五
	{
		printf("1");
		CH = _getch();
		if (CH == '2')
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);									//1柱顶层制空
			strcpy_s(StrN3[1], StrP5);									//2柱底层加五
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3')
		{
			printf("3");
			strcpy_s(StrN1[0], StrI);
			strcpy_s(StrN3[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN1[0], StrI) != 0 && strcmp(StrN1[0], StrP7) == 0)
	{
		printf("1");
		CH = _getch();
		if (CH == '2')
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN3[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3')
		{
			printf("3");
			strcpy_s(StrN1[0], StrI);
			strcpy_s(StrN3[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '2' && strcmp(StrN1[1], StrI) != 0 && strcmp(StrN1[1], StrP3) == 0)
	{
		printf("2");
		CH = _getch();
		if (CH == '1')
		{
			printf("1");
			strcpy_s(StrN1[1], StrI);
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3')
		{
			printf("3");
			strcpy_s(StrN1[1], StrI);
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '2' && strcmp(StrN1[1], StrI) != 0 && strcmp(StrN1[1], StrP5) == 0)
	{
		printf("2");
		CH = _getch();
		if (CH == '2')
		{
			printf("2");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN3[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3')
		{
			printf("3");
			strcpy_s(StrN1[1], StrI);
			strcpy_s(StrN3[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '2' && strcmp(StrN1[1], StrI) != 0 && strcmp(StrN1[1], StrP7) == 0)
	{
		printf("2");
		CH = _getch();
		if (CH == '2')
		{
			printf("2");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN3[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3')
		{
			printf("3");
			strcpy_s(StrN1[1], StrI);
			strcpy_s(StrN3[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '3' && strcmp(StrN1[2], StrI) != 0 && strcmp(StrN1[2], StrP3) == 0)
	{
		printf("3");
		CH = _getch();
		if (CH == '1')
		{
			printf("1");
			strcpy_s(StrN1[2], StrI);
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2')
		{
			printf("2");
			strcpy_s(StrN1[2], StrI);
			strcpy_s(StrN3[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '3' && strcmp(StrN1[2], StrI) != 0 && strcmp(StrN1[2], StrP5) == 0)
	{
		printf("3");
		CH = _getch();
		if (CH == '1')
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN3[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2')
		{
			printf("2");
			strcpy_s(StrN1[2], StrI);
			strcpy_s(StrN3[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '3' && strcmp(StrN1[2], StrI) != 0 && strcmp(StrN1[2], StrP7) == 0)
	{
		printf("3");
		CH = _getch();
		if (CH == '1')
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN3[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2')
		{
			printf("2");
			strcpy_s(StrN1[2], StrI);
			strcpy_s(StrN3[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '1' && strcmp(StrN1[0], StrI) == 0 && strcmp(StrN2[0], StrI) != 0 && strcmp(StrN2[0], StrP3) == 0)		//1柱顶层为空，中间层为三
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//若不在1柱的一片不在2柱
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);											//将1柱中间层移到2柱底层
			strcpy_s(StrN3[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0)																	//若不在1柱的一片在2柱
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);											//将1柱中间层移到2柱中层
			strcpy_s(StrN2[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//若不在1柱的一片不在3柱
		{
			printf("3");
			strcpy_s(StrN2[0], StrI);											//将1柱中间层移到3柱底层
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0)																	//若不在1柱的一片在3柱
		{
			printf("3");
			strcpy_s(StrN2[0], StrI);											//将1柱中间层移到3柱中层
			strcpy_s(StrN2[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN1[0], StrI) == 0 && strcmp(StrN2[0], StrI) != 0 && strcmp(StrN2[0], StrP5) == 0)
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN3[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0)
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN2[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)
		{
			printf("3");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN3[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0)
		{
			printf("3");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN2[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN1[0], StrI) == 0 && strcmp(StrN2[0], StrI) != 0 && strcmp(StrN2[0], StrP7) == 0)
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN3[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0)
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN2[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)
		{
			printf("3");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN3[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0)
		{
			printf("3");
			strcpy_s(StrN2[0], StrI);
			strcpy_s(StrN2[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '2' && strcmp(StrN1[1], StrI) == 0 && strcmp(StrN2[1], StrI) != 0 && strcmp(StrN2[1], StrP3) == 0)		//2柱顶层为空，中间层为三
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)																	//若不在2柱的一片不在1柱
		{
			printf("1");
			strcpy_s(StrN2[1], StrI);											//将2柱中间层移到1柱底层
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0)																	//若不在2柱的一片在1柱
		{
			printf("1");
			strcpy_s(StrN2[1], StrI);											//将2柱中间层移到1柱中层
			strcpy_s(StrN2[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//若不在2柱的一片不在3柱
		{
			printf("3");
			strcpy_s(StrN2[1], StrI);											//将2柱中间层移到3柱底层
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0)																	//若不在2柱的一片在3柱
		{
			printf("3");
			strcpy_s(StrN2[1], StrI);											//将2柱中间层移到3柱中层
			strcpy_s(StrN2[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '2' && strcmp(StrN1[1], StrI) == 0 && strcmp(StrN2[1], StrI) != 0 && strcmp(StrN2[1], StrP5) == 0)
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN3[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0)
		{
			printf("1");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN2[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)
		{
			printf("3");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN3[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0)
		{
			printf("3");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN2[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '2' && strcmp(StrN1[1], StrI) == 0 && strcmp(StrN2[1], StrI) != 0 && strcmp(StrN2[1], StrP7) == 0)
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN3[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0)
		{
			printf("1");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN2[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)
		{
			printf("3");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN3[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0)
		{
			printf("3");
			strcpy_s(StrN2[1], StrI);
			strcpy_s(StrN2[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '3' && strcmp(StrN1[2], StrI) == 0 && strcmp(StrN2[2], StrI) != 0 && strcmp(StrN2[2], StrP3) == 0)		//3柱顶层为空，中间层为三
	{
		printf("3");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)																	//若不在3柱的一片不在1柱
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);											//将3柱中间层移到1柱底层
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0)																	//若不在3柱的一片在1柱
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);											//将3柱中间层移到1柱中层
			strcpy_s(StrN2[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//若不在3柱的一片不在2柱
		{
			printf("2");
			strcpy_s(StrN2[2], StrI);											//将3柱中间层移到2柱底层
			strcpy_s(StrN3[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0)																	//若不在3柱的一片在2柱
		{
			printf("2");
			strcpy_s(StrN2[2], StrI);											//将3柱中间层移到2柱中层
			strcpy_s(StrN2[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '3' && strcmp(StrN1[2], StrI) == 0 && strcmp(StrN2[2], StrI) != 0 && strcmp(StrN2[2], StrP5) == 0)
	{
		printf("3");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN3[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0)
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN2[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN3[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0)
		{
			printf("2");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN2[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '3' && strcmp(StrN1[2], StrI) == 0 && strcmp(StrN2[2], StrI) != 0 && strcmp(StrN2[2], StrP7) == 0)
	{
		printf("3");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN3[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0)
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN2[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN3[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0)
		{
			printf("2");
			strcpy_s(StrN2[2], StrI);
			strcpy_s(StrN2[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '1' && strcmp(StrN2[0], StrI) == 0 && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN3[0], StrP3) == 0)		//1柱中层为空，底层为三
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//若不在1柱的两片都不在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱底层
			strcpy_s(StrN3[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)									//若不在1柱的只有一片在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱中层
			strcpy_s(StrN2[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)									//若不在1柱的两片全在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱顶层
			strcpy_s(StrN1[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//若不在1柱的两片都不在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱底层
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//若不在1柱的只有一片在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱中层
			strcpy_s(StrN2[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//若不在1柱的两片全在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱顶层
			strcpy_s(StrN1[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN2[0], StrI) == 0 && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN3[0], StrP5) == 0)		//1柱中层为空，底层为五
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//若不在1柱的两片都不在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱底层
			strcpy_s(StrN3[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)									//若不在1柱的只有一片在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱中层
			strcpy_s(StrN2[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)									//若不在1柱的两片全在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱顶层
			strcpy_s(StrN1[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//若不在1柱的两片都不在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱底层
			strcpy_s(StrN3[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//若不在1柱的只有一片在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱中层
			strcpy_s(StrN2[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//若不在1柱的两片全在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱顶层
			strcpy_s(StrN1[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN2[0], StrI) == 0 && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN3[0], StrP7) == 0)		//1柱中层为空，底层为七
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//若不在1柱的两片都不在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱底层
			strcpy_s(StrN3[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)									//若不在1柱的只有一片在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱中层
			strcpy_s(StrN2[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)									//若不在1柱的两片全在2柱
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到2柱顶层
			strcpy_s(StrN1[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//若不在1柱的两片都不在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱底层
			strcpy_s(StrN3[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//若不在1柱的只有一片在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱中层
			strcpy_s(StrN2[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//若不在1柱的两片全在3柱
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//将1柱底层移到3柱顶层
			strcpy_s(StrN1[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '2' && strcmp(StrN2[1], StrI) == 0 && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN3[1], StrP3) == 0)		//2柱中层为空，底层为三
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)																	//若不在2柱的两片都不在1柱
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到1柱底层
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) == 0)									//若不在1柱的只有一片在1柱
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到1柱中层
			strcpy_s(StrN2[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) != 0)									//若不在1柱的两片全在1柱
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到1柱顶层
			strcpy_s(StrN1[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//若不在2柱的两片都不在3柱
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到3柱底层
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//若不在2柱的只有一片在3柱
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到3柱中层
			strcpy_s(StrN2[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//若不在2柱的两片全在3柱
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到3柱顶层
			strcpy_s(StrN1[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '2' && strcmp(StrN2[1], StrI) == 0 && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN3[1], StrP5) == 0)		//2柱中层为空，底层为五
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)																	//若不在2柱的两片都不在1柱
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到1柱底层
			strcpy_s(StrN3[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) == 0)									//若不在2柱的只有一片在1柱
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到1柱中层
			strcpy_s(StrN2[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) != 0)									//若不在2柱的两片全在1柱
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到1柱顶层
			strcpy_s(StrN1[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//若不在2柱的两片都不在3柱
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到3柱底层
			strcpy_s(StrN3[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//若不在2柱的只有一片在3柱
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到3柱中层
			strcpy_s(StrN2[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//若不在2柱的两片全在3柱
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//将2柱底层移到3柱顶层
			strcpy_s(StrN1[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '2' && strcmp(StrN2[1], StrI) == 0 && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN3[1], StrP7) == 0)
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);
			strcpy_s(StrN3[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);
			strcpy_s(StrN2[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) != 0)
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);
			strcpy_s(StrN1[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);
			strcpy_s(StrN3[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);
			strcpy_s(StrN2[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);
			strcpy_s(StrN1[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '3' && strcmp(StrN2[2], StrI) == 0 && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN3[2], StrP3) == 0)
	{
		printf("3");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN2[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) != 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN1[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN3[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN2[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN1[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '3' && strcmp(StrN2[2], StrI) == 0 && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN3[2], StrP5) == 0)
	{
		printf("3");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN3[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN2[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) != 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN1[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN3[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN2[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN1[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	if (CH == '3' && strcmp(StrN2[2], StrI) == 0 && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN3[2], StrP7) == 0)
	{
		printf("3");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN3[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) == 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN2[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) != 0)
		{
			printf("1");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN1[0], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN3[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN2[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)
		{
			printf("2");
			strcpy_s(StrN3[2], StrI);
			strcpy_s(StrN1[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   输入错误，请重新操作\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == 'q')
	{
		printf("\n\n\n\t\t\t   退出游戏....\n\n");
		exit(0);
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == 'r')
	{
		system("cls");
		Play();
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == 'b')
	{
		system("cls");
		Menu();
	}
	//-----------------------------------------------------------------------------------------------------------
	if (strcmp(StrN1[2], StrP3) == 0 && strcmp(StrN2[2], StrP5) == 0 && strcmp(StrN3[2], StrP7) == 0)
	{
		printf("\n\n\t\t\t游戏成功!\n\n");
		printf("\t1.  重新开始\t2.  返回主菜单\t3.  退出游戏\n\n");
		CH = _getch();
		if (CH == '1')
		{
			system("cls");
			Play();
		}
		if (CH == '2')
		{
			system("cks");
			Menu();
		}
		if (CH == '3')
		{
			exit(0);
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	else
	{
		system("cls");
		Show();
		printf("\n\t\t\t 输入错误，请重新选择!\n");
		Getin();
	}
}


void Menu();
void Play()
{
	int n = 3;
	int i = 0;
	//printf("请输入层数:");
	//scanf_s("%d", &n);
	
		strcpy_s(StrN1[0], StrP3);			//初始化
		strcpy_s(StrN1[1], StrI);
		strcpy_s(StrN1[2], StrI);
		strcpy_s(StrN2[0], StrP5);
		strcpy_s(StrN2[1], StrI);
		strcpy_s(StrN2[2], StrI);
		strcpy_s(StrN3[0], StrP7);
		strcpy_s(StrN3[1], StrI);
		strcpy_s(StrN3[2], StrI);
		Show();

		while (1)
		{
			Getin();
		}
}


void Menu();
void Help()
{
	printf("\n\n\n\n\t\t\t\t抱歉，帮助请自行脑补。(按下B返回主菜单)");
	if (_getch())
	{
		system("cls");
		Menu();
	}
}


void Menu()
{
	int M_CH = 0;
	printf("\n\n\n\n\t\t\t     Sakura 汉诺塔V1.01");
	printf("\n\n\n\n\n\t\t\t\t1. 开始游戏\n\n\n\t\t\t\t2. 帮助\n\n\n\t\t\t\t3. 退出游戏\n\n");
	M_CH = _getch();
	if (M_CH == '1')
	{
		system("cls");
		Play();
	}
	if (M_CH == '2')
	{
		system("cls");
		Help();
	}
	if (M_CH == '3')
	{
		exit(0);
	}
	else
	{
		printf("\n\n\t\t\t    输入错误，请重新输入!\n");
		int DELAY = 280000000;
		int i = 0;
		for (i = 0; i < DELAY; i++){}
		system("cls");
		Menu();
	}
}
