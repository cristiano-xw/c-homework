#include<stdio.h>
int main(void)
{
	int a[10];
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	int h=0;
	scanf("%d",&h);
	int l=0;
	l=h+30;
	int v=0;
	for(i=0;i<10;i++)
	{
		if(l>=a[i])
		{
			v++;
		}
	}
	
	printf("%d",v);
}
