#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>						//��ƽ��ֵ�����ʽ������ͷ�ļ�
#include <sstream>
#include <conio.h>						//_getch()ͷ�ļ�
using namespace std;



/*---------------------------MainMenu Class---------------------------------*/
/****************************************************************************/
class StuInfoSTR
{
public:
	char NAME[20];
	char SEX[5];
	int STUNUM;
	char CLASS[12];
	int AGE;

	int CHINESE;						//���Ƴɼ�
	int	MATH;
	int ENGLISH;
	int HISTORY;
	int ART;

	int SUMS;							//ѧ���ɼ��ܺͣ�����ʾ��ѧ����Ϣ��
};
const int N=25;							//����N��ʾ���ݿ�������С
static StuInfoSTR Info[N];				//������Ա��������
static int I=0;							//�������ݿ���������������
static int FF=0;						//����������//FFΪ�����ҵ��ˣ�����������������ʹ��
static int DELAY=500000000;				//��ʱ����
/****************************************************************************/
class InfoMenu
{
public:
	void MENUIn();						//��ʾ�˵�
	void MENUIn5();
	void MENUExit();
	void SWITCHIn(int C);				//ѡ��˵�����Menu����Ƕ�ױ�֤ϵͳ�����޹��˳�
	void CHOISEIn();					//ʵ����ʾ�˵���ѡ����
	void CHOISEIn5();

	void GET();
	void SHOW();
	void OUTPUT();					//�������ļ�
	void INPUT();					//���ļ�����
	
	void FILECHOISE(int Rows,int Count);
	void FINDMenu();					//���Ҳ˵���ʹ���ҹ��ܶ�����������������Ƕ�׵��ò��ҹ���
	void SHOWFIND(int i);
	void SUMMENU();						//��Ͳ˵���ͬ���Ҳ˵�
};
/****************************************************************************/



/*---------------------------Functions Class--------------------------------*/
/****************************************************************************/
class FunctionIn
{
public:
	void FIND(int F);
	void DELETE();
	void CHANGE();
};
/****************************************************************************/
class FunctionIn5
{
public:
	int SUM(int i);
	void AVERANGE();
	void MIN();
	void MAX();
	void UNPEOPLE();					//����������
};
/****************************************************************************/




