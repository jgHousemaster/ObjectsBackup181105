#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>						//求平均值输出格式操作符头文件
#include <sstream>
#include <conio.h>						//_getch()头文件
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

	int CHINESE;						//各科成绩
	int	MATH;
	int ENGLISH;
	int HISTORY;
	int ART;

	int SUMS;							//学生成绩总和，不显示在学生信息里
};
const int N=25;							//常量N表示数据库容量大小
static StuInfoSTR Info[N];				//所有人员对象数组
static int I=0;							//现有数据库内所包含的数据
static int FF=0;						//无重名现象//FF为所查找的人，方便在其他函数中使用
static int DELAY=500000000;				//延时数据
/****************************************************************************/
class InfoMenu
{
public:
	void MENUIn();						//显示菜单
	void MENUIn5();
	void MENUExit();
	void SWITCHIn(int C);				//选择菜单，与Menu函数嵌套保证系统不会无故退出
	void CHOISEIn();					//实现显示菜单的选择功能
	void CHOISEIn5();

	void GET();
	void SHOW();
	void OUTPUT();					//导出到文件
	void INPUT();					//从文件导入
	
	void FILECHOISE(int Rows,int Count);
	void FINDMenu();					//查找菜单，使查找功能独立，方便其他函数嵌套调用查找功能
	void SHOWFIND(int i);
	void SUMMENU();						//求和菜单，同查找菜单
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
	void UNPEOPLE();					//不及格人数
};
/****************************************************************************/




