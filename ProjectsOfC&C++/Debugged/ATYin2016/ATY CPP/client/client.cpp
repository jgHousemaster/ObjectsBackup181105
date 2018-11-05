#include <iostream>
using namespace std;
#include "client.h"


void Client::get()
	{}

void Client::show()
	{cout<<"ServerName is:"<<ServerName<<endl<<"ClientNum is:"<<ClientNum<<endl;}

void Client::ChangeServerName(char csn[7])
	{cout<<"ChangeServerName is:"<<csn<<endl;}


char Client::ServerName[]="Windos";
int Client::ClientNum=2;