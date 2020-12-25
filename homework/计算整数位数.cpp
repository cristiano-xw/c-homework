#include<stdio.h>
int main(void)
{
	int digits=0,n;
	printf("enter a nonnegative number\n");
	scanf("%d",&n);
	do
	{
		n/=10;
		digits++;
	}while (n>0);
	printf("the number has %d digits",digits);
	return 0;
}
