#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int a[21];
	int b[21];
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=abs(a[i]);
	}
	int max=0;
	for(i=0;i<n;i++)
	{
		if(b[i]>b[max])
		{
			max=i;
		}
	}
	printf("%d",a[max]);
} 
