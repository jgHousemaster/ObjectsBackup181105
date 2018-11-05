#include <stdio.h>
void main()
{int i,mm,dd,yy;
float up;
printf("Enter item number:");
scanf("%d",&i);
printf("Enter unit price:");
scanf("%f",&up);
printf("Enter purchase date(mm/dd/yy):");
scanf("%d/%d/%d",&mm,&dd,&yy);
printf("Item\tUnit Price\tPurchase Date\n%-d\t$%6.2f\t\t  %d/%d/%d\n",i,up,mm,dd,yy);
}
