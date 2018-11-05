#include <stdio.h>
#include <stdlib.h>

struct student
{
	int num;
	char name[5];
	int age;
	char sex;	//"b"or"g"
}stu[5];

void main()
{
	FILE *fp;
	int i;
	fp=fopen("stu.dat","w+");
	for(i=0;i<5;i++)
		scanf("%d %s %d %c",&stu[i].num,stu[i].name,&stu[i].age,&stu[i].sex);
	for(i=0;i<5;i++)
		fprintf(fp,"%d %s %d %c\n",stu[i].num,stu[i].name,stu[i].age,stu[i].sex);
	rewind(fp);
	for(i=0;i<5;i++)
		fscanf(fp,"%d %s %d %c\n",&stu[i].num,stu[i].name,&stu[i].age,&stu[i].sex);
	printf("num\tname\tage\tsex\n");
	for(i=0;i<5;i++)
		printf("%d\t%s\t%d\t%c\n",stu[i].num,stu[i].name,stu[i].age,stu[i].sex);
	fclose(fp);
}