#include<bits/stdc++.h>
using namespace std;
int vis[60][60];//表示i到j的最短时间
int mapp[60][60][65];//建边
int n=0; int m=0;
void make()//建边 
{
	memset(vis,10,sizeof(vis));
	memset(mapp,0,sizeof(mapp));
	for(int i=1;i<=m;i++)  
	{
		int x=0; int y=0;
		cin>>x>>y;// x到y的边
		vis[x][y]=1;
		mapp[x][y][0]=1; 
	}
} 

void check()
{
	for(int k=1;k<=60;k++)//次方 
	for(int i=1;i<=n;i++)
	for(int t=1;t<=n;t++)
	for(int j=1;j<=n;j++)
	if(mapp[i][t][k-1]&&mapp[t][j][k-1])
	{
		mapp[i][j][k]=1;//视为一秒钟可以到达 
		vis[i][j]=1;//一秒钟 
	}
}

void add()
{
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{ 
				vis[i][j]=min(vis[i][j],vis[i][k]+vis[k][j]);
			}
		}
	}
}

int main()
{
	cin>>n>>m;
	make();
	check();
	add();
	cout<<vis[1][n]<<endl;
	return 0;
}
