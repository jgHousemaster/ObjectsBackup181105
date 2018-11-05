#include <iostream>
using namespace std;

int main()
{
	int size;					//数组大小
	cin>>size;
	int *Array=new int[size];	//未知数组大小，所以用指针指向
	Array[0]=0;
	for(int i=0;i<size;i++)		//对数组赋值
	{
		Array[i]=i*10;
		cout<<Array[i]<<"\t";
		if((i+1)%5==0)			//每6个数换一行，因为有0，所以是i+1
			cout<<endl;
	}
	cout<<endl<<endl;
	delete[] Array;				//释放内存
	Array=NULL;

	return 0;
}