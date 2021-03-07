#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>linker[10005];
int vis[10005]; int len[10005];
int n=0;

int dfs(int x)
{
	if(vis[x]!=0) return vis[x];
	else
	{
		for(int i=0;i<linker[x].size();i++)
		{
			vis[x]=max(vis[x],dfs(linker[x][i]));
		}
		vis[x]+=len[x];
		return vis[x];
	}
}

int main()
{
	memset(vis,0,sizeof(vis));
	int n=0;
	cin>>n;
    for(int i=1;i<=n;i++)
    {
    	int x=0;
    	cin>>x;
    	cin>>len[x];
    	int y=1;
    	while(y!=0)
    	{
    		cin>>y;
    		if(y==0) break;
    		if(y!=0) linker[y].push_back(x);//建立父节点 
		}
	}
	
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,dfs(i));
	}	
	
	cout<<ans;
	return 0;
}

