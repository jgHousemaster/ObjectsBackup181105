#include <iostream>
using namespace std;
#define D(a) T<<#a<<endl;a
ofstream T("output.out");

int main()
{
    D(int i=53;)
    D(float f=4700113.141593;)
    char *s="Is there any more?";
    D(T.setf(ios::unitbuf);)
    
    D(T.setf(ios::showbase);)
    D(T.setf(ios::uppercase);)
    D(T.setf(ios::showpos);)
    
}