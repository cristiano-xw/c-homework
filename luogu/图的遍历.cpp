#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>p[100005];
int vis[100005];
int n=0; int m=0;

void dfs(int x,int y)//反向深搜      
{
    vis[x]=y;//赋值 
	for(int i=0;i<p[x].size();i++)
	{
	    if(vis[p[x][i]]==0)
	    {
	    	dfs(p[x][i],y);    
		}
	}     
} 

int main()
{  
    memset(vis,0,sizeof(vis));
	cin>>n>>m;
	int i=0;
	for(i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;//读入起点和终点
		p[y].push_back(x);//建立反向边 
	}  
	
	for(i=n;i>=1;i--)
	{
		if(vis[i]==0)
		{  
			dfs(i,i);
		}
	}
	
	for(i=1;i<=n;i++)
	{
		cout<<vis[i]<<" ";
	}
	return 0;
}
