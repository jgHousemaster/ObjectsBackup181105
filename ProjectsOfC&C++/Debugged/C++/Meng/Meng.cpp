/*Meng System
version:1.0
Begin date:9.26
Last chang date :9.28
First Test & Pack date:9.28
*/

#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string>
using namespace std;


class Info
{
public:
    void main_info();
    void bank();
    void backpack();
    void title();
	void enemy_info();
	void log();
	void change(char flag);
	void autosyn(char ls);
	
	string name[2];      //前为自己，后为敌人
	int level;                //自己与敌人相同
	
	int m_gold[4];    //0为自己，1为自己银行
	int m_rmb[4];
	int m_dollar[4];
	int m_eng[4];
	int m_meng[4];
	float m_rate;        //银行利率
	
	int buqian_d;
	int buqian_s;
	int buqian_l;
	int root;
	int pk;
	int shengxi;
	int mianze_once;
	int mianze_day;
};

void Info::main_info()
{
	clrscr();
	cout<<"用户名："<<name[0]<<endl;
	cout<<"等级："<<level<<endl;
	cout<<"金钱："<<"  环特"<<m_meng[0]<<"\n\t英镑"<<m_eng[0]<<"\n\t美元"<<m_dollar[0]<<"\n\t人民币"<<m_rmb[0]<<"\n\t金币"<<m_gold[0]<<"\n\t利率"<<m_rate<<endl;
	
	cout<<"\n\n\n1.银行\n2.背包\n3.称号及成就\n4.敌人信息\n5.日志\n6.录入信息\n7.保存\n0.退出"<<endl;
	
	char ch;
	ch=getch();
	switch(ch)
	{
		case '1':bank();break;
		case '2':backpack();break;
		case '3':title();break;
		case '4':enemy_info();break;
		case '5':log();break;
		case '6':change('e');break;
		case '7':autosyn('s');main_info();;break;
		case '0':autosyn('s');exit(0);break;
		default:main_info();break;
	}
	
}
void Info::bank()
{
	clrscr();
	cout<<"银行：\t利率"<<m_rate<<"\n\n用户"<<name[0]<<":\t1.金币"<<m_gold[1]<<"\n\t\t2.人民币"<<m_rmb[1]<<"\n\t\t3.美元"<<m_dollar[1]<<"\n\t\t4.英镑"<<m_eng[1]<<"\n\t\t5.环特"<<m_meng[1]<<"\n\n用户"<<name[1]<<":\t金币"<<m_gold[3]<<"\n\t\t人民币"<<m_rmb[3]<<"\n\t\t美元"<<m_dollar[3]<<"\n\t\t英镑"<<m_eng[3]<<"\n\t\t环特"<<m_meng[3]<<"\n\n\n0.返回"<<endl;
	char ch;
	ch=getch();
	if(ch=='0')
	{
		clrscr();
		main_info();
	}
	else if(ch>'0'&&ch<'6')
	{
		clrscr();
		cout<<"请输入数值(正为存入，负为取出):";
	    int mt;
	    cin>>mt;      //money temp
	    switch(ch)
		{
			case '1':
			{
				m_gold[0]-=mt;
				m_gold[1]+=mt;
				break;
			}
			case '2':
			{
				m_rmb[0]-=mt;
				m_rmb[1]+=mt;
				break;
			}
			case '3':
			{
				m_dollar[0]-=mt;
				m_dollar[1]+=mt;
				break;
			}
			case '4':
			{
				m_eng[0]-=mt;
				m_eng[1]+=mt;
				break;
			}
			case '5':
			{
				m_meng[0]-=mt;
				m_meng[1]+=mt;
				break;
			}
		}
		autosyn('s');
		bank();
	}
	else
	{
		bank();
	}
	
}
void Info::backpack()
{
	clrscr();
	cout<<"背包：  1.补签卡(天)"<<buqian_d<<"\n\t2.补签卡(短)"<<buqian_s<<"\n\t3.补签卡(长)"<<buqian_l<<"\n\t4.管理员卡"<<root<<"\n\t5.PK卡"<<pk<<"\n\t6.升息卡"<<shengxi<<"\n\t7.免责卡(次)"<<mianze_once<<"\n\t8.免责卡(天)"<<mianze_day<<endl;
	cout<<"\n\n0.返回"<<endl;
	char ch;
	ch=getch();
	if(ch<'9'&&ch>'0')
	{
	clrscr();
	cout<<"输入数量(正为添加，负为使用):";
	int bt;      //backpack temp
	cin>>bt;
	switch(ch)
	{
		case '1':buqian_d+=bt;break;
		case '2':buqian_s+=bt;break;
		case '3':buqian_l+=bt;break;
		case '4':root+=bt;break;
		case '5':pk+=bt;break;
		case '6':shengxi+=bt;break;
		case '7':mianze_once+=bt;break;
		case '8':mianze_day+=bt;break;
		default:backpack();break;
	}
	autosyn('s');
	}
	else if(ch=='0') main_info();
	backpack();
	
}
void Info::title()
{
	clrscr();
	cout<<"称号成就：1.输入\n\t  2.查看\n\t  0.返回"<<endl;
	char ch;
	ch=getch();
	switch(ch)
	{
		case '1':
		{
			clrscr();
			cout<<"输入:"<<endl;
	
        	string title_write;
        	getline(cin,title_write);      //可输入空格
	        ofstream title1("title.txt",ios::app);
        	if(!title1) cout<<"失败"<<endl;
//        	else if(title1) cout<<"成功"<<endl;
        	title1<<title_write;
        	title1<<"\n";
        	title1.close();
        	title();
        	break;
		}
	    case '2':
	    {
	    	clrscr();
//	    	cout<<"称号成就："<<endl;
            string title_read;
        	ifstream title2("title.txt");
        	if(!title2) cout<<"失败"<<endl;
//        	else if(title2) cout<<"成功"<<endl;
        	title2.seekg(0,ios::beg);	
        	
        	while(getline(title2,title_read))
	        {         //读取整个文件！！！！！！！
                cout<<title_read<<endl;
	        }
	        title2.close();
	        cout<<"\n\n任意两键返回"<<endl;
	        getch();
	        getch();
	        title();
	        break;
	    }
	    case '0':main_info();break;
	    default:title();break;
	}
}
void Info::enemy_info()
{
	clrscr();
	cout<<"用户名："<<name[1]<<endl;
	cout<<"等级："<<level<<endl;
	cout<<"金钱："<<"  环特"<<m_meng[2]<<"\n\t英镑"<<m_eng[2]<<"\n\t美元"<<m_dollar[2]<<"\n\t人民币"<<m_rmb[2]<<"\n\t金币"<<m_gold[2]<<endl;
	cout<<"\n\n0.返回"<<endl;
	char ch;
	ch=getch();
	if(ch=='0')
	{
		clrscr();
		main_info();
	}
	else
	{
		clrscr();
		enemy_info();
	}
	
}
void Info::log()
{
	clrscr();
	cout<<"日志：  1.输入日志\n\t2.查看日志\n\t0.返回"<<endl;
	char ch;
	ch=getch();
	switch(ch)
	{
		case '1':
		{
			clrscr();
			cout<<"输入日志:"<<endl;
        	time_t t;
        	t=time(NULL);
        	char *time;
        	time=ctime(&t);
	
        	string log_write;
        	getline(cin,log_write);      //可输入空格
	        ofstream log1("log.txt",ios::app);
        	if(!log1) cout<<"失败"<<endl;
//        	else if(log1) cout<<"成功"<<endl;
        	log1<<time;
        	log1<<log_write;
        	log1<<"\n";
        	log1.close();
        	log();
        	break;
		}
	    case '2':
	    {
	    	clrscr();
	    	cout<<"日志："<<endl;
	    	int large=2000;
            string log_read;
        	ifstream log2("log.txt");
        	if(!log2) cout<<"失败"<<endl;
//        	else if(log2) cout<<"成功"<<endl;
        	log2.seekg(0,ios::beg);	
        	
        	while(getline(log2,log_read))
	        {         //读取整个文件！！！！！！！
                cout<<log_read<<endl;
	        }
	        
	        log2.close();
	        cout<<"\n\n任意两键返回"<<endl;
	        getch();
	        getch();
	        log();
	        break;
	    }
	     case '0':main_info();break;
	     default:log();break;
	}
}
void Info::change(char flag)
{
	clrscr();
	switch(flag)
	{
		case 'i':   //first_ini
		{
			name[0]="HuanYe";
			name[1]="DiRen";
			level=0;
			for(int i=0;i<4;i++)
			{
				m_gold[i]=200;
				m_rmb[i]=0;
				m_dollar[i]=0;
				m_eng[i]=0;
				m_meng[i]=0;
			}
			m_rate=1.100;
		    buqian_d=0;
		    buqian_s=0;
		    buqian_l=0;
		    root=0;
		    pk=0;
		    shengxi=0;
		    mianze_once=0;
		    mianze_day=0;
		    break;
		}
		case '1':
		{
			clrscr();
			cout<<"修改\n\n1.等级\n2.金币\n3.RMB\n4.美元\n5.英镑\n6.环特\n0.返回"<<endl;
			char ch;
			ch=getch();
			if(ch=='0') change('e');
			else if(ch<'7'&&ch>'0')
			{
				clrscr();
				cout<<"输入：";
				int it;        //Info temp
				cin>>it;
				switch(ch)
				{
					case '1':level+=it;break;
					case '2':m_gold[0]+=it;break;
					case '3':m_rmb[0]+=it;break;
					case '4':m_dollar[0]+=it;break;
					case '5':m_eng[0]+=it;break;
					case '6':m_meng[0]+=it;break;
				}
				autosyn('s');
			}
			change('1');
			
		}
		case '3':     //month_reset
		{
			m_gold[0]=200;
			m_rmb[0]=0;
			m_dollar[0]=0;
			m_eng[0]=0;
			m_meng[0]=0;
			m_rate=m_rate+0.025;
			break;
		}
		case '2':
		{
			m_gold[1]+=m_gold[0];
			m_rmb[1]+=m_rmb[0];
			m_dollar[1]+=m_dollar[0];
			m_eng[1]+=m_eng[0];
			m_meng[1]+=m_meng[0];
			change('3');
			autosyn('s');
			clrscr();
			cout<<"清算成功！\n\n按任意键返回"<<endl;
			getch();
			change('e');
			break;
		}
		case '0':       //back
		{
			clrscr();
			main_info();
			break;
		}
		case 'e':
		{
							cout<<"1.个人信息\n2.月末清算\n0.返回"<<endl;
	
			int ch;
			ch=getch();
			change(ch);
			break;
		}
		default:change('e');break;
	}
					
}
void Info::autosyn(char ls)
{
	switch(ls)
	{
		case 'l':       //load
		{
			clrscr();
			cout<<"正在读取数据信息...";
			ifstream lfsyn("info.txt");
			if(!lfsyn) cout<<"失败";
			
			string lt;
			lfsyn>>name[0];
			getline(lfsyn,lt);
			lfsyn>>level;
			getline(lfsyn,lt);
			lfsyn>>m_gold[0];
			getline(lfsyn,lt);
			lfsyn>>m_rmb[0];
			getline(lfsyn,lt);
			lfsyn>>m_dollar[0];
			getline(lfsyn,lt);
			lfsyn>>m_eng[0];
			getline(lfsyn,lt);
			lfsyn>>m_meng[0];
			getline(lfsyn,lt);
			lfsyn>>m_gold[1];
			getline(lfsyn,lt);
			lfsyn>>m_rmb[1];
			getline(lfsyn,lt);
			lfsyn>>m_dollar[1];
			getline(lfsyn,lt);
			lfsyn>>m_eng[1];
			getline(lfsyn,lt);
			lfsyn>>m_meng[1];
			getline(lfsyn,lt);
			lfsyn>>buqian_d;
			getline(lfsyn,lt);
			lfsyn>>buqian_s;
			getline(lfsyn,lt);
			lfsyn>>buqian_l;
			getline(lfsyn,lt);
			lfsyn>>root;
			getline(lfsyn,lt);
			lfsyn>>pk;
			getline(lfsyn,lt);
			lfsyn>>shengxi;
			getline(lfsyn,lt);
			lfsyn>>mianze_once;
			getline(lfsyn,lt);
			lfsyn>>mianze_day;
			getline(lfsyn,lt);
			lfsyn>>m_rate;
			
			lfsyn.close();
			clrscr();
			cout<<"读取成功！";
			break;
		}
		case 's':     //save
		{
			clrscr();
			cout<<"正在保存...";
			ofstream fsyn("info.txt");
			if(!fsyn) cout<<"失败";
			
			fsyn<<name[0];
			fsyn<<"\n";
			fsyn<<level;
			fsyn<<"\n";
			fsyn<<m_gold[0];
			fsyn<<"\n";
			fsyn<<m_rmb[0];
			fsyn<<"\n";
			fsyn<<m_dollar[0];
			fsyn<<"\n";
			fsyn<<m_eng[0];
			fsyn<<"\n";
			fsyn<<m_meng[0];
			fsyn<<"\n";
			fsyn<<m_gold[1];
			fsyn<<"\n";
			fsyn<<m_rmb[1];
			fsyn<<"\n";
			fsyn<<m_dollar[1];
			fsyn<<"\n";
			fsyn<<m_eng[1];
			fsyn<<"\n";
			fsyn<<m_meng[1];
			fsyn<<"\n";
			fsyn<<buqian_d;
			fsyn<<"\n";
			fsyn<<buqian_s;
			fsyn<<"\n";
			fsyn<<buqian_l;
			fsyn<<"\n";
			fsyn<<root;
			fsyn<<"\n";
			fsyn<<pk;
			fsyn<<"\n";
			fsyn<<shengxi;
			fsyn<<"\n";
			fsyn<<mianze_once;
			fsyn<<"\n";
			fsyn<<mianze_day;
			fsyn<<"\n";
			fsyn<<m_rate;
			fsyn.close();
			clrscr();
			cout<<"保存成功！(任意键返回)";
			getch();
			break;
		}
	}
}


int main()
{
	Info info;
	info.change('i');
	info.autosyn('l');
	info.main_info();
	/*按行读取
	for(int i=0;i<line;i++)
	{
		getline(file,str);
    }
    此时str即为第line行内容*/
	return 0;
}