#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	int sum=1;
	for(i=0;i<n-1;i++)
	{
		sum=(sum+1)*2;
	}
	printf("%d",sum);
}
