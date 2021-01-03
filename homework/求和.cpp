#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=1;
	int sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=i;
	}
	printf("%d",sum);
 } 
