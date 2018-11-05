#ifndef 52client_H
	#define 52client_H

class Client
{
private:
	static char ServerName;
	static int ClientNum;
public:
	Client();
//	static char ChangeServerName(char csn);
	void get();
	void show();
};

#endif