#include"stdio.h" //���ھͲ�һ����ƽ���ܵķ��أ��������Ƿ�����������yn����Ĵ𰸵Ľ�����Ż�
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
		printf("--����뷵��������1--\n");
		scanf("%d",&flag);
		if(flag==1)
			break;
		else
		{
			printf("--����뷵��������1,Ȼ���ڼ�����ٴ�����!--\n");
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
	printf("%10s%10s%10s%8s%8s%8s%10s\n","ѧ��","����","�༶","�ɼ�1","�ɼ�2","�ɼ�3","ƽ���ɼ�");
	printf("---------------------------------------------------------------------------------\n");
	printf("%10s%10s%10s%8.2f%8.2f%8.2f%10.2f\n",students[index].id,students[index].name,students[index].stuclass,students[index].score[0],students[index].score[1],students[index].score[2],students[index].Average);
}
void Student_Insert()
{
	int i;
	while(1)
	{
		printf("��������ѧ��:");
		scanf("%s",&students[num].id);
		getchar();
		printf("������������:");
		scanf("%s",&students[num].name);
		getchar();
		printf("��������༶:");
		scanf("%s",&students[num].stuclass);
		getchar();
		printf("��������ɼ�1:");
		scanf("%f",&students[num].score[0]);// ?
		getchar();
		printf("��������ɼ�2:");
		scanf("%f",&students[num].score[1]);
		getchar();
		printf("��������ɼ�3:");
		scanf("%f",&students[num].score[2]);
		getchar();
		students[num].Average=Avg(students[num]);
		if((students[num].score[0]<60)||(students[num].score[1]<60)||(students[num].score[2]<60))
		{
			failure++;
		}
		num++;
		printf("�����Ƿ����?(y/n)");
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
        printf("��������Ҫ�޸ĵ�ѧ����ѧ��:");
        scanf("%s",&id);
        getchar();
        index=Student_SearchByid(id);
        if(index==-1)
        {
            printf("��ѧ��������!\n");
        }
        else
        {
            printf("��Ҫ�޸ĵ�ѧ����ϢΪ:\n");
            Student_DisplaySingle(index);
            printf("----���������µ���Ϣ----\n");
            printf("��������ѧ��:");
            scanf("%s",&students[index].id);
            getchar();
            printf("������������:");
            scanf("%s",&students[index].name);
            getchar();
            printf("��������༶:");
            scanf("%s",&students[index].stuclass);
            getchar();
            printf("��������ɼ�1:");
            scanf("%f",&students[index].score[0]);
            getchar();
            printf("��������ɼ�2:");
            scanf("%f",&students[index].score[1]);
            getchar();
            printf("��������ɼ�3:");
            scanf("%f",&students[index].score[2]);
            getchar();
            students[index].Average=Avg(students[index]);
        }
		printf("�����Ƿ����?(y/n)");
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
        printf("��������Ҫɾ����ѧ����ѧ��:");
        scanf("%s",&id);
        getchar();
        index=Student_SearchByid(id);
        if(index==-1)
        {
            printf("��ѧ��������!\n");
        }
        else
        {
            printf("��Ҫɾ����ѧ����ϢΪ:\n");
            Student_DisplaySingle(index);
            printf("���Ƿ����Ҫɾ��?(y/n)\n");
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
		printf("�����Ƿ����?(y/n)");
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
		printf("��������Ҫ��ѯ��ѧ��������:");
		scanf("%s",&name);
		getchar();
		index=Student_SearchByname(name);
		if(index==-1)
		{
			printf("��ѧ��������!\n");
		}
		else
		{
			printf("��Ҫ��ѯ��ѧ����ϢΪ:\n");
			Student_DisplaySingle(index);
		}
		printf("�����Ƿ����?(y/n)");
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
	printf("%10s%10s%10s%8s%8s%8s%10s\n","ѧ��","����","�༶","�ɼ�1","�ɼ�2","�ɼ�3","ƽ���ɼ�");
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
		printf("���ܴ��ļ�!\n");
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
		printf("���ܴ��ļ�!\n");
		return;
	}
	if(fwrite(&num,sizeof(int),1,fp)!=1)
	{
		printf("д���ļ�����!\n");
	}
	for(i=0;i<num;i++)
	{
		if(fwrite(&students[i],sizeof(struct Student),1,fp)!=1)
		{
			printf("д���ļ�����!\n");
		}
	}
	fclose(fp);
}
void student_failure()
{
	printf("�����������Ϊ:%d\n",failure);
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
		printf("*******ѧ���ɼ�����ϵͳ*******\n");
		printf("*********��������(1-6)********\n");
		printf("***       1.��Ϣ��¼��     ***\n");
		printf("***       2.�޸���Ϣ       ***\n");
		printf("***       3.ɾ����Ϣ       ***\n");
		printf("***       4.������ѯ��Ϣ   ***\n");
		printf("***       5.��ƽ��������   ***\n");
		printf("***       6.�����������   ***\n");
		printf("***       7.�˳�           ***\n");
		printf("******************************\n");
		printf("������������ѡ��:");
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
                printf("����������ȷ������,Ȼ��ȴ����������������!");
                for(i=0;i<800000000;i++)
                {

                }
                break;
            }
		}
		IO_WriteInfo();
	}
}