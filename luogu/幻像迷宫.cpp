#include<bits/stdc++.h>
using namespace std;
bool book[1555][1555]; 
bool flag=0;//判断没有出现  
int vis[1555][1555][3];
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};           
int n=0; int m=0;

void dfs(int x,int y,int lx,int ly)
{
	if(flag==1)return ;
	if(vis[x][y][0]==1&&(vis[x][y][1]!=lx||vis[x][y][2]!=ly)) 
	{
		flag=1;
		return;
	}
	
	vis[x][y][0]=1; vis[x][y][1]=lx; vis[x][y][2]=ly;
	for(int i=0;i<=3;i++)
	{
		int x1=(x+dx[i]+n)%n; int y1=(y+dy[i]+m)%m;
		int lx1=lx+dx[i]; int ly1=ly+dy[i];
		if(book[x1][y1]==0)
		{
			if(vis[x1][y1][1]!=lx1 || vis[x1][y1][2]!=ly1 || !vis[x1][y1][0])
				dfs(x1, y1, lx1, ly1); 
		}
	}
}
                                 
int main()
{
	char ch;
	ios::sync_with_stdio(false);     
	while(cin>>n>>m)
	{
		flag=0;
		int x0=0; int y0=0; //初始化S的位置 
		memset(book,0,sizeof(book));//清空障碍物
		memset(vis,0,sizeof(vis));
		
		for(int i=0;i<n;i++)
		{   
			for(int j=0;j<m;j++)
			{  
				cin>>ch;
				if(ch=='#') book[i][j]=1;
				if(ch=='S') 
				{
					x0=i; y0=j;
				}
			}
		} 
		
		dfs(x0,y0,x0,y0);
		if(flag==1)
		{
			cout<<"Yes"<<endl;
		}
		else
		cout<<"No"<<endl;
	}
	return 0;
} 
