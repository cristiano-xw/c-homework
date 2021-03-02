#include<bits/stdc++.h>
#include<vector> 
#define MAXN 1005 
using namespace std;
struct edge
{
	int to,cost;
};

int n=0; int m=0;
vector<edge>p[MAXN];
int v[MAXN][MAXN];
int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int u,v,l;
		cin>>u>>v>>l;
		p[u].push_back((edge)
		{
			v,l
		});
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<p[i].size();j++)
		{
			 v[i][p[i][j].to]=p[i][j].cost;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cout<<v[i][j]<<" ";
			cout<<"\n";
		}
	}
	return 0;
}