/*------------------------------MainMenu Do---------------------------------*/
/****************************************************************************/
void InfoMenu::MENUIn()
{
	cout<<"\n\t\t\t��ӭʹ��AXѧ���ɼ�����ϵͳ!\n"<<endl;
	cout<<"\n\t\t\t   1.ѧ���ɼ�¼�롣"<<endl;
	cout<<"\n\t\t\t   2.ѧ���ɼ����ҡ�"<<endl;
	cout<<"\n\t\t\t   3.ѧ���ɼ�ɾ����"<<endl;
	cout<<"\n\t\t\t   4.ѧ���ɼ��޸ġ�"<<endl;
	cout<<"\n\t\t\t   5.ѧ���ɼ�����ͳ�ơ�"<<endl;
	cout<<"\n\t\t\t   6.�г�����ѧ���ɼ���Ϣ��"<<endl;
	cout<<"\n\t\t\t   7.ѧ���ɼ���Ϣ���������ļ�����"<<endl;
	cout<<"\n\t\t\t   8.ѧ���ɼ���Ϣ���루���ļ�����"<<endl;
	cout<<"\n\t\t\t   0.�˳�AXѧ���ɼ�����ϵͳ��\n"<<endl;

	InfoMenu Menu;
	Menu.CHOISEIn();					//ʵ��ѡ����
}
/****************************************************************************/
void InfoMenu::MENUIn5()
{
	cout<<"\n\n\t\t\t��ѡ������Ҫ������ͳ�Ʋ���:"<<endl;
	cout<<"\n\t\t\t   1.ѧ���ɼ��ܷ֡�"<<endl;
	cout<<"\n\t\t\t   2.��Ŀ�ɼ�ƽ���֡�"<<endl;
	cout<<"\n\t\t\t   3.��Ŀ�ɼ���ͷ֡�"<<endl;
	cout<<"\n\t\t\t   4.��Ŀ�ɼ���߷֡�"<<endl;
	cout<<"\n\t\t\t   5.������������"<<endl;
	cout<<"\n\t\t\t   6.�������˵���"<<endl;
	cout<<"\n\t\t\t   0.�˳�AXѧ���ɼ�����ϵͳ��"<<endl;

	InfoMenu Menu;
	Menu.CHOISEIn5();
}
/****************************************************************************/
void InfoMenu::MENUExit()
{
	cout<<"\n\n\t\t   ��л��ʹ��AX�ɼ�����ϵͳ����ӭ�´�����!"<<endl;
	cout<<"\n\n\t\t   �����˳�......\n\n\n\n\n\n\n\n\n\n"<<endl;
}
/****************************************************************************/
void InfoMenu::SWITCHIn(int C)
{	
	InfoMenu InfoGet_Show;
	InfoMenu Menu;
	FunctionIn FunIn;

	switch(C)
	{	
		case '1':
			{
				system("cls");								//����
				InfoGet_Show.GET();							//ѧ����Ϣ¼��
				system("cls");
				cout<<"\n\n\t\t\t   "<<Info[I].NAME<<"ͬѧ����Ϣ��¼�����!\n";
				cout<<"\n\n\n\t\t\t   ����1¼������ͬѧ��Ϣ\n\t\t\t   ����6��ʾ����ͬѧ����Ϣ\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AX�ɼ�����ϵͳ\n";
				C = _getch();										//�����˳��Ӳ˵���������������ͬ
				if(C=='1')
				{
					system("cls");
					Menu.SWITCHIn('1');
				}
				else if(C=='6')
				{
					system("cls");
					Menu.SWITCHIn('6');
				}
				else if(C=='5')
				{
					system("cls");
					Menu.MENUIn();
				}
				else if(C=='0')
				{
					system("cls");
					Menu.SWITCHIn('0');
				}
				break;
			}
		case '2':
			{
				system("cls");
				Menu.FINDMenu();							//������Ӧ������ʵ�ֲ˵���Ӧ����
				break;
			}
		case '3':
			{
				system("cls");
				FunIn.DELETE();
				break;
			}
		case '4':
			{
				system("cls");
				FunIn.CHANGE();
				break;
			}
		case '5':
			{
				system("cls");
				Menu.MENUIn5();
				break;
			}
		case '6':
			{
				system("cls");
				InfoGet_Show.SHOW();
				break;
			}
		case '7':
			{
				system("cls");
				InfoGet_Show.OUTPUT();
				break;
			}
		case '8':
			{
				  system("cls");
				  InfoGet_Show.INPUT();
				  break;
			}
		case '0':
			{
				system("cls");
				Menu.MENUExit();
				break;
			}
		default :											//�ݴ���ʾ��
			{
				system("cls");
				cout<<"\n\n\n\t\t\t   ����������������룡\n"<<endl;
				Menu.MENUIn();									//Ƕ�׵��ã�ʹϵͳ�����˳�
				break;
			}
	}
}
/****************************************************************************/
void InfoMenu::CHOISEIn()
{
	InfoMenu Menu;
	int C=1;
	char CH_SURE;

	C=_getch();
	if(C!='1'&&C!='0'&&C!='8')											//�ݴ�����֤���ݿ���������
	{
		if(I==0)
		{
			system("cls");
			cout<<"\n\n\n\t\t\t   ���ݿ�Ϊ�գ���ѡ���Ƿ�¼����Ϣ��Y/N��:"<<endl;
			CH_SURE = _getch();									//�����Y��N��N����
			if(CH_SURE=='Y' || CH_SURE == 'y')
				Menu.SWITCHIn('1');
			else 
			{
				system("cls");
				cout<<"\n\n\n\t\t\t   �����������˵�\n"<<endl;
				for(int i=0;i<DELAY;i++){}					//��ʱ����ʹ��ʾ�����Ի�
				system("cls");
				Menu.MENUIn();
			}
		}
		else
			Menu.SWITCHIn(C);
	}
	else
		Menu.SWITCHIn(C);
}
/****************************************************************************/
void InfoMenu::CHOISEIn5()
{															//����ͬSWITCH����
	FunctionIn5 FunIn5;
	InfoMenu Menu;
	int C1=10;
	C1 = _getch();
	switch(C1)
	{	
		case '1':
			{
				system("cls");
				Menu.SUMMENU();
				break;
			}
		case '2':
			{
				system("cls");
				FunIn5.AVERANGE();
				break;
			}
		case '3':
			{
				system("cls");
				FunIn5.MIN();
				break;
			}
		case '4':
			{
				system("cls");
				FunIn5.MAX();
				break;
			}
		case '5':
			{
				system("cls");
				FunIn5.UNPEOPLE();
				break;
			}
		case '6':
			{
				system("cls");
				Menu.MENUIn();
				break;
			}
		case '0':
			{
				system("cls");
				Menu.MENUExit();
				break;
			}
		default :
		{
			system("cls");
			cout<<"\n\n\n\t\t\t   ����������������룡\n"<<endl;
			Menu.MENUIn5();
			break;
		}
	}
}
/****************************************************************************/
void InfoMenu::GET()
{
	if(I==N)												//�޶����ݿ��С�������ڴ�ռ��
		cout<<"\n\n\t\t   ���ݿ�����!"<<endl;
	cout<<"\n��������Ҫ¼���ѧ����Ϣ:"<<endl;
	cout<<"\n����:";cin>>Info[I].NAME;
	cout<<"\nѧ��:";cin>>Info[I].STUNUM;
	cout<<"\n�Ա�:";cin>>Info[I].SEX;
	cout<<"\n�༶:";cin>>Info[I].CLASS;
	cout<<"\n����:";cin>>Info[I].AGE;
	cout<<"\n���ĳɼ�:";cin>>Info[I].CHINESE;
	cout<<"\n��ѧ�ɼ�:";cin>>Info[I].MATH;
	cout<<"\nӢ��ɼ�:";cin>>Info[I].ENGLISH;
	cout<<"\n��ʷ�ɼ�:";cin>>Info[I].HISTORY;
	cout<<"\n�����ɼ�:";cin>>Info[I].ART;
	I++;
}
/****************************************************************************/
void InfoMenu::SHOW()
{
	InfoMenu Menu;
	int S;

	for(int i=0;i<I;i++)
	{														//�������ݿ�
		cout<<"\nѧ��"<<i+1<<":"<<endl;
		cout<<"\n\t\t\t   ����:"<<Info[i].NAME<<"\n";
		cout<<"\n\t\t\t   ѧ��:"<<Info[i].STUNUM<<"\n";
		cout<<"\n\t\t\t   �Ա�:"<<Info[i].SEX<<"\n";
		cout<<"\n\t\t\t   �༶:"<<Info[i].CLASS<<"\n";
		cout<<"\n\t\t\t   ����:"<<Info[i].AGE<<"\n";
		cout<<"\n\t\t\t   ���ĳɼ�:"<<Info[i].CHINESE<<"\n";
		cout<<"\n\t\t\t   ��ѧ�ɼ�:"<<Info[i].MATH<<"\n";
		cout<<"\n\t\t\t   Ӣ��ɼ�:"<<Info[i].ENGLISH<<"\n";
		cout<<"\n\t\t\t   ��ʷ�ɼ�:"<<Info[i].HISTORY<<"\n";
		cout<<"\n\t\t\t   �����ɼ�:"<<Info[i].ART<<"\n"<<endl;
	}

	cout<<"\n\n\t\t\t   ����1����¼��ͬѧ��Ϣ\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AX�ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='1')
	{
		system("cls");
		Menu.SWITCHIn('1');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}
}
/****************************************************************************/
void InfoMenu::FINDMenu()
{
	InfoMenu Menu;
	int F,S;
	FunctionIn Func;

	cout<<"\n\n\n\t\t\t   1.�����ֲ���\n\n\t\t\t   2.��ѧ�Ų���\n"<<endl;
	F = _getch();
	if(F!='1'&&F!='2') 
	{															//С�����ݴ���ʾ��
		system("cls");
		cout<<"\n\n\t\t\t   ��������������������룡\n"<<endl;
		Menu.FINDMenu();
	}
	system("cls");
	Func.FIND(F);												//Ƕ�ײ��ҹ���

	if(I!=0)
	{
		cout<<"\n\t\t\t   ����2������������ͬѧ��Ϣ\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ"<<endl;
		S = _getch();
		if(S=='2')
		{
			system("cls");
			Menu.SWITCHIn('2');
		}
		else if(S=='5')
		{
			system("cls");
			Menu.MENUIn();
		}
		else if(S=='0')
		{
			system("cls");
			Menu.SWITCHIn('0');
		}
	}
}	
/****************************************************************************/
void InfoMenu::SHOWFIND(int i)
{
		cout<<"\n\t\t\t   ����:"<<Info[i].NAME<<"\n";
		cout<<"\n\t\t\t   ѧ��:"<<Info[i].STUNUM<<"\n";
		cout<<"\n\t\t\t   �Ա�:"<<Info[i].SEX<<"\n";
		cout<<"\n\t\t\t   �༶:"<<Info[i].CLASS<<"\n";
		cout<<"\n\t\t\t   ����:"<<Info[i].AGE<<"\n";
		cout<<"\n\t\t\t   ���ĳɼ�:"<<Info[i].CHINESE<<"\n";
		cout<<"\n\t\t\t   ��ѧ�ɼ�:"<<Info[i].MATH<<"\n";
		cout<<"\n\t\t\t   Ӣ��ɼ�:"<<Info[i].ENGLISH<<"\n";
		cout<<"\n\t\t\t   ��ʷ�ɼ�:"<<Info[i].HISTORY<<"\n";
		cout<<"\n\t\t\t   �����ɼ�:"<<Info[i].ART<<"\n"<<endl;
}
/****************************************************************************/
void InfoMenu::SUMMENU()
{
	InfoMenu Menu;
	FunctionIn Fun;
	FunctionIn5 Fun5;
	int SUM_IN_CH;
	int SUM_S;
	int S;

	cout<<"\n\n���������ּܷ���,��������Ҫ�����ֵܷ�ͬѧ��������ѧ��:\n\n\t\t\t   1.����\n\n\t\t\t   2.ѧ��"<<endl;
	SUM_IN_CH = _getch();
	system("cls");
	Fun.FIND(SUM_IN_CH);									//�Ȳ��ҵ�ͬѧ��Ϣ���ٽ������
	SUM_S=Fun5.SUM(FF);
	cout<<Info[FF].NAME<<"ͬѧ���ܳɼ�Ϊ:"<<SUM_S<<endl;

	cout<<"\n\t\t\t   ����1������������ͬѧ�ܷ�\n\t\t\t   ����6����ͳ�Ʋ˵�\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='1')
	{
		system("cls");
		Menu.SUMMENU();
	}
	else if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('5');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}
}
/****************************************************************************/




