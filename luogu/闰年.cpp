//if(i%400==0||i%4==0&&i%100)
#include<stdio.h>
#include<string.h>
int main(void)
{
	int x,y;
	scanf("%d%d",&x,&y);
	int a[10000]={0};
	int b[10000]={0};
	int i=0;
	int v=0;
	for(i=x;i<=y;i++)
	{
		a[i]=i;
	}
	
	for(i=x;i<=y;i++)
	{
		if(a[i]%400==0||a[i]%4==0&&a[i]%100)
		{
			b[i]=1;
			v++;
		}
	}
	
    printf("%d\n",v);
	for(i=x;i<=y;i++)
	{
		if(b[i]==1)
		{  
			printf("%d ",a[i]);
		}
	}
	
	
} 
