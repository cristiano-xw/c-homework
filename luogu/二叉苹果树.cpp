#include<bits/stdc++.h>
using namespace std;
vector<int>son[111];
int f[111][111]; int v[111][111];	//��ű�Ȩ
int vis[111];
int n=0; int q=0;

void dfs(int x)
{
	vis[x]=1;
	for(int i=0;i<son[x].size();i++)//�����ӽڵ� 
	{
		int ny=son[x][i];
		if(vis[ny]==1) continue;
		dfs(ny);
		
		for(int j=q;j>=1;j--)	//01����ģ�� 
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
	for(int i=1;i<=n-1;i++) //˫��� 
	{
		int x=0; int y=0; int z=0;
		cin>>x; cin>>y;cin>>z;
		son[x].push_back(y);
		son[y].push_back(x);//˫�򽨱�
		v[x][y]=z;
		v[y][x]=z;
	}
	
	dfs(1);//��1��ʼ
	cout<<f[1][q];
	return 0; 
	
	
} 
