#include<stdio.h>
int main(void)
{
	int a[111]={0};
	float sum=0;
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	
	float x=0;
	x=(float)sum/n;
	printf("%.2f",x);
	return 0;
}
