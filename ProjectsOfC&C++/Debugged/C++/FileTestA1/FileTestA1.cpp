#include <iostream>
#include <fstream>									//�ļ���������
#include <string>									//getline()����ͷ�ļ�
using namespace std;

#define sizeA 25									//�����ݴ�С
#define width 5										//ÿ��width�ж�ȡһ������
#define sizeB sizeA/width							//�������������B

int main()
{	
	int Pos = 0, j = 0;								//PosΪ��һ��������ݵ��У�jΪ����������Ʊ���
	int ArrA[sizeA];								//����ԭʼ����
	string ArrB[sizeB];								//�������������
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = 0; i < sizeA; i++)					//Ϊ����A��ԭʼ���飩��ֵ
		ArrA[i] = i+1;
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	ofstream FileA;
	FileA.open("FirstFile.txt");					//���ı���ʽ���ļ�
	if (FileA.is_open())
	{
		for (int i = 0; i < sizeA; i++)				//������A�����ݴ����ļ���
			FileA << ArrA[i] << "\n";				//ÿ������ռһ��
		cout << "Output Succeed!" << endl;
	}
	FileA.close();
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	cout << "Please input your position:";
	cin >> Pos;										//���뿪ʼλ��
////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	ifstream FileB;
	FileB.open("FirstFile.txt", ios::in);			//in��ֻ����ʽ���ļ�
	for (int i = 0; i < sizeB; i++)
	{
		while (getline(FileB, ArrB[i]) && j < Pos + (i * (width - 1)) - 1)
			j++;									//�ɿ�ʼλ��Pos��ʼ��ÿ��width�д��ļ���ȡ�������ݶ�������B��
	}
/*	while (getline(FileB, ArrB[0]) && i < Pos - 1)	//���ж�ȡԴ����
	{
		i++;
	}
*/
	FileB.close();
////////////////////////////////////////////////////////////////////////////////////////////////////////////
/*	ifstream FileB;									//��ȡȫ���ļ�Դ����
	FileB.open("FirstFile.txt", ios::in);
	for (int i = 0; i < 25; i++)
		FileB.getline(ArrB[i],sizeof(int));
	FileB.close();
*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////
	for (int i = 0; i < sizeB; i++)					//�������B
	{
		cout << ArrB[i] << endl;
	}

	return 0;
}