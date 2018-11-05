#include <iostream>
using namespace std;
#include "client.h"

int main()
{
	Client a;
	a.get();
	a.show();
	a.ChangeServerName("Apple");
	return 0;
}