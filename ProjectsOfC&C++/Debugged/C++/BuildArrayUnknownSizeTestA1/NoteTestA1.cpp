#include <iostream>
using namespace std;

int main()
{
	int size;					//�����С
	cin>>size;
	int *Array=new int[size];	//δ֪�����С��������ָ��ָ��
	Array[0]=0;
	for(int i=0;i<size;i++)		//�����鸳ֵ
	{
		Array[i]=i*10;
		cout<<Array[i]<<"\t";
		if((i+1)%5==0)			//ÿ6������һ�У���Ϊ��0��������i+1
			cout<<endl;
	}
	cout<<endl<<endl;
	delete[] Array;				//�ͷ��ڴ�
	Array=NULL;

	return 0;
}