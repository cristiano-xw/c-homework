//质数筛 因为一个质数的倍数一定是合数 所以删除所有质数的倍数即得到质数
#include<bits/stdc++.h>
using namespace std;
bool a[100000000];

int zhishu(int n)
{ 
    memset(a,true,sizeof(a));
    a[0]=false;
	a[1]=false;
	int i=0; int j=0;
	
	for(i=2;i<=n;i++)
	{
		if(a[i]) 
		{
			for(j=2;i*j<=n;j++)
			{                            
				a[i*j]=0;                   
			}
		}
	}
}

int huiwen(int n)
{
	int j=n;
	int i=0;
	while(j>0)
	{  
	    int r=0;
	    r=j%10;
		i=i*10+r;
		j=j/10;
	}
	if(i==n)
	{
		return 1;
	}
	
	return 0;
}

int main(void)
{  
	int m=0; int n=0;
	scanf("%d%d",&m,&n);
	
	
	if(n>=10000000)
	{
		n=10000000;
	}
	
	zhishu(n);
	
	int i=0;
	for(i=m;i<=n;i++)
	{
		if(a[i]&&huiwen(i)) 
		{
			printf("%d\n",i);
		}
	}
	
	
	return 0;
	
	
} 
