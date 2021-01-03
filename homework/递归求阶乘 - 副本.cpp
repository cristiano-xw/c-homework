#include<stdio.h>

int digui(int n)
{
	 
	if(n==1)
	{
		return 1;
	}
	
	if(n!=1)
	{
		return (digui(n-1)*n) ;
	}
}

int main(void)
{
	int n;
	scanf("%d",&n);
	printf("%d",digui(n));
	return 0;
}

