#include <iostream>
#include <string>			//һ��Ҫ����stringͷ�ļ�������string������
using namespace std;


#define code "12345"
int main()
{
//	char codde;
	string codde;			//ע��Ϊstring������char
	cout<<"Please input:";
	cin>>codde;
	if(codde==code)			//string����ֱ���õȺŶԱ�
		cout<<"Success!"<<endl;
	else
		cout<<"Failed!"<<endl;

	return 0;
}




int ex(int num,int sta)
{
	switch(num)
	{
	case 0:return sta*0;	//��returnֱ���˳�����������break�ˡ�
	case 1:return sta*1;	//ͬʱ�ú����ķ���ֵ��ѡ���ԡ�
	case 2:return sta*2;
	}
}