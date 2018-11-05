#include <stdlib.h>
#include <stdio.h>

struct roommate
{
  char num[11];
  char name[20];
  int age;
  char birthplace[20];
  struct roommate *next;
};

struct roommate *head,*cthis,*cnew;

void init_record()
{
	cnew=(struct roommate *)malloc(sizeof(struct roommate));
	if(head==NULL)
        head=cnew;
    else
    {
        cthis=head;
        while(cthis->next!=NULL)
            cthis=cthis->next;
        cthis->next=cnew;
    }
        cthis=cnew;
        printf("enter worker number:");
        gets(cthis->num);
        printf("enter worker name:");
        gets(cthis->name);
        printf("enter worker age:");
        scanf("%d",&(*cthis).age);
        printf("enter worker birthplace:");
        scanf("%s",cthis->birthplace);
        getchar();
        cthis->next=NULL;
        printf("\n");
}

void ins_record()
{
    int i,n;
    printf("Which array you want to ins?:");
    scanf("%d",&n);
    cthis=head;
    for(i=n-1;i>0;i--);
    {
        cthis=cthis->next;
    }
    cnew=(struct roommate *)malloc(sizeof(struct roommate));
    getchar();
    printf("enter worker number:");
    gets(cthis->num);
    printf("enter worker name:");
    gets(cthis->name);
    printf("enter worker age:");
    scanf("%d",cthis->age);
    printf("enter worker birthplace:");
    gets(cthis->birthplace);
    cnew->next=cthis->next;
    cthis->next=cnew;
}



void del_record()
{
	void listall();
    int n;
    printf("Which array you want to del?:");
    scanf("%d",&n);
    cthis=head;
    if(n==1)
        head=head->next;
    if(n>=2)
    {
        n-=2;
        while(n);
        {
            cthis=cthis->next;
            n--;
        }
        if(cthis->next->next==NULL)
            cthis->next=NULL;
        else
            cthis->next=cthis->next->next;
    }
    printf("it is deleted\n");
    listall();
}



void listall()
{
    int i=0;
    if(head==NULL)
        printf("\nthe list is empty \n");
    else
    {
        cthis=head;
        do
        {
            printf("\nµÚ%d¸ö:",i++);
            printf("\n worker number:%s",cthis->num);
            printf("\n worker name :%s",cthis->name);
            printf("\n worker age :%d",cthis->age);
            printf("\n worker name :%s",cthis->birthplace);
            cthis=cthis->next;
        }while(cthis!=NULL);
    }
    printf("\n");

}
void main()
{
char ch;
int flag=1;
head=NULL;
while(flag)
{
	printf("type 'a' to append new record");
	printf("\ntype 'i' to insert new record");
	printf("\ntype 'd' to delete a record");
	printf("\ntype 'l' to list all records\n");
   ch=getchar();getchar();
   switch(ch)
	{
		case 'a':init_record();break;
		case 'i':ins_record();break;
		case 'd':del_record();break;
		case 'l':listall();break;
       default:flag=0;
	}
}
}