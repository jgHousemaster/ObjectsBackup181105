#include <iostream>
#include <fstream>									//文件操作函数
#include <string>									//getline()所在头文件
using namespace std;

#define sizeA 25									//总数据大小
#define width 5										//每隔width行读取一次数据
#define sizeB sizeA/width							//用于输出的数组B

int main()
{	
	int Pos = 0, j = 0;								//Pos为第一个输出数据的行，j为按行输出控制变量
	int ArrA[sizeA];								//储存原始数据
	string ArrB[sizeB];								//储存整理后数据
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = 0; i < sizeA; i++)					//为数组A（原始数组）赋值
		ArrA[i] = i+1;
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	ofstream FileA;
	FileA.open("FirstFile.txt");					//以文本形式打开文件
	if (FileA.is_open())
	{
		for (int i = 0; i < sizeA; i++)				//将数组A内数据存入文件中
			FileA << ArrA[i] << "\n";				//每个数据占一行
		cout << "Output Succeed!" << endl;
	}
	FileA.close();
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Please input your position:";
	cin >> Pos;										//输入开始位置
////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	ifstream FileB;
	FileB.open("FirstFile.txt", ios::in);			//in以只读形式打开文件
	for (int i = 0; i < sizeB; i++)
	{
		while (getline(FileB, ArrB[i]) && j < Pos + (i * (width - 1)) - 1)
			j++;									//由开始位置Pos开始，每隔width行从文件读取该行数据读入数组B中
	}
/*	while (getline(FileB, ArrB[0]) && i < Pos - 1)	//按行读取源代码
	{
		i++;
	}
*/
	FileB.close();
////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*	ifstream FileB;									//读取全部文件源代码
	FileB.open("FirstFile.txt", ios::in);
	for (int i = 0; i < 25; i++)
		FileB.getline(ArrB[i],sizeof(int));
	FileB.close();
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = 0; i < sizeB; i++)					//输出数组B
	{
		cout << ArrB[i] << endl;
	}

	return 0;
}