#include<stdio.h>
int main(void)
{
	int n,digits=0;
	printf("please input a nonnegative integer\n");
	scanf("%d",&n);
	if (n==0)
	printf("the digit is 1");
	else
	while (n>0)
	{
		n/=10;
		digits++;
		}printf("the digits are %d",digits);
	
	return 0;
}
