#include"stdio.h" //现在就差一个清平功能的返回，最后如果是否继续输入除了yn以外的答案的结果的优化
#include"string.h"
#include"stdlib.h"
struct Student
{
	char id[20];
	char name[20];
	char stuclass[20];
	float score[3];
	float Average;

};
struct Student students[1000];
int num=0;
int failure=0;
void judge()
{
	int j;
	int flag=0;
	while(1)
	{
		printf("--如果想返回请输入1--\n");
		scanf("%d",&flag);
		if(flag==1)
			break;
		else
		{
			printf("--如果想返回请输入1,然后在几秒后再次输入!--\n");
			for(j=0;j<800000000;j++)
			{

			}
			continue;
		}
	}

}
float Avg(struct Student stu)
{
	return (stu.score[0]+stu.score[1]+stu.score[2])/3;
}
int Student_SearchByid(char id[])
{
	int i;
	for(i=0;i<num;i++)
	{
		if(strcmp(students[i].id,id)==0)
		{
			return i;
		}
	}
	return -1;
}
int Student_SearchByname(char name[])
{
	int i;
	for(i=0;i<num;i++)
	{
		if(strcmp(students[i].name,name)==0)
		{
			return i;
		}
	}
	return -1;
}
int Student_SearchBystuclass(char stuclass[])
{
	int i;
	for(i=0;i<num;i++)
	{
		if(strcmp(students[i].stuclass,stuclass)==0)
		{
			return i;
		}
	}
	return -1;
}

void Student_DisplaySingle(int index)
{
	printf("%10s%10s%10s%8s%8s%8s%10s\n","学号","姓名","班级","成绩1","成绩2","成绩3","平均成绩");
	printf("---------------------------------------------------------------------------------\n");
	printf("%10s%10s%10s%8.2f%8.2f%8.2f%10.2f\n",students[index].id,students[index].name,students[index].stuclass,students[index].score[0],students[index].score[1],students[index].score[2],students[index].Average);
}
void Student_Insert()
{
	int i;
	while(1)
	{
		printf("请您输入学号:");
		scanf("%s",&students[num].id);
		getchar();
		printf("请您输入姓名:");
		scanf("%s",&students[num].name);
		getchar();
		printf("请您输入班级:");
		scanf("%s",&students[num].stuclass);
		getchar();
		printf("请您输入成绩1:");
		scanf("%f",&students[num].score[0]);// ?
		getchar();
		printf("请您输入成绩2:");
		scanf("%f",&students[num].score[1]);
		getchar();
		printf("请您输入成绩3:");
		scanf("%f",&students[num].score[2]);
		getchar();
		students[num].Average=Avg(students[num]);
		if((students[num].score[0]<60)||(students[num].score[1]<60)||(students[num].score[2]<60))
		{
			failure++;
		}
		num++;
		printf("请问是否继续?(y/n)");
		if(getchar()=='n')
		{
			break;
		}
	}
	judge();

}
void Student_Modify()
{
    while(1)
    {
        char id[20];
        int index;
        printf("请您输入要修改的学生的学号:");
        scanf("%s",&id);
        getchar();
        index=Student_SearchByid(id);
        if(index==-1)
        {
            printf("该学生不存在!\n");
        }
        else
        {
            printf("您要修改的学生信息为:\n");
            Student_DisplaySingle(index);
            printf("----请您输入新的信息----\n");
            printf("请您输入学号:");
            scanf("%s",&students[index].id);
            getchar();
            printf("请您输入姓名:");
            scanf("%s",&students[index].name);
            getchar();
            printf("请您输入班级:");
            scanf("%s",&students[index].stuclass);
            getchar();
            printf("请您输入成绩1:");
            scanf("%f",&students[index].score[0]);
            getchar();
            printf("请您输入成绩2:");
            scanf("%f",&students[index].score[1]);
            getchar();
            printf("请您输入成绩3:");
            scanf("%f",&students[index].score[2]);
            getchar();
            students[index].Average=Avg(students[index]);
        }
		printf("请问是否继续?(y/n)");
		if(getchar()=='n')
		{
			break;
		}
    }
	judge();
}

