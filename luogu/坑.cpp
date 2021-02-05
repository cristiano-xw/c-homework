#include<bits/stdc++.h>
using namespace std;
char a[101][101];
int ans;
int n,m;
int xx[]={-1,-1,-1,0,0,1,1,1}; 
int yy[]={-1,0,1,1,-1,0,1,-1};//°Ë¸ö·½Ïò 
int vis[111][111];

void dfs(int x,int y)
{    
    vis[x][y]=1;
    a[x][y]='.';
    int dx,dy;
    for(int i=0;i<8;i++)
	{
        dx=x+xx[i];
        dy=y+yy[i];
        if(dx>0&&dx<=n&&dy>0&&dy<=m&&a[dx][dy]=='W'&&vis[dx][dy]==0)
		{
            dfs(dx,dy);
        }
    }
    return;
} 

int main()
{   
    memset(a,0,sizeof(a));
    memset(vis,0,sizeof(vis));
    scanf("%d%d",&n,&m);
    int i=0; int j=0;
	
	getchar();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
		  scanf("%c",&a[i][j]);
		}
		getchar();
	}
    
    for( i=1;i<=n;i++)
	{
        for( j=1;j<=m;j++) 
		{
            if(a[i][j]=='W'&&vis[i][j]==0)
			{ 
                dfs(i,j);
                ans++; 
            }
        }
    }
    cout<<ans;
    return 0;
}
