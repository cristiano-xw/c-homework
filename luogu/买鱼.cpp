#include<bits/stdc++.h>
using namespace std;
char mapp[505][505];
int vis[505][505];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};
int n=0; int m=0;
int flag=0;

void dfs(int x,int y)
{
	vis[x][y]=1;
	for(int i=0;i<=3;i++)
	{
		int fx=x+dx[i]; int fy=y+dy[i];
		if(vis[fx][fy]==0&&fx>=0&&fx<n&&fy>=0&&fy<m&&mapp[fx][fy]!='#')
		{
			if(mapp[fx][fy]=='g') 
			{
				flag=1;
			}
			else dfs(fx,fy);
		}
	}
	return;
	
}

int main()
{
	cin>>n>>m;
	memset(vis,0,sizeof(vis));
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mapp[i][j];
		}
	}
	
	int tx=0; int ty=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mapp[i][j]=='s'&&vis[i][j]==0)
			{
			tx=i;  ty=j;
			}
		}
	}
	
	dfs(tx,ty);
	if(flag==1)
	cout<<"Yes";
	else cout<<"No";
	return 0;
}




