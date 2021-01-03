#include<stdio.h>
int zhishu(int y);
int zhihuiwen(int x)
{
	int a=0,b=0;
	b=x;int i=0;int m=0;
	if(x%2!=0)
	{
		while(b>0)
		{
			m=b%10;
			a=10*a+m;
			b=b/10;
		}
		if(a==x)
		{
		  	for(i=2;i<=a/3;i++)
		  	{
		  	if(a%i==0)
			{
				return 0;
			}	
			}
			return 1;
		} 
		return 0;
	}
	if(x%2==0)
	{
		return 0;
	}
}
/*int zhishu(int y)
{
	int i=0;
	for(i=2;i<=y/2;i++)
	{
		if(y%i==0)
		{
			return 0;
		}
	}
	return 1;
}*/
int main(void)
{
	int a=0,b=0;int i=0;
	scanf("%d%d",&a,&b);
	for(i=a;i<=b;i++)
	{
		if(zhihuiwen(i)==1)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
