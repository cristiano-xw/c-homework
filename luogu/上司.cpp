#include<bits/stdc++.h>
#include<vector>
using namespace std;
int v[6666]; int vis[6666]={0};
int f[6666][2]; 
vector<int>son[6666];
int n=0;
//上司只有两种情况，来或者不来 
void dfs(int x)//从上往下倒退的哈 
{
	f[x][0]=0; f[x][1]=v[x];
	for(int i=0;i<son[x].size();i++)
	{
		int y=son[x][i];
		dfs(y);
		f[x][0]+=max(f[y][1],f[y][0]);//上司不来喜洋洋
		f[x][1]+=f[y][0]; 
	}
}

int main()
{
	memset(vis,0,sizeof(vis));
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];//职员的 
	}
	for(int i=1;i<=n-1;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		son[y].push_back(x);//加入儿子 
		vis[x]=1;
	}
	int root=0;//找到头牌上司 
	
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==0) 
		{
			root=i;
			break;
		}
	}
	
	dfs(root);
	
	cout<<max(f[root][1],f[root][0]);
	return 0;
}

