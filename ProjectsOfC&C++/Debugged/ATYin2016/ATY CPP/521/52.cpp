#include <iostream>
using namespace std;
#include "52.h"

Client::Client()
{}

void Client::get()
	{ServerName=30;
	ClientNum=2;}

void Client::show()
	{cout<<"ServerName is:"<<ServerName<<"ClientNum is:"<<ClientNum<<endl;}

/*char Client::ChangeServerName(char csn)
	{cout<<"Please input your ChangeServerName:";
	cin>>csn;
	ServerName=csn;
	return ServerName;}
*/