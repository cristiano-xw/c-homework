#include<bits/stdc++.h>
#include<queue>
using namespace std;
int vis[1005][1005]={0};
int mapp[1005][1005]={0};
int n=0;
int flag=0; int h=0;//两个标记数组
int sf=0; int sg=0;

struct node
{
	int x,y;
	node(int i=0,int j=0)
	{
		x=i; y=j;
	} 
};

queue <node> q;

int dx[10]={0,0,0,1,-1,1,1,-1,-1};
int dy[10]={0,1,-1,0,0,1,-1,1,-1};
 
void bfs(int sx,int sy)
{
	int col=mapp[sx][sy];
	q.push(node(sx,sy));
	while(q.empty()==0)
	{
		int x=q.front().x; int y=q.front().y;
		q.pop();
		for(int i=0; i<=8;i++)
		{
			int xx=x+dx[i]; int yy=y+dy[i];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&mapp[xx][yy]==col&&vis[xx][yy]==0)
			{
				vis[xx][yy]=1; q.push(node(xx,yy));
			}
		}
		
		if(flag==0)
		{
			for(int i=1;i<=8;i++)
			{
				int tx=x+dx[i]; int ty=x+dy[i];
				if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&mapp[tx][ty]!=col)
				{
					if(h==0) h=mapp[tx][ty];
					else if(h-col>0&&mapp[tx][ty]-col<0||h-col<0&&mapp[tx][ty]-col>0)
					{
						flag=1;
						break;
					}   
				}
			}
		}
		if(flag==1) break;
	}
	
	if(flag!=1)
	{
		if(h<col) sf++;
		else sg++;
	}		
}
 
 
 
int main()
{
	memset(vis,0,sizeof(vis));
	int ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>mapp[i][j];
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(vis[i][j]==0)
			{
				flag=0; h=0;
				bfs(i,j);
				ans++;
			}
		}
	}
	
	if(ans==1) cout<<"1 1"<<endl;
	else cout<<sf<<" "<<sg;
	return 0;
}
