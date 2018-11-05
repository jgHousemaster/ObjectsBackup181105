#ifndef CLIENT_H
	#define CLIENT_H

class Client
{
private:
	static char ServerName[7];
	static int ClientNum;
public:
	Client() {}
	static void ChangeServerName(char csn[7]);
	void get();
	void show();
};

#endif