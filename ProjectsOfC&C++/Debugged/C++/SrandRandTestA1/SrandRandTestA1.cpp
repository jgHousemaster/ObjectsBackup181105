#include <stdio.h>
#include <stdlib.h>									//srand和rand函数的头文件
#include <time.h>									//时间time（）函数头文件
#include <iostream>
using namespace std;

int main()
{
	int i;
	int result;
	srand((int)time(0));							//初始化随机数，利用系统时间产生随机数种子（不是产生随机数）
	for(i=0;i<10;i++)
	{
		result=1+(int)(6.0*rand()/(RAND_MAX+1.0));	//生成1-6的随机数	rand()返回值为0到RAND_MAX
													//因为rand的内部实现是用线性同余法做的，他不是真的随机数，只不过是因为其周期特别长，
													//所以有一定的范围里可看成是随机的，rand()会返回一随机数值，范围在0至RAND_MAX 间。
													//在调用此函数产生随机数前，必须先利用srand()设好随机数种子，如果未设随机数种子，
													//rand()在调用时会自动设随机数种子为1。rand()产生的是假随机数字，每次执行时是相同的。
													//若要不同,以不同的值来初始化它.初始化的函数就是srand()。

		cout<<result<<endl;							//RAND_MAX的范围最少是在32767之间（int），即双字节（16位数）。
													//若用unsigned int 双字节是65535，四字节是4294967295的整数范围。
	}

	return 0;
}