/*------------------------------MainMenu Do---------------------------------*/
/****************************************************************************/
void InfoMenu::MENUIn()
{
	cout<<"\n\t\t\t欢迎使用AX学生成绩管理系统!\n"<<endl;
	cout<<"\n\t\t\t   1.学生成绩录入。"<<endl;
	cout<<"\n\t\t\t   2.学生成绩查找。"<<endl;
	cout<<"\n\t\t\t   3.学生成绩删除。"<<endl;
	cout<<"\n\t\t\t   4.学生成绩修改。"<<endl;
	cout<<"\n\t\t\t   5.学生成绩数据统计。"<<endl;
	cout<<"\n\t\t\t   6.列出所有学生成绩信息。"<<endl;
	cout<<"\n\t\t\t   7.学生成绩信息导出（到文件）。"<<endl;
	cout<<"\n\t\t\t   8.学生成绩信息导入（从文件）。"<<endl;
	cout<<"\n\t\t\t   0.退出AX学生成绩管理系统。\n"<<endl;

	InfoMenu Menu;
	Menu.CHOISEIn();					//实现选择功能
}
/****************************************************************************/
void InfoMenu::MENUIn5()
{
	cout<<"\n\n\t\t\t请选择您需要的数据统计操作:"<<endl;
	cout<<"\n\t\t\t   1.学生成绩总分。"<<endl;
	cout<<"\n\t\t\t   2.科目成绩平均分。"<<endl;
	cout<<"\n\t\t\t   3.科目成绩最低分。"<<endl;
	cout<<"\n\t\t\t   4.科目成绩最高分。"<<endl;
	cout<<"\n\t\t\t   5.不及格人数。"<<endl;
	cout<<"\n\t\t\t   6.返回主菜单。"<<endl;
	cout<<"\n\t\t\t   0.退出AX学生成绩管理系统。"<<endl;

	InfoMenu Menu;
	Menu.CHOISEIn5();
}
/****************************************************************************/
void InfoMenu::MENUExit()
{
	cout<<"\n\n\t\t   感谢您使用AX成绩管理系统，欢迎下次再来!"<<endl;
	cout<<"\n\n\t\t   即将退出......\n\n\n\n\n\n\n\n\n\n"<<endl;
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
				system("cls");								//清屏
				InfoGet_Show.GET();							//学生信息录入
				system("cls");
				cout<<"\n\n\t\t\t   "<<Info[I].NAME<<"同学的信息已录入完毕!\n";
				cout<<"\n\n\n\t\t\t   输入1录入其他同学信息\n\t\t\t   输入6显示所有同学的信息\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX成绩管理系统\n";
				C = _getch();										//功能退出子菜单，其他函数中相同
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
				Menu.FINDMenu();							//调用相应函数，实现菜单相应功能
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
		default :											//容错处理示例
			{
				system("cls");
				cout<<"\n\n\n\t\t\t   输入错误，请重新输入！\n"<<endl;
				Menu.MENUIn();									//嵌套调用，使系统不会退出
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
	if(C!='1'&&C!='0'&&C!='8')											//容错处理，保证数据库内有数据
	{
		if(I==0)
		{
			system("cls");
			cout<<"\n\n\n\t\t\t   数据库为空，请选择是否录入信息（Y/N）:"<<endl;
			CH_SURE = _getch();									//输入非Y，N则按N处理
			if(CH_SURE=='Y' || CH_SURE == 'y')
				Menu.SWITCHIn('1');
			else 
			{
				system("cls");
				cout<<"\n\n\n\t\t\t   即将返回主菜单\n"<<endl;
				for(int i=0;i<DELAY;i++){}					//延时处理，使提示更人性化
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
{															//具体同SWITCH函数
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
			cout<<"\n\n\n\t\t\t   输入错误，请重新输入！\n"<<endl;
			Menu.MENUIn5();
			break;
		}
	}
}
/****************************************************************************/
void InfoMenu::GET()
{
	if(I==N)												//限定数据库大小，减少内存占用
		cout<<"\n\n\t\t   数据库已满!"<<endl;
	cout<<"\n请输入您要录入的学生信息:"<<endl;
	cout<<"\n姓名:";cin>>Info[I].NAME;
	cout<<"\n学号:";cin>>Info[I].STUNUM;
	cout<<"\n性别:";cin>>Info[I].SEX;
	cout<<"\n班级:";cin>>Info[I].CLASS;
	cout<<"\n年龄:";cin>>Info[I].AGE;
	cout<<"\n语文成绩:";cin>>Info[I].CHINESE;
	cout<<"\n数学成绩:";cin>>Info[I].MATH;
	cout<<"\n英语成绩:";cin>>Info[I].ENGLISH;
	cout<<"\n历史成绩:";cin>>Info[I].HISTORY;
	cout<<"\n艺术成绩:";cin>>Info[I].ART;
	I++;
}
/****************************************************************************/
void InfoMenu::SHOW()
{
	InfoMenu Menu;
	int S;

	for(int i=0;i<I;i++)
	{														//遍历数据库
		cout<<"\n学生"<<i+1<<":"<<endl;
		cout<<"\n\t\t\t   姓名:"<<Info[i].NAME<<"\n";
		cout<<"\n\t\t\t   学号:"<<Info[i].STUNUM<<"\n";
		cout<<"\n\t\t\t   性别:"<<Info[i].SEX<<"\n";
		cout<<"\n\t\t\t   班级:"<<Info[i].CLASS<<"\n";
		cout<<"\n\t\t\t   年龄:"<<Info[i].AGE<<"\n";
		cout<<"\n\t\t\t   语文成绩:"<<Info[i].CHINESE<<"\n";
		cout<<"\n\t\t\t   数学成绩:"<<Info[i].MATH<<"\n";
		cout<<"\n\t\t\t   英语成绩:"<<Info[i].ENGLISH<<"\n";
		cout<<"\n\t\t\t   历史成绩:"<<Info[i].HISTORY<<"\n";
		cout<<"\n\t\t\t   艺术成绩:"<<Info[i].ART<<"\n"<<endl;
	}

	cout<<"\n\n\t\t\t   输入1继续录入同学信息\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX成绩管理系统\n"<<endl;
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

	cout<<"\n\n\n\t\t\t   1.按名字查找\n\n\t\t\t   2.按学号查找\n"<<endl;
	F = _getch();
	if(F!='1'&&F!='2') 
	{															//小功能容错处理示例
		system("cls");
		cout<<"\n\n\t\t\t   输入序号有误，请重新输入！\n"<<endl;
		Menu.FINDMenu();
	}
	system("cls");
	Func.FIND(F);												//嵌套查找功能

	if(I!=0)
	{
		cout<<"\n\t\t\t   输入2继续查找其他同学信息\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统"<<endl;
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
		cout<<"\n\t\t\t   姓名:"<<Info[i].NAME<<"\n";
		cout<<"\n\t\t\t   学号:"<<Info[i].STUNUM<<"\n";
		cout<<"\n\t\t\t   性别:"<<Info[i].SEX<<"\n";
		cout<<"\n\t\t\t   班级:"<<Info[i].CLASS<<"\n";
		cout<<"\n\t\t\t   年龄:"<<Info[i].AGE<<"\n";
		cout<<"\n\t\t\t   语文成绩:"<<Info[i].CHINESE<<"\n";
		cout<<"\n\t\t\t   数学成绩:"<<Info[i].MATH<<"\n";
		cout<<"\n\t\t\t   英语成绩:"<<Info[i].ENGLISH<<"\n";
		cout<<"\n\t\t\t   历史成绩:"<<Info[i].HISTORY<<"\n";
		cout<<"\n\t\t\t   艺术成绩:"<<Info[i].ART<<"\n"<<endl;
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

	cout<<"\n\n即将进行总分计算,请输入您要计算总分的同学的姓名或学号:\n\n\t\t\t   1.姓名\n\n\t\t\t   2.学号"<<endl;
	SUM_IN_CH = _getch();
	system("cls");
	Fun.FIND(SUM_IN_CH);									//先查找到同学信息，再进行求和
	SUM_S=Fun5.SUM(FF);
	cout<<Info[FF].NAME<<"同学的总成绩为:"<<SUM_S<<endl;

	cout<<"\n\t\t\t   输入1继续计算其他同学总分\n\t\t\t   输入6返回统计菜单\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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
		cout<<"\n\n请输入要查找的内容:";
		cin>>F_NAME;
		for(int i=0;i<I;i++)
		{
			if(strcmp(F_NAME,Info[i].NAME)==0)				//进行数据对比查找
			{
				cout<<"\n\n“"<<Info[i].NAME<<"”"<<"同学的信息为:";
				Menu.SHOWFIND(i);							//嵌套调用显示功能
				FF=i;F_SURE_1=1;break;						//不加break输出出错
			}
		}
		if(F_SURE_1==0)
			cout<<"\n\t\t\t   未找到“"<<F_NAME<<"”同学的信息！"<<endl;
	}

	else if(F=='2')
	{
		cout<<"\n\n请输入要查找的内容:";
		cin>>F_NUM;
		for(int i=0;i<I;i++)
		{
			if(F_NUM==Info[i].STUNUM)
			{
				cout<<"\n\n“"<<Info[i].STUNUM<<"”"<<"同学的信息为:";
				Menu.SHOWFIND(i);
				FF=i;F_SURE_2=1;break;
			}
		}
		if(F_SURE_2==0)
			cout<<"\n\t\t\t   未找到“"<<F_NUM<<"”同学的信息！"<<endl;
	}
}
/****************************************************************************/
void FunctionIn::DELETE()
{
	InfoMenu Menu;
	FunctionIn Function;
	int F,S;
	char D_F_SURE;

	cout<<"\n\n请先选择您要删除的人员\n\n输入1按名字查找，输入2按学号查找:";
	F = _getch();
	Function.FIND(F);
	cout<<"\n\n\n\t\t\t   确认删除?（Y/N）\n"<<endl;
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
		cout<<"\n\n\n\t\t\t   删除成功！"<<endl;
	}
	else
		cout<<"\n\n\n\t\t\t   删除失败，用户取消操作!\n\n"<<endl;

	cout<<"\n\t\t\t   输入3继续删除其他同学信息\n\t\t\t   输入6显示所有同学信息\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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

	cout<<"\n\n请先选择您要修改的人员\n\n输入1按名字查找，输入2按学号查找:";
	F = _getch();
	Function.FIND(F);
	for(int i=0;i<DELAY;i++){}									//延时
	system("cls");
	cout<<"\n\n\t\t请选择您要修改的选项\n\n\t\t\t   1.姓名\n\n\t\t\t   2.性别\n\n\t\t\t   3.学号\n\n\t\t\t   4.班级\n\n\t\t\t   5.年龄\n\n\t\t\t   6.语文成绩\n\n\t\t\t   7.数学成绩\n\n\t\t\t   8.英语成绩\n\n\t\t\t   9.历史成绩\n\n\t\t\t   10.艺术成绩\n"<<endl;
	CHANGE_CHIOSE = _getch();
	system("cls");
	cout<<"\n\n\n请输入您要修改的内容:";
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
	cout<<"\n\n\n\t\t\t   修改成功！"<<endl;

	cout<<"\n\t\t\t   输入4继续修改其他同学信息\n\t\t\t   输入6显示所有同学信息\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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
	int SUM_SUM=0;											//单一的求和，方便其他函数调用
	SUM_SUM=Info[i].CHINESE+Info[i].MATH+Info[i].ENGLISH+Info[i].HISTORY+Info[i].ART;
	return SUM_SUM;
}
/****************************************************************************/
void FunctionIn5::AVERANGE()
{
	InfoMenu Menu;
	FunctionIn5 Fun5;
	float AV_AV;											//全为float输出小数
	float AV_SUM_1=0,AV_SUM_2=0,AV_SUM_3=0,AV_SUM_4=0,AV_SUM_5=0;
	int AV_IN=0;
	char AV_OBJ[10];
	int S;

	cout<<"\n\n即将进行平均分计算,请选择您要计算的科目:\n\n\t\t\t   1.语文\n\n\t\t\t   2.数学\n\n\t\t\t   3.英语\n\n\t\t\t   4.历史\n\n\t\t\t   5.艺术"<<endl;
	AV_IN = _getch();
	system("cls");
	switch(AV_IN)
	{
	case '1':
		{
			for(int i=0;i<I;i++)
				AV_SUM_1+=Info[i].CHINESE;
			AV_AV=AV_SUM_1/I;
			strcpy_s(AV_OBJ,"语文");							//方便输出
			break;
		}
	case '2':
		{
			for(int i=0;i<I;i++)
				AV_SUM_2+=Info[i].MATH;
			AV_AV=AV_SUM_2/I;
			strcpy_s(AV_OBJ,"数学");
			break;
		}
	case '3':
		{
			for(int i=0;i<I;i++)
				AV_SUM_3+=Info[i].ENGLISH;
			AV_AV=AV_SUM_3/I;
			strcpy_s(AV_OBJ,"英语");
			break;
		}
	case '4':
		{
			for(int i=0;i<I;i++)
				AV_SUM_4+=Info[i].HISTORY;
			AV_AV=AV_SUM_4/I;
			strcpy_s(AV_OBJ,"历史");
			break;
		}
	case '5':
		{
			for(int i=0;i<I;i++)
				AV_SUM_5+=Info[i].ART;
			AV_AV=AV_SUM_5/I;
			strcpy_s(AV_OBJ,"艺术");
			break;
		}
	}

	cout<<"\n\n\n数据库内共有"<<I<<"位同学，"<<AV_OBJ<<"科目的平均分为:"<<setprecision(3)<<AV_AV<<endl;//输出格式操作符
	cout<<"\n\n\t\t\t   输入1继续计算其他科目平均分\n\t\t\t   输入6返回统计菜单\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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

	cout<<"\n\n即将进行最低分计算,请选择您要计算的科目:\n\n\t\t\t   1.语文\n\n\t\t\t   2.数学\n\n\t\t\t   3.英语\n\n\t\t\t   4.历史\n\n\t\t\t   5.艺术\n\n\t\t\t   6.学生总分"<<endl;
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
						MIN_STU=i;								//标记学生，方便输出
					}
			strcpy_s(MIN_OBJ,"语文");
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
			strcpy_s(MIN_OBJ,"数学");
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
			strcpy_s(MIN_OBJ,"英语");
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
			strcpy_s(MIN_OBJ,"历史");
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
			strcpy_s(MIN_OBJ,"艺术");
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
			strcpy_s(MIN_OBJ,"学生总");
			break;
		}
	}
	system("cls");
	cout<<"\n\n"<<Info[MIN_STU].NAME<<"同学的"<<MIN_OBJ<<"成绩为所有"<<MIN_OBJ<<"成绩的最低分，分数为:"<<MIN_M<<endl;

	cout<<"\n\n\n\t\t\t   输入1继续计算其他最低分\n\t\t\t   输入6返回统计菜单\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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

	cout<<"\n\n即将进行最高分计算,请选择您要计算的科目:\n\n\t\t\t   1.语文\n\n\t\t\t   2.数学\n\n\t\t\t   3.英语\n\n\t\t\t   4.历史\n\n\t\t\t   5.艺术\n\n\t\t\t   6.学生总分"<<endl;
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
			strcpy_s(MAX_OBJ,"语文");
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
			strcpy_s(MAX_OBJ,"数学");
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
			strcpy_s(MAX_OBJ,"英语");
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
			strcpy_s(MAX_OBJ,"历史");
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
			strcpy_s(MAX_OBJ,"艺术");
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
			strcpy_s(MAX_OBJ,"学生总");
			break;
		}
	}
	system("cls");
	cout<<"\n\n"<<Info[MAX_STU].NAME<<"同学的"<<MAX_OBJ<<"成绩为所有"<<MAX_OBJ<<"成绩的最低分，分数为:"<<MAX_M<<endl;

	cout<<"\n\n\n\t\t\t   输入1继续计算其他最高分\n\t\t\t   输入6返回统计菜单\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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
	int UNP_UNP=60;											//默认不及格分数线为60
	int UNP_IN=0,UNP_COUNT=0;
	char UNP_OBJ[10];
	int S;

	cout<<"\n\n请输入您的及格分数线:";
	cin>>UNP_UNP;
	system("cls");
	cout<<"\n\n即将进行不及格人数统计,请选择您要统计的科目:\n\n\t\t\t   1.语文\n\n\t\t\t   2.数学\n\n\t\t\t   3.英语\n\n\t\t\t   4.历史\n\n\t\t\t   5.艺术"<<endl;
	UNP_IN = _getch();
	system("cls");
	switch(UNP_IN)
	{
	case '1':
		{
			for(int i=0;i<I;i++)
				if(Info[i].CHINESE<=UNP_UNP)
					UNP_COUNT++;							//进行不及格人数计算
			strcpy_s(UNP_OBJ,"语文");
			break;
		}
	case '2':
		{
			for(int i=0;i<I;i++)
				if(Info[i].MATH<=UNP_UNP)
					UNP_COUNT++;
			strcpy_s(UNP_OBJ,"数学");
			break;
		}
	case '3':
		{
			for(int i=0;i<I;i++)
				if(Info[i].ENGLISH<=UNP_UNP)
					UNP_COUNT++;
			strcpy_s(UNP_OBJ,"英语");
			break;
		}
	case '4':
		{
			for(int i=0;i<I;i++)
				if(Info[i].HISTORY<=UNP_UNP)
					UNP_COUNT++;
			strcpy_s(UNP_OBJ,"历史");
			break;
		}
	case '5':
		{
			for(int i=0;i<I;i++)
				if(Info[i].ART<=UNP_UNP)
					UNP_COUNT++;
			strcpy_s(UNP_OBJ,"艺术");
			break;
		}
	}
	cout<<"\n\n数据库共有"<<I<<"位同学，"<<UNP_OBJ<<"成绩的不及格人数有"<<UNP_COUNT<<"人，"<<UNP_OBJ<<"成绩的不及格率为:"<<setprecision(3)<<(UNP_COUNT*100)/I<<"%"<<endl;

	cout<<"\n\n\n\t\t\t   输入1继续计算其他科目的不及格人数\n\t\t\t   输入6返回统计菜单\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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



