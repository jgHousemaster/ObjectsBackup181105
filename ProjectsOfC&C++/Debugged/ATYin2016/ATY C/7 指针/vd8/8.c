#include <stdio.h>

float even(int n)
{
	int i;
	float sum=0;
	for(i=2;i<n+1;i+=2)
		sum=sum+1.0/i;
	return sum;
}
float odd(int n)
{
	int i;
	float sum=0;
	for(i=1;i<n+1;i+=2)
		sum=sum+1.0/i;
	return sum;
}
void main()
{
	int n;
	float (*ji)(int);
	float (*ou)(int);
	ji=odd;
	ou=even;
	scanf("%d",&n);
	if(n%2==0)
		printf("%.3f\n",ou(n));
	else
		printf("%.3f\n",ji(n));
}