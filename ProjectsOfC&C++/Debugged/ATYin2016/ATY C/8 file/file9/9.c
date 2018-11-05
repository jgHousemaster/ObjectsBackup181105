#include <stdio.h>
#include <stdlib.h>

struct student
{
    int num;
    char name[10];
    int age;
    char sex;
}stu[5], s1[5];

void main()
{
    FILE *fp;
    int i;
    if((fp=fopen("stu.dat","wb+"))==NULL)
    {
        printf("Cant open this file\n");
        exit(0);
    }
    for(i=0;i<5;i++)
        scanf("%d %s %d %c",&stu[i].num,stu[i].name,&stu[i].age,&stu[i].sex);
    fwrite(stu,sizeof(struct student),5,fp);
    rewind(fp);
    fread(s1,sizeof(struct student),5,fp);
    printf("\nnumber\tname\tage\tsex\n");
        printf("%d\t%s\t%d\t%c", s1[1].num, s1[1].name,s1[1].age,s1[1].sex);
        printf("\n");
    fclose(fp);
}