#include<bits/stdc++.h>
using namespace std;
int n,sum,y[20][20],vis[20],a[20],flag;
int i,j;
void dfs(int p,int s)
{
	if(flag)
	return ;
	if(p>n)
	{ 
		if(s==sum)
		{
			for(i=1;i<=n;i++)
			{
				cout<<a[i]<<" ";
			}
			flag=1;
		}
		return;
	}
	for(i=1;i<=n;i++)
	{
		if(!vis[i])
		{
			a[p]=i;
			vis[i]=1;
			dfs(p+1,s+y[n][p]*i);
			vis[i]=0;
		}
	}
}

int main()
{
	cin>>n>>sum;
	y[1][1]=1;
	for(i=2;i<=13;i++)
	{
		for(j=1;j<=i;j++)
		{
			y[i][j]=y[i-1][j-1]+y[i-1][j];
		}
	}
	dfs(1,0);
	return 0;
}
