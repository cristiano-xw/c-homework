//此题正当解法为dfs加回溯
#include<bits/stdc++.h>
using namespace std;
int a[1000]={};int b[1000]={};//b为标记数组 a为引用数组
int n=0;//一共的情况数

void dfs(int k) //k为此时是第几个数 
{ 
    int i=0;
	if(k>n)//已经填满 
	{
		for(i=1;i<=n;i++)
		{
			printf("%5d",a[i]);
		}
		printf("\n");
	}
	
	if(k<=n) 
	{
		for(i=1;i<=n;i++)
		{
			if(b[i]==0)
			{
               a[k]=i;
			   b[i]=1;
			   dfs(k+1);
			   b[i]=0;			
			} 
		}	
	}
} 

int main(void)
{
	scanf("%d",&n);
	dfs(1);
	return 0;
}