/*********************************文件相关************************************/
void InfoMenu::OUTPUT()
{
	InfoMenu Menu;
	int S=0;
	ofstream FILE;
	FILE.open("StuInfo.txt",ios::out);
	system("cls");
	cout<<"\n\n\n\t\t\t   正在导出";
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
	cout<<"\n\n\n\t\t\t   导出成功!"<<endl;
	FILE.close();

	cout<<"\n\t\t\t   输入6返回统计菜单\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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
	cout<<"\n\n\n\t\t\t   正在导入";
	for(int i=0;i<6;i++)
	{
		cout<<".";
		for(int j=0;j<DELAY/8;j++){}
	}

	while(getline(FILE,STR))								//计算文件内总行数
		Count++;
	FILE.close();
															//重置文件状态，使getline从头开始读取
	FILE.open("StuInfo.txt",ios::in);
//	while(!FILE.eof())
//	{
	for(int i=0;i<10;i++)
		Menu.FILECHOISE(i+1,Count);

	system("cls");
	cout<<"\n\n\n\t\t\t   导入成功!"<<endl;
	FILE.close();

	cout<<"\n\t\t\t   输入6返回统计菜单\n\t\t\t   输入5返回主菜单\n\t\t\t   输入0退出AX学生成绩管理系统\n"<<endl;
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
					  pSTR.clear();											//每次使用前都要清空
					  pSTR.str(STR);										//string赋值给int
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
					  pSTR.str(STR);										//string赋值给char
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
					  j++;																			//由开始位置Pos开始，每隔width行从文件读取该行数据读入数组B中
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