#include<stdio.h>
int sushu(int x)
{
	int i=0;
	for(i=2;i<=x/2;i++)
	{
		if (x%i==0)
		{
			return 1;
		}
		
	}
	return 0;
}
int main(void)
{
	int a[111];
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(sushu(a[i])==0&&a[i]!=1||a[i]==2&&a[i]!=1)
		{
			printf("%d ",a[i]);
		}
	}
	return 0;
	
}
