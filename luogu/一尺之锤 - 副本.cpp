#include<stdio.h>
int main(void)
{
	int a=0;
	scanf("%d",&a);
	int n=1;
	while(a!=1)
	{
		a=a/2;
		n=n+1;
	}
	printf("%d",n);
	return 0;
}