/*-------------------------------FunctionsDo--------------------------------*/
/****************************************************************************/
void FunctionIn::FIND(int F)
{
	InfoMenu Menu;
	char F_NAME[20];
	int F_NUM,F_SURE_1=0,F_SURE_2=0;

	if(F=='1')
	{
		cout<<"\n\n������Ҫ���ҵ�����:";
		cin>>F_NAME;
		for(int i=0;i<I;i++)
		{
			if(strcmp(F_NAME,Info[i].NAME)==0)				//�������ݶԱȲ���
			{
				cout<<"\n\n��"<<Info[i].NAME<<"��"<<"ͬѧ����ϢΪ:";
				Menu.SHOWFIND(i);							//Ƕ�׵�����ʾ����
				FF=i;F_SURE_1=1;break;						//����break�������
			}
		}
		if(F_SURE_1==0)
			cout<<"\n\t\t\t   δ�ҵ���"<<F_NAME<<"��ͬѧ����Ϣ��"<<endl;
	}

	else if(F=='2')
	{
		cout<<"\n\n������Ҫ���ҵ�����:";
		cin>>F_NUM;
		for(int i=0;i<I;i++)
		{
			if(F_NUM==Info[i].STUNUM)
			{
				cout<<"\n\n��"<<Info[i].STUNUM<<"��"<<"ͬѧ����ϢΪ:";
				Menu.SHOWFIND(i);
				FF=i;F_SURE_2=1;break;
			}
		}
		if(F_SURE_2==0)
			cout<<"\n\t\t\t   δ�ҵ���"<<F_NUM<<"��ͬѧ����Ϣ��"<<endl;
	}
}
/****************************************************************************/
void FunctionIn::DELETE()
{
	InfoMenu Menu;
	FunctionIn Function;
	int F,S;
	char D_F_SURE;

	cout<<"\n\n����ѡ����Ҫɾ������Ա\n\n����1�����ֲ��ң�����2��ѧ�Ų���:";
	F = _getch();
	Function.FIND(F);
	cout<<"\n\n\n\t\t\t   ȷ��ɾ��?��Y/N��\n"<<endl;
	D_F_SURE = _getch();
	system("cls");
	if(D_F_SURE=='Y' || D_F_SURE == 'y')
	{
		for(int i=FF;i<I-1;i++)
		{
			Info[i].AGE=Info[i+1].AGE;
			Info[i].ART=Info[i+1].ART;
			Info[i].CHINESE=Info[i+1].CHINESE;
			strcpy_s(Info[i].CLASS,Info[i+1].CLASS);
			Info[i].ENGLISH=Info[i+1].ENGLISH;
			Info[i].HISTORY=Info[i+1].HISTORY;
			Info[i].MATH=Info[i+1].MATH;
			strcpy_s(Info[i].NAME,Info[i+1].NAME);
			strcpy_s(Info[i].SEX,Info[i+1].SEX);
			Info[i].STUNUM=Info[i+1].STUNUM;
		}
		I--;
		cout<<"\n\n\n\t\t\t   ɾ���ɹ���"<<endl;
	}
	else
		cout<<"\n\n\n\t\t\t   ɾ��ʧ�ܣ��û�ȡ������!\n\n"<<endl;

	cout<<"\n\t\t\t   ����3����ɾ������ͬѧ��Ϣ\n\t\t\t   ����6��ʾ����ͬѧ��Ϣ\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='3')
	{
		system("cls");
		Menu.SWITCHIn('3');
	}
	else if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('6');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}	
}
/****************************************************************************/
void FunctionIn::CHANGE()
{
	InfoMenu Menu;
	FunctionIn Function;
	int F,S;
	int CHANGE_CHIOSE;

	cout<<"\n\n����ѡ����Ҫ�޸ĵ���Ա\n\n����1�����ֲ��ң�����2��ѧ�Ų���:";
	F = _getch();
	Function.FIND(F);
	for(int i=0;i<DELAY;i++){}									//��ʱ
	system("cls");
	cout<<"\n\n\t\t��ѡ����Ҫ�޸ĵ�ѡ��\n\n\t\t\t   1.����\n\n\t\t\t   2.�Ա�\n\n\t\t\t   3.ѧ��\n\n\t\t\t   4.�༶\n\n\t\t\t   5.����\n\n\t\t\t   6.���ĳɼ�\n\n\t\t\t   7.��ѧ�ɼ�\n\n\t\t\t   8.Ӣ��ɼ�\n\n\t\t\t   9.��ʷ�ɼ�\n\n\t\t\t   10.�����ɼ�\n"<<endl;
	CHANGE_CHIOSE = _getch();
	system("cls");
	cout<<"\n\n\n��������Ҫ�޸ĵ�����:";
	switch(CHANGE_CHIOSE)
	{
	case 1:
		{
			cin>>Info[FF].NAME;
			break;
		}
	case 2:
		{
			cin>>Info[FF].SEX;
			break;
		}
	case 3:
		{
			cin>>Info[FF].STUNUM;
			break;
		}
	case 4:
		{
			cin>>Info[FF].CLASS;
			break;
		}
	case 5:
		{
			cin>>Info[FF].AGE;
			break;
		}
	case 6:
		{
			cin>>Info[FF].CHINESE;
			break;
		}
	case 7:
		{
			cin>>Info[FF].MATH;
			break;
		}
	case 8:
		{
			cin>>Info[FF].ENGLISH;
			break;
		}
	case 9:
		{
			cin>>Info[FF].HISTORY;
			break;
		}
	case 10:
		{
			cin>>Info[FF].ART;
			break;
		}

	}
	cout<<"\n\n\n\t\t\t   �޸ĳɹ���"<<endl;

	cout<<"\n\t\t\t   ����4�����޸�����ͬѧ��Ϣ\n\t\t\t   ����6��ʾ����ͬѧ��Ϣ\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='4')
	{
		system("cls");
		Menu.SWITCHIn('4');
	}
	else if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('6');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}	

}
/****************************************************************************/
int FunctionIn5::SUM(int i)
{
	int SUM_SUM=0;											//��һ����ͣ�����������������
	SUM_SUM=Info[i].CHINESE+Info[i].MATH+Info[i].ENGLISH+Info[i].HISTORY+Info[i].ART;
	return SUM_SUM;
}
/****************************************************************************/
void FunctionIn5::AVERANGE()
{
	InfoMenu Menu;
	FunctionIn5 Fun5;
	float AV_AV;											//ȫΪfloat���С��
	float AV_SUM_1=0,AV_SUM_2=0,AV_SUM_3=0,AV_SUM_4=0,AV_SUM_5=0;
	int AV_IN=0;
	char AV_OBJ[10];
	int S;

	cout<<"\n\n��������ƽ���ּ���,��ѡ����Ҫ����Ŀ�Ŀ:\n\n\t\t\t   1.����\n\n\t\t\t   2.��ѧ\n\n\t\t\t   3.Ӣ��\n\n\t\t\t   4.��ʷ\n\n\t\t\t   5.����"<<endl;
	AV_IN = _getch();
	system("cls");
	switch(AV_IN)
	{
	case '1':
		{
			for(int i=0;i<I;i++)
				AV_SUM_1+=Info[i].CHINESE;
			AV_AV=AV_SUM_1/I;
			strcpy_s(AV_OBJ,"����");							//�������
			break;
		}
	case '2':
		{
			for(int i=0;i<I;i++)
				AV_SUM_2+=Info[i].MATH;
			AV_AV=AV_SUM_2/I;
			strcpy_s(AV_OBJ,"��ѧ");
			break;
		}
	case '3':
		{
			for(int i=0;i<I;i++)
				AV_SUM_3+=Info[i].ENGLISH;
			AV_AV=AV_SUM_3/I;
			strcpy_s(AV_OBJ,"Ӣ��");
			break;
		}
	case '4':
		{
			for(int i=0;i<I;i++)
				AV_SUM_4+=Info[i].HISTORY;
			AV_AV=AV_SUM_4/I;
			strcpy_s(AV_OBJ,"��ʷ");
			break;
		}
	case '5':
		{
			for(int i=0;i<I;i++)
				AV_SUM_5+=Info[i].ART;
			AV_AV=AV_SUM_5/I;
			strcpy_s(AV_OBJ,"����");
			break;
		}
	}

	cout<<"\n\n\n���ݿ��ڹ���"<<I<<"λͬѧ��"<<AV_OBJ<<"��Ŀ��ƽ����Ϊ:"<<setprecision(3)<<AV_AV<<endl;//�����ʽ������
	cout<<"\n\n\t\t\t   ����1��������������Ŀƽ����\n\t\t\t   ����6����ͳ�Ʋ˵�\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='1')
	{
		system("cls");
		Fun5.AVERANGE();
	}
	else if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('5');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}
}
/****************************************************************************/
void FunctionIn5::MIN()
{
	InfoMenu Menu;
	FunctionIn5 Fun5;
	int MIN_M=20000000,MIN_IN=0,MIN_STU=0;
	char MIN_OBJ[10];
	int S;

	cout<<"\n\n����������ͷּ���,��ѡ����Ҫ����Ŀ�Ŀ:\n\n\t\t\t   1.����\n\n\t\t\t   2.��ѧ\n\n\t\t\t   3.Ӣ��\n\n\t\t\t   4.��ʷ\n\n\t\t\t   5.����\n\n\t\t\t   6.ѧ���ܷ�"<<endl;
	MIN_IN = _getch();
	system("cls");
	switch(MIN_IN)
	{
	case '1':
		{
			for(int i=0;i<I;i++)
				if(Info[i].CHINESE<=MIN_M)
					{
						MIN_M=Info[i].CHINESE;
						MIN_STU=i;								//���ѧ�����������
					}
			strcpy_s(MIN_OBJ,"����");
			break;
		}
	case '2':
		{
			for(int i=0;i<I;i++)
				if(Info[i].MATH<=MIN_M)
					{
						MIN_M=Info[i].MATH;
						MIN_STU=i;
					}
			strcpy_s(MIN_OBJ,"��ѧ");
			break;
		}
	case '3':
		{
			for(int i=0;i<I;i++)
				if(Info[i].ENGLISH<=MIN_M)
					{
						MIN_M=Info[i].ENGLISH;
						MIN_STU=i;
					}
			strcpy_s(MIN_OBJ,"Ӣ��");
			break;
		}
	case '4':
		{
			for(int i=0;i<I;i++)
				if(Info[i].HISTORY<=MIN_M)
					{
						MIN_M=Info[i].HISTORY;
						MIN_STU=i;
					}
			strcpy_s(MIN_OBJ,"��ʷ");
			break;
		}
	case '5':
		{
			for(int i=0;i<I;i++)
				if(Info[i].ART<=MIN_M)
					{
						MIN_M=Info[i].ART;
						MIN_STU=i;
					}
			strcpy_s(MIN_OBJ,"����");
			break;
		}
	case '6':
		{
			for(int i=0;i<I;i++)
				Info[i].SUMS=Fun5.SUM(i);
			for(int j=0;j<I;j++)
				if(Info[j].SUMS<=MIN_M)
					{
						MIN_M=Info[j].SUMS;
						MIN_STU=j;
					}
			strcpy_s(MIN_OBJ,"ѧ����");
			break;
		}
	}
	system("cls");
	cout<<"\n\n"<<Info[MIN_STU].NAME<<"ͬѧ��"<<MIN_OBJ<<"�ɼ�Ϊ����"<<MIN_OBJ<<"�ɼ�����ͷ֣�����Ϊ:"<<MIN_M<<endl;

	cout<<"\n\n\n\t\t\t   ����1��������������ͷ�\n\t\t\t   ����6����ͳ�Ʋ˵�\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='1')
	{
		system("cls");
		Fun5.MIN();
	}
	else if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('5');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}
}
/****************************************************************************/
void FunctionIn5::MAX()
{
	InfoMenu Menu;
	FunctionIn5 Fun5;
	int MAX_M=0,MAX_IN=0,MAX_STU=0;
	char MAX_OBJ[10];
	int S;

	cout<<"\n\n����������߷ּ���,��ѡ����Ҫ����Ŀ�Ŀ:\n\n\t\t\t   1.����\n\n\t\t\t   2.��ѧ\n\n\t\t\t   3.Ӣ��\n\n\t\t\t   4.��ʷ\n\n\t\t\t   5.����\n\n\t\t\t   6.ѧ���ܷ�"<<endl;
	MAX_IN = _getch();
	system("cls");
	switch(MAX_IN)
	{
	case '1':
		{
			for(int i=0;i<I;i++)
				if(Info[i].CHINESE>=MAX_M)
					{
						MAX_M=Info[i].CHINESE;
						MAX_STU=i;
					}
			strcpy_s(MAX_OBJ,"����");
			break;
		}
	case '2':
		{
			for(int i=0;i<I;i++)
				if(Info[i].MATH>=MAX_M)
					{
						MAX_M=Info[i].MATH;
						MAX_STU=i;
					}
			strcpy_s(MAX_OBJ,"��ѧ");
			break;
		}
	case '3':
		{
			for(int i=0;i<I;i++)
				if(Info[i].ENGLISH>=MAX_M)
					{
						MAX_M=Info[i].ENGLISH;
						MAX_STU=i;
					}
			strcpy_s(MAX_OBJ,"Ӣ��");
			break;
		}
	case '4':
		{
			for(int i=0;i<I;i++)
				if(Info[i].HISTORY>=MAX_M)
					{
						MAX_M=Info[i].HISTORY;
						MAX_STU=i;
					}
			strcpy_s(MAX_OBJ,"��ʷ");
			break;
		}
	case '5':
		{
			for(int i=0;i<I;i++)
				if(Info[i].ART>=MAX_M)
					{
						MAX_M=Info[i].ART;
						MAX_STU=i;
					}
			strcpy_s(MAX_OBJ,"����");
			break;
		}
	case '6':
		{
			for(int i=0;i<I;i++)
				Info[i].SUMS=Fun5.SUM(i);
			for(int j=0;j<I;j++)
				if(Info[j].SUMS>=MAX_M)
					{
						MAX_M=Info[j].SUMS;
						MAX_STU=j;
					}
			strcpy_s(MAX_OBJ,"ѧ����");
			break;
		}
	}
	system("cls");
	cout<<"\n\n"<<Info[MAX_STU].NAME<<"ͬѧ��"<<MAX_OBJ<<"�ɼ�Ϊ����"<<MAX_OBJ<<"�ɼ�����ͷ֣�����Ϊ:"<<MAX_M<<endl;

	cout<<"\n\n\n\t\t\t   ����1��������������߷�\n\t\t\t   ����6����ͳ�Ʋ˵�\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='1')
	{
		system("cls");
		Fun5.MAX();
	}
	else if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('5');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}
}
/****************************************************************************/
void FunctionIn5::UNPEOPLE()
{
	InfoMenu Menu;
	FunctionIn5 Fun5;
	int UNP_UNP=60;											//Ĭ�ϲ����������Ϊ60
	int UNP_IN=0,UNP_COUNT=0;
	char UNP_OBJ[10];
	int S;

	cout<<"\n\n���������ļ��������:";
	cin>>UNP_UNP;
	system("cls");
	cout<<"\n\n�������в���������ͳ��,��ѡ����Ҫͳ�ƵĿ�Ŀ:\n\n\t\t\t   1.����\n\n\t\t\t   2.��ѧ\n\n\t\t\t   3.Ӣ��\n\n\t\t\t   4.��ʷ\n\n\t\t\t   5.����"<<endl;
	UNP_IN = _getch();
	system("cls");
	switch(UNP_IN)
	{
	case '1':
		{
			for(int i=0;i<I;i++)
				if(Info[i].CHINESE<=UNP_UNP)
					UNP_COUNT++;							//���в�������������
			strcpy_s(UNP_OBJ,"����");
			break;
		}
	case '2':
		{
			for(int i=0;i<I;i++)
				if(Info[i].MATH<=UNP_UNP)
					UNP_COUNT++;
			strcpy_s(UNP_OBJ,"��ѧ");
			break;
		}
	case '3':
		{
			for(int i=0;i<I;i++)
				if(Info[i].ENGLISH<=UNP_UNP)
					UNP_COUNT++;
			strcpy_s(UNP_OBJ,"Ӣ��");
			break;
		}
	case '4':
		{
			for(int i=0;i<I;i++)
				if(Info[i].HISTORY<=UNP_UNP)
					UNP_COUNT++;
			strcpy_s(UNP_OBJ,"��ʷ");
			break;
		}
	case '5':
		{
			for(int i=0;i<I;i++)
				if(Info[i].ART<=UNP_UNP)
					UNP_COUNT++;
			strcpy_s(UNP_OBJ,"����");
			break;
		}
	}
	cout<<"\n\n���ݿ⹲��"<<I<<"λͬѧ��"<<UNP_OBJ<<"�ɼ��Ĳ�����������"<<UNP_COUNT<<"�ˣ�"<<UNP_OBJ<<"�ɼ��Ĳ�������Ϊ:"<<setprecision(3)<<(UNP_COUNT*100)/I<<"%"<<endl;

	cout<<"\n\n\n\t\t\t   ����1��������������Ŀ�Ĳ���������\n\t\t\t   ����6����ͳ�Ʋ˵�\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='1')
	{
		system("cls");
		Fun5.UNPEOPLE();
	}
	else if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('5');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}
}
/****************************************************************************/



