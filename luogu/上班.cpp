#include<bits/stdc++.h>
using namespace std;
int vis[60][60];
int n,m;
int mapp[60][60][65];

void make()
{              
    memset(mapp,0,sizeof(mapp));
    memset(vis,10,sizeof(vis));
    for(int i=1;i<=m;i++)  
    {
        int x,y;
        cin>>x>>y;
        vis[x][y]=1;
        mapp[x][y][0]=1;      
    }
}

void check()
{
    for(int k=1;k<=60;k++)
    for(int i=1;i<=n;i++)
    for(int t=1;t<=n;t++)
    for(int j=1;j<=n;j++)      
    if(mapp[i][t][k-1]&&mapp[t][j][k-1])
    {
        mapp[i][j][k]=1;
        vis[i][j]=1;
    }
}

void add()
{
    for(int k=1;k<=n;k++)
    for(int i=1;i<=n;i++)
    for(int j=1;j<=n;j++)
    vis[i][j]=min(vis[i][j],vis[i][k]+vis[k][j]);
  
} 

int main()
{
	cin>>n>>m;
    make();
    check();
    add();
    cout<<vis[1][n];//起点到终点 
    return 0;
}
