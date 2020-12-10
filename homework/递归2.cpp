#include<stdio.h>
int sum(int n)
{
	if (n==1)
	{
		return 1;
	}
	else 
	{
		return (sum(n-1)+n);
	}
}
int main(void)
{
	int i;
	i=sum(100);
	printf("the result is %d",i);
	return 0;
}




