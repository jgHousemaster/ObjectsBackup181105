#include <iostream>
using namespace std;
void chgfun()
{
	int chga[3][3]={0},chgb[3][3]={0};
	int i,j;
	cout<<"Please input array A:";
	for(i=0;i<3;i++)
		for(j=0;j<3;j++)
			cin>>chga[i][j];
	for(i=0;i<3;i++)
		 for(j=0;j<3;j++)
			chgb[i][j]=chga[j][i];
	cout<<"After change:"<<endl;
	for(i=0;i<3;i++)
		{for(j=0;j<3;j++)
		cout<<chgb[i][j]<<" ";
		cout<<endl;}
}




int main()
{
	chgfun();
	return 0;
}