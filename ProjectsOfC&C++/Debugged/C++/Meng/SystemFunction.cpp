#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;
int main()
{
cout<<__func__<<endl;
cout<<__TIME__<<endl;
cout<<__DATE__<<endl;
cout<<__FILE__<<endl;

time_t t;
t=time(NULL);
char *time;
time=ctime(&t);cout<<time<<endl;
}