void Student_Delete()
{
    int i;
    while(1)
    {
        char id[20];
        int index;
        printf("请您输入要删除的学生的学号:");
        scanf("%s",&id);
        getchar();
        index=Student_SearchByid(id);
        if(index==-1)
        {
            printf("该学生不存在!\n");
        }
        else
        {
            printf("您要删除的学生信息为:\n");
            Student_DisplaySingle(index);
            printf("您是否真的要删除?(y/n)\n");
            if(getchar()=='y')
            {
                for(i=index;i<num-1;i++)
                {
                    students[i]=students[i+1];
                }
                num--;
            }
            getchar();
        }
		printf("请问是否继续?(y/n)");
		if(getchar()=='n')
		{
			break;
		}
    }
	judge();
}
void Student_Select()
{
	while(1)
	{
		char name[20];
		int index;
		printf("请您输入要查询的学生的姓名:");
		scanf("%s",&name);
		getchar();
		index=Student_SearchByname(name);
		if(index==-1)
		{
			printf("该学生不存在!\n");
		}
		else
		{
			printf("您要查询的学生信息为:\n");
			Student_DisplaySingle(index);
		}
		printf("请问是否继续?(y/n)");
		if(getchar()=='n')
		{
			break;
		}
	}
	judge();
}
void Student_SortByAverage()
{
	int i,j;
	struct Student tmp;
	for(i=0;i<num;i++)
	{
		for(j=1;j<num-i;j++)
		{
			if(students[j-1].Average<students[j].Average)
			{
				tmp=students[j-1];
				students[j-1]=students[j];
				students[j]=tmp;
			}
		}
	}
}
void Student_Display()
{
	int i;
	printf("%10s%10s%10s%8s%8s%8s%10s\n","学号","姓名","班级","成绩1","成绩2","成绩3","平均成绩");
	printf("---------------------------------------------\n");
	for(i=0;i<num;i++)
	{
		printf("%10s%10s%10s%8.2f%8.2f%8.2f%10.2f\n",students[i].id,students[i].name,students[i].stuclass,students[i].score[0],students[i].score[1],students[i].score[2],students[i].Average);
	}
	judge();
}
void IO_ReadInfo()
{
	FILE *fp;
	int i;
	if((fp=fopen("Database.txt","rb"))==NULL)
	{
		printf("不能打开文件!\n");
		return;
	}
	if(fread(&num,sizeof(int),1,fp)!=1)
	{
		num=-1;
	}
	else
	{
		for(i=0;i<num;i++)
		{
			fread(&students[i],sizeof(struct Student),1,fp);
		}
	}
	fclose(fp);
}
void IO_WriteInfo()
{
	FILE *fp;
	int i;
	if((fp=fopen("Database.txt","wb"))==NULL)
	{
		printf("不能打开文件!\n");
		return;
	}
	if(fwrite(&num,sizeof(int),1,fp)!=1)
	{
		printf("写入文件错误!\n");
	}
	for(i=0;i<num;i++)
	{
		if(fwrite(&students[i],sizeof(struct Student),1,fp)!=1)
		{
			printf("写入文件错误!\n");
		}
	}
	fclose(fp);
}
void student_failure()
{
	printf("不及格的人数为:%d\n",failure);
	judge();
}
void main()
{
	int choice;
	int i;
	IO_ReadInfo();
	while(1)
	{
		system("cls");
		printf("*******学生成绩管理系统*******\n");
		printf("*********请您输入(1-6)********\n");
		printf("***       1.信息的录入     ***\n");
		printf("***       2.修改信息       ***\n");
		printf("***       3.删除信息       ***\n");
		printf("***       4.姓名查询信息   ***\n");
		printf("***       5.按平均分排序   ***\n");
		printf("***       6.不及格的人数   ***\n");
		printf("***       7.退出           ***\n");
		printf("******************************\n");
		printf("请您输入您的选择:");
		scanf("%d",&choice);
		getchar();
		switch(choice)
		{
		case 1:
			{
				Student_Insert();
				break;
			}
		case 2:
			{
				Student_Modify();
				break;
			}
		case 3:
			{
				Student_Delete();
				break;
			}
		case 4:
			{
				Student_Select();
				break;
			}
		case 5:
			{
				Student_SortByAverage();
				Student_Display();
				break;
			}
		case 6:
			{
				student_failure();
				break;
			}
		case 7:
			{
				exit(0);
				break;
			}
        default :
            {
                printf("请您输入正确的数字,然后等待几秒后请重新输入!");
                for(i=0;i<800000000;i++)
                {

                }
                break;
            }
		}
		IO_WriteInfo();
	}
}