#include<bits/stdc++.h>
using namespace std;
int vis[111]={0};
int a[111][111]; int b[22];
long long int ans=999999999;
int n=0; int m=0; 

void dfs(int now,int k,long long sum)//表示现在所处的位置 需要走的次数 
{
	if(k==0) ans=min(ans,sum+a[now][n]);//最后我要回到n号区域
	else
	{
		for(int i=1;i<=m;i++)
		{
			if(vis[i]==0)
			{
				vis[i]=1;
				dfs(b[i],k-1,sum+a[now][b[i]]);
				vis[i]=0;//回溯 
			}
		}
	} 
	
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	
	cin>>m;
	for(int i=1;i<=m;i++)
	{
		cin>>b[i];
	}
	
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				a[i][j]=min(a[i][j],a[i][k]+a[k][j]);
			}
		}
	}
	
	dfs(1,m,0);
	cout<<ans;
	return 0;
}