/*********************************�ļ����************************************/
void InfoMenu::OUTPUT()
{
	InfoMenu Menu;
	int S=0;
	ofstream FILE;
	FILE.open("StuInfo.txt",ios::out);
	system("cls");
	cout<<"\n\n\n\t\t\t   ���ڵ���";
	for(int i=0;i<6;i++)
	{
		cout<<".";
		for(int j=0;j<DELAY/8;j++){}
//		cout<<".";
//		for(int k=0;k<DELAY/8;k++){}
//		cout<<".";
//		for(int l=0;l<DELAY/8;l++){}
//		cout<<".";
//		for(int j=0;j<DELAY/8;j++){}
//		cout<<".";
//		for(int k=0;k<DELAY/8;k++){}
//		cout<<".";
//		for(int l=0;l<DELAY/8;l++){}
	}

	for(int ii=0;ii<I;ii++)
	{
		FILE<<Info[ii].AGE<<"\n";
		FILE<<Info[ii].ART<<"\n";
		FILE<<Info[ii].CHINESE<<"\n";
		FILE<<Info[ii].CLASS<<"\n";
		FILE<<Info[ii].ENGLISH<<"\n";
		FILE<<Info[ii].HISTORY<<"\n";
		FILE<<Info[ii].MATH<<"\n";
		FILE<<Info[ii].NAME<<"\n";
		FILE<<Info[ii].SEX<<"\n";
		FILE<<Info[ii].STUNUM<<"\n";
	}
	system("cls");
	cout<<"\n\n\n\t\t\t   �����ɹ�!"<<endl;
	FILE.close();

	cout<<"\n\t\t\t   ����6����ͳ�Ʋ˵�\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('5');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}
}
/****************************************************************************/
void InfoMenu::INPUT()
{
	InfoMenu Menu;
	int S=0;
	int Count=0;
	string STR;
	stringstream pSTR;
	ifstream FILE;
	FILE.open("StuInfo.txt",ios::in);
	system("cls");
	cout<<"\n\n\n\t\t\t   ���ڵ���";
	for(int i=0;i<6;i++)
	{
		cout<<".";
		for(int j=0;j<DELAY/8;j++){}
	}

	while(getline(FILE,STR))								//�����ļ���������
		Count++;
	FILE.close();
															//�����ļ�״̬��ʹgetline��ͷ��ʼ��ȡ
	FILE.open("StuInfo.txt",ios::in);
//	while(!FILE.eof())
//	{
	for(int i=0;i<10;i++)
		Menu.FILECHOISE(i+1,Count);

	system("cls");
	cout<<"\n\n\n\t\t\t   ����ɹ�!"<<endl;
	FILE.close();

	cout<<"\n\t\t\t   ����6����ͳ�Ʋ˵�\n\t\t\t   ����5�������˵�\n\t\t\t   ����0�˳�AXѧ���ɼ�����ϵͳ\n"<<endl;
	S = _getch();
	if(S=='6')
	{
		system("cls");
		Menu.SWITCHIn('5');
	}
	else if(S=='5')
	{
		system("cls");
		Menu.MENUIn();
	}
	else if(S=='0')
	{
		system("cls");
		Menu.SWITCHIn('0');
	}
}
/****************************************************************************/
void InfoMenu::FILECHOISE(int Rows,int Count)
{
	ifstream FILE;
	string STR;
	stringstream pSTR;
	int j=0,i=0;
	switch(Rows)
	{
	case 1:
	{
			  FILE.open("StuInfo.txt",ios::in);
//			  for(int i=0;i<(Count/10);i++)						//wrong
//			  {
				  while(getline(FILE,STR)&&j<Rows+(i*10))
				  {
					  pSTR.clear();											//ÿ��ʹ��ǰ��Ҫ���
					  pSTR.str(STR);										//string��ֵ��int
					  pSTR>>Info[i].AGE;
					  j++;
					  if (j==Rows+(i*10))
						   i++;
				  }
//			  }
			  I=Count/10;
			  j=0;
			  FILE.close();
	}
	case 2:
	{
			  FILE.open("StuInfo.txt", ios::in);
			  {
				  while(getline(FILE,STR)&&j<Rows+(i*10))
				  {
					  pSTR.clear();
					  pSTR.str(STR);										//string��ֵ��char
					  pSTR>>Info[i].ART;
					  j++;
					  if(j==Rows+(i*10))
						  i++;
				  }
			  }
			  I=Count/10;
			  j=0;
			  FILE.close();
	}
	case 3:
	{
			  FILE.open("StuInfo.txt", ios::in);
			  {
				  while(getline(FILE,STR)&&j<Rows+(i*10))
				  {
					  pSTR.clear();
					  pSTR.str(STR);
					  pSTR >> Info[i].CHINESE;
					  j++;
					  if (j==Rows+(i*10))
						  i++;
				  }
			  }
			  I=Count/10;
			  j=0;
			  FILE.close();
	}
	case 4:
	{
			  FILE.open("StuInfo.txt", ios::in);
			  {
				  while (getline(FILE,STR)&&j<Rows+(i*10))
				  {
					  pSTR.clear();
					  pSTR << STR;
					  pSTR >> Info[i].CLASS;
					  j++;																			//�ɿ�ʼλ��Pos��ʼ��ÿ��width�д��ļ���ȡ�������ݶ�������B��
					  if (j==Rows+(i*10))
						  i++;
				  }
			  }
			  I=Count/10;
			  j=0;
			  FILE.close();
	}
	case 5:
	{
			  FILE.open("StuInfo.txt", ios::in);
			  {
				  while(getline(FILE,STR)&&j<Rows+(i*10))
				  {
					  pSTR.clear();
					  pSTR.str(STR);
					  pSTR >> Info[i].ENGLISH;
					  j++;
					  if(j==Rows+(i*10))
						  i++;
				  }
			  }
			  I=Count/10;
			  j=0;
			  FILE.close();
	}
	case 6:
	{
			  FILE.open("StuInfo.txt", ios::in);
			  {
				  while (getline(FILE, STR) && j < Rows + (i * 10) )
				  {
					  pSTR.clear();
					  pSTR.str(STR);
					  pSTR >> Info[i].HISTORY;
					  j++;
					  if (j == Rows + (i * 10))
						  i++;
				  }
			  }
			  I = Count / 10;
			  j = 0;
			  FILE.close();
	}
	case 7:
	{
			  FILE.open("StuInfo.txt", ios::in);
			  {
				  while (getline(FILE, STR) && j < Rows + (i * 10) )
				  {
					  pSTR.clear();
					  pSTR.str(STR);
					  pSTR >> Info[i].MATH;
					  j++;
					  if (j == Rows + (i * 10))
						  i++;
				  }
			  }
			  I = Count / 10;
			  j = 0;
			  FILE.close();
	}
	case 8:
	{
			  FILE.open("StuInfo.txt", ios::in);
			  {
				  while (getline(FILE, STR) && j < Rows + (i * 10) )
				  {
					  pSTR.clear();
					  pSTR << STR;
					  pSTR >> Info[i].NAME;
					  j++;
					  if (j == Rows + (i * 10))
						  i++;
				  }
			  }
			  I = Count / 10;
			  j = 0;
			  FILE.close();
	}
	case 9:
	{
			  FILE.open("StuInfo.txt", ios::in);
			  {
				  while (getline(FILE, STR) && j < Rows + (i * 10) )
				  {
					  pSTR.clear();
					  pSTR << STR;
					  pSTR >> Info[i].SEX;
					  j++;
					  if (j == Rows + (i * 10))
						  i++;
				  }
			  }
			  I = Count / 10;
			  j = 0;
			  FILE.close();
	}
	case 10:
	{
			  FILE.open("StuInfo.txt", ios::in);
				  while (getline(FILE, STR) && j < Rows + (i * 10) )
				  {
					  pSTR.clear();
					  pSTR.str(STR);
					  pSTR >> Info[i].STUNUM;
					  j++;
					  if (j == Rows + (i * 10))
						  i++;
				  }
			  I = Count / 10;
			  j = 0;
			  FILE.close();
	}
	}
}
/****************************************************************************/