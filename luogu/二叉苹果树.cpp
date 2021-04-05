#include<bits/stdc++.h>
using namespace std;
vector<int>son[111];
int f[111][111]; int v[111][111];	//存放边权
int vis[111];
int n=0; int q=0;

void dfs(int x)
{
	vis[x]=1;
	for(int i=0;i<son[x].size();i++)//遍历子节点 
	{
		int ny=son[x][i];
		if(vis[ny]==1) continue;
		dfs(ny);
		
		for(int j=q;j>=1;j--)	//01背包模板 
		{
			for(int k=j-1;k>=0;k--)  
			{
				f[x][j]=max(f[x][j],v[x][ny]+f[x][j-k-1]+f[ny][k]);            
			}
		}
	}
}

int main()
{
	memset(vis,0,sizeof(vis));
	cin>>n; cin>>q;
	for(int i=1;i<=n-1;i++) //双向边 
	{
		int x=0; int y=0; int z=0;
		cin>>x; cin>>y;cin>>z;
		son[x].push_back(y);
		son[y].push_back(x);//双向建边
		v[x][y]=z;
		v[y][x]=z;
	}
	
	dfs(1);//从1开始
	cout<<f[1][q];
	return 0; 
	
	
} 
