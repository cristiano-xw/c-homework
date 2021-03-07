#include<bits/stdc++.h>
#include<queue>
using namespace std;
int k=0; int n=0; int m=0;
int a[1011];int vis[1011];
vector<int>b[1011];
int mk[1011];
void dfs(int x)
{
	vis[x]=1; mk[x]++;
	for(int i=0;i<b[x].size();i++)
	{
		if(vis[b[x][i]]==0)
		{
			dfs(b[x][i]);
		}
	} 
}

int main()
{
	memset(mk,0,sizeof(mk));
	memset(a,0,sizeof(a));
	 
	cin>>k>>n>>m;
	for(int i=1;i<=k;i++)
	{
		cin>>a[i];//读入最开始的位置 
	}
	for(int i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		b[x].push_back(y);
	}
	
	for(int i=1;i<=k;i++)
	{
		memset(vis,0,sizeof(vis));
		dfs(a[i]);//对每一个点进行深度优先搜索 
	}
	
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		if(mk[i]==k)
		{
			ans++;
		}
	}
	cout<<ans;
	return 0;
}
