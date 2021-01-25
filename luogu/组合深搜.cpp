#include<bits/stdc++.h>
using namespace std;
//深度优先搜索，从第一个数开始 
int n=0; int r=0; int a[100]={};
void dfs(int k=0)
{
	int i=0;
	if(k>r)
	{
		for(i=1;i<=r;i++)
		{
			printf("%3d",a[i]);
		}
		printf("\n");
	}
	
	if(k<=r)
	{
		for(i=a[k-1]+1;i<=n;i++)
		{
			a[k]=i;
			dfs(k+1);
		}
	}
}


int main(void)
{   
    a[0]=0;
    scanf("%d%d",&n,&r);
    dfs(1);//从第一个数开始搜索 
	return 0;
} 
