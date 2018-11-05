//两球队比赛，甲队尾A,B,C,乙队为X,Y,Z。
//A说他不和X比，C说他不和X,Y比。（唯一有用条件）
//求比赛名单。

//A->i;B->j;C->k.


#include "stdio.h"
void main()
{
	char i,j,k;
	for(i='X';i<='Z';i++)
		for(j='X';j<='Z';j++)
			if(i!=j)						//i,j为两人，不可能相同。（现实限制条件）
				for(k='X';k<='Z';k++)		
					if(i!=k&&j!=k)			//不可能为同一人。（现实限制条件）
						if(i!='X'&& k!='X'&& k!='Z')	//A说他不和X比，C说他不和X,Y比。（题目条件）
							printf("A--%c B--%c C--%c\n",i,j,k);
}