#include <stdio.h>
#include <string.h>
#include <iostream>
#include <conio.h>


//for (i = 0; i < n; i++)
//{													//���ϻ�����֮���printf��StrI�޷�ʶ��
char StrI[8] = { ' ', ' ', ' ', '|', ' ', ' ', ' ' };	//8�ã�2*i��+1ʱ��ʾ�����������롱
static char StrN1[3][8] = { ' ' };
static char StrN2[3][8] = { ' ' };
static char StrN3[3][8] = { ' ' };
char StrP3[8] = { ' ', ' ', '=', '=', '=', ' ', ' ' };
char StrP5[8] = { ' ', '=', '=', '=', '=', '=', ' ' };
char StrP7[8] = { '=', '=', '=', '=', '=', '=', '=' };
//}


void Menu();				//ǰ����������
int main()
{
	Menu();

	return 0;
}


void Play();
void Show()
{
	printf("\n\tR:  ���¿�ʼ\tB:  �������˵�\tQ:  �˳���Ϸ\n");
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
	printf("\n\t\t\t\t����");
	CH = _getch();							//_getch()ʵ�ּ��̼��
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '1' && strcmp(StrN1[0], StrI) != 0 && strcmp(StrN1[0], StrP3) == 0)					//�������1��1�����㲻Ϊ����Ϊ��
	{
		printf("1");
		CH = _getch();
		if (CH == '2')																				//��Ϊ1������Ϊ�գ�����1�����ƶ���Ƭȫ������2���ײ�
		{
			printf("2");
			strcpy_s(StrN1[0], StrI);									//1�������ƿ�
			strcpy_s(StrN3[1], StrP3);									//2���ײ����
			system("cls");					//�˴�ʹ��iostream
			Show();
			Getin();						//�ݹ����
		}
		if (CH == '3')																				//��Ϊ1������Ϊ�գ�����1�����ƶ���Ƭֱ�ӷ���2���ײ�
		{
			printf("3");
			strcpy_s(StrN1[0], StrI);									//1�������ƿ�
			strcpy_s(StrN3[2], StrP3);									//3���ײ����
			system("cls");
			Show(); 
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN1[0], StrI) != 0 && strcmp(StrN1[0], StrP5) == 0)			//�������1��1�����㲻Ϊ����Ϊ��
	{
		printf("1");
		CH = _getch();
		if (CH == '2')
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);									//1�������ƿ�
			strcpy_s(StrN3[1], StrP5);									//2���ײ����
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '1' && strcmp(StrN1[0], StrI) == 0 && strcmp(StrN2[0], StrI) != 0 && strcmp(StrN2[0], StrP3) == 0)		//1������Ϊ�գ��м��Ϊ��
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//������1����һƬ����2��
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);											//��1���м���Ƶ�2���ײ�
			strcpy_s(StrN3[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0)																	//������1����һƬ��2��
		{
			printf("2");
			strcpy_s(StrN2[0], StrI);											//��1���м���Ƶ�2���в�
			strcpy_s(StrN2[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//������1����һƬ����3��
		{
			printf("3");
			strcpy_s(StrN2[0], StrI);											//��1���м���Ƶ�3���ײ�
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0)																	//������1����һƬ��3��
		{
			printf("3");
			strcpy_s(StrN2[0], StrI);											//��1���м���Ƶ�3���в�
			strcpy_s(StrN2[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '2' && strcmp(StrN1[1], StrI) == 0 && strcmp(StrN2[1], StrI) != 0 && strcmp(StrN2[1], StrP3) == 0)		//2������Ϊ�գ��м��Ϊ��
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)																	//������2����һƬ����1��
		{
			printf("1");
			strcpy_s(StrN2[1], StrI);											//��2���м���Ƶ�1���ײ�
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0)																	//������2����һƬ��1��
		{
			printf("1");
			strcpy_s(StrN2[1], StrI);											//��2���м���Ƶ�1���в�
			strcpy_s(StrN2[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//������2����һƬ����3��
		{
			printf("3");
			strcpy_s(StrN2[1], StrI);											//��2���м���Ƶ�3���ײ�
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0)																	//������2����һƬ��3��
		{
			printf("3");
			strcpy_s(StrN2[1], StrI);											//��2���м���Ƶ�3���в�
			strcpy_s(StrN2[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '3' && strcmp(StrN1[2], StrI) == 0 && strcmp(StrN2[2], StrI) != 0 && strcmp(StrN2[2], StrP3) == 0)		//3������Ϊ�գ��м��Ϊ��
	{
		printf("3");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)																	//������3����һƬ����1��
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);											//��3���м���Ƶ�1���ײ�
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0)																	//������3����һƬ��1��
		{
			printf("1");
			strcpy_s(StrN2[2], StrI);											//��3���м���Ƶ�1���в�
			strcpy_s(StrN2[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//������3����һƬ����2��
		{
			printf("2");
			strcpy_s(StrN2[2], StrI);											//��3���м���Ƶ�2���ײ�
			strcpy_s(StrN3[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0)																	//������3����һƬ��2��
		{
			printf("2");
			strcpy_s(StrN2[2], StrI);											//��3���м���Ƶ�2���в�
			strcpy_s(StrN2[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '1' && strcmp(StrN2[0], StrI) == 0 && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN3[0], StrP3) == 0)		//1���в�Ϊ�գ��ײ�Ϊ��
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//������1������Ƭ������2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2���ײ�
			strcpy_s(StrN3[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)									//������1����ֻ��һƬ��2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2���в�
			strcpy_s(StrN2[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)									//������1������Ƭȫ��2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2������
			strcpy_s(StrN1[1], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//������1������Ƭ������3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3���ײ�
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//������1����ֻ��һƬ��3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3���в�
			strcpy_s(StrN2[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//������1������Ƭȫ��3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3������
			strcpy_s(StrN1[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN2[0], StrI) == 0 && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN3[0], StrP5) == 0)		//1���в�Ϊ�գ��ײ�Ϊ��
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//������1������Ƭ������2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2���ײ�
			strcpy_s(StrN3[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)									//������1����ֻ��һƬ��2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2���в�
			strcpy_s(StrN2[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)									//������1������Ƭȫ��2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2������
			strcpy_s(StrN1[1], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//������1������Ƭ������3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3���ײ�
			strcpy_s(StrN3[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//������1����ֻ��һƬ��3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3���в�
			strcpy_s(StrN2[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//������1������Ƭȫ��3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3������
			strcpy_s(StrN1[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	if (CH == '1' && strcmp(StrN2[0], StrI) == 0 && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN3[0], StrP7) == 0)		//1���в�Ϊ�գ��ײ�Ϊ��
	{
		printf("1");
		CH = _getch();
		if (CH == '2' && strcmp(StrN3[1], StrI) == 0)																	//������1������Ƭ������2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2���ײ�
			strcpy_s(StrN3[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) == 0)									//������1����ֻ��һƬ��2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2���в�
			strcpy_s(StrN2[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '2' && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN2[1], StrI) != 0)									//������1������Ƭȫ��2��
		{
			printf("2");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�2������
			strcpy_s(StrN1[1], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//������1������Ƭ������3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3���ײ�
			strcpy_s(StrN3[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//������1����ֻ��һƬ��3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3���в�
			strcpy_s(StrN2[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//������1������Ƭȫ��3��
		{
			printf("3");
			strcpy_s(StrN3[0], StrI);											//��1���ײ��Ƶ�3������
			strcpy_s(StrN1[2], StrP7);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == '2' && strcmp(StrN2[1], StrI) == 0 && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN3[1], StrP3) == 0)		//2���в�Ϊ�գ��ײ�Ϊ��
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)																	//������2������Ƭ������1��
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�1���ײ�
			strcpy_s(StrN3[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) == 0)									//������1����ֻ��һƬ��1��
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�1���в�
			strcpy_s(StrN2[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) != 0)									//������1������Ƭȫ��1��
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�1������
			strcpy_s(StrN1[0], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//������2������Ƭ������3��
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�3���ײ�
			strcpy_s(StrN3[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//������2����ֻ��һƬ��3��
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�3���в�
			strcpy_s(StrN2[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//������2������Ƭȫ��3��
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�3������
			strcpy_s(StrN1[2], StrP3);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	if (CH == '2' && strcmp(StrN2[1], StrI) == 0 && strcmp(StrN3[1], StrI) != 0 && strcmp(StrN3[1], StrP5) == 0)		//2���в�Ϊ�գ��ײ�Ϊ��
	{
		printf("2");
		CH = _getch();
		if (CH == '1' && strcmp(StrN3[0], StrI) == 0)																	//������2������Ƭ������1��
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�1���ײ�
			strcpy_s(StrN3[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) == 0)									//������2����ֻ��һƬ��1��
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�1���в�
			strcpy_s(StrN2[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '1' && strcmp(StrN3[0], StrI) != 0 && strcmp(StrN2[0], StrI) != 0)									//������2������Ƭȫ��1��
		{
			printf("1");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�1������
			strcpy_s(StrN1[0], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) == 0)																	//������2������Ƭ������3��
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�3���ײ�
			strcpy_s(StrN3[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) == 0)									//������2����ֻ��һƬ��3��
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�3���в�
			strcpy_s(StrN2[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		if (CH == '3' && strcmp(StrN3[2], StrI) != 0 && strcmp(StrN2[2], StrI) != 0)									//������2������Ƭȫ��3��
		{
			printf("3");
			strcpy_s(StrN3[1], StrI);											//��2���ײ��Ƶ�3������
			strcpy_s(StrN1[2], StrP5);
			system("cls");
			Show();
			Getin();
		}
		else
		{
			system("cls");
			Show();
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
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
			printf("\n\t\t\t   ������������²���\n\n");
			Getin();
		}
	}
	//-----------------------------------------------------------------------------------------------------------
	if (CH == 'q')
	{
		printf("\n\n\n\t\t\t   �˳���Ϸ....\n\n");
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
		printf("\n\n\t\t\t��Ϸ�ɹ�!\n\n");
		printf("\t1.  ���¿�ʼ\t2.  �������˵�\t3.  �˳���Ϸ\n\n");
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
		printf("\n\t\t\t �������������ѡ��!\n");
		Getin();
	}
}


void Menu();
void Play()
{
	int n = 3;
	int i = 0;
	//printf("���������:");
	//scanf_s("%d", &n);
	
		strcpy_s(StrN1[0], StrP3);			//��ʼ��
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
	printf("\n\n\n\n\t\t\t\t��Ǹ�������������Բ���(����B�������˵�)");
	if (_getch())
	{
		system("cls");
		Menu();
	}
}


void Menu()
{
	int M_CH = 0;
	printf("\n\n\n\n\t\t\t     Sakura ��ŵ��V1.01");
	printf("\n\n\n\n\n\t\t\t\t1. ��ʼ��Ϸ\n\n\n\t\t\t\t2. ����\n\n\n\t\t\t\t3. �˳���Ϸ\n\n");
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
		printf("\n\n\t\t\t    �����������������!\n");
		int DELAY = 280000000;
		int i = 0;
		for (i = 0; i < DELAY; i++){}
		system("cls");
		Menu();
	}
}
