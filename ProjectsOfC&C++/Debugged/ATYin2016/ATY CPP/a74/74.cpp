#include <string>
#include <iostream>
using namespace std;

class people
{
public:
	char name[5];
	int num;
	char sex;	//'b'&'g'
	int id;
	int year,month,day;
	void getpeople(char name1[5],int num1,char sex1,int id1,int yy,int mm,int dd)
	{
		cout<<"Name:";cin>>name1;cout<<"\nNumber:";cin>>num1;cout<<"\nSex:";cin>>sex1;cout<<"\nId:";cin>>id1;cout<<"\nBirthday(yy mm dd):";cin>>yy>>mm>>dd;
		strcpy(name,name1);num=num1;sex=sex1;id=id1;year=yy;month=mm;day=dd;
	}
};

class student:virtual public people
{
public:
	char clasNO[7];
	void getstudent(char NO[7]){cout<<"\nClassNumber:";cin>>NO;strcpy(clasNO,NO);}
};

class teacher:virtual public people
{
public:
	char principalship[11];
	char department[21];
	void getteacher(char prin[11],char depart[21]){cout<<"\nPrincipalship:";cin>>prin;cout<<"\nDepartment:";cin>>depart;strcpy(principalship,prin);strcpy(department,depart);}
};

class graduate:virtual public student
{
public:
	char subject[21];
	teacher adviser;
	void getgraduate(char sub[21]){cout<<"\nSubject:";cin>>sub;strcpy(subject,sub);}
};

class TA:public graduate,public teacher
{
public:
	void showTA()
	{
		cout<<"\n\nThis student's date:"<<"\nName:"<<name<<"\nNumber:"<<num<<"\nSex:"<<sex<<"\nId:"<<id<<"\nBirthday:"<<year<<month<<day<<"\nClassNumber:"<<clasNO<<"\nPrincipalship:"<<principalship<<"\nDepartment:"<<department<<"\nSubject:"<<subject<<"\n"<<endl;
	}
};

int main()
{
	TA ta1;
	char name2[5];
	int num2;
	char sex2;	//'b'&'g'
	int id2;
	int year2,month2,day2;
	char clasNO2[7];
	char principalship2[11];
	char department2[21];
	char subject2[21];

	printf("Please input:\nName  Number  Sex  Id  Birthady  ClassNumber  Principalship  Department  Subject\n");


	ta1.getpeople(name2,num2,sex2,id2,year2,month2,day2);
	ta1.getstudent(clasNO2);
	ta1.getteacher(principalship2,department2);
	ta1.getgraduate(subject2);
	ta1.showTA();
}