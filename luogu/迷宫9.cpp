#include<bits/stdc++.h>
using namespace std;
const int maxx=1010;
int n=0; int m=0; 
int color=0; int cnt=0; 
char mp[maxx][maxx];
int vis[maxx][maxx];//标记数组
int ans[1000010];

int xx[]={0,0,1,-1};//行 
int yy[]={1,-1,0,0};//列 

void bfs(int x,int y)
{
	queue <int>h;
	queue <int>l;//建立队列
	
	h.push(x); l.push(y);
	vis[x][y]=color;//染色
	int i=0;
	while(h.empty()==0)
	{   
		for(i=0;i<4;i++)
		{
			int dx=h.front()+xx[i];
			int dy=l.front()+yy[i];
            if(dx>=1&&dx<=n&&dy>=1&&dy<=n&&vis[dx][dy]==0&&mp[dx][dy]!=mp[h.front()][l.front()])
            {
	            h.push(dx); l.push(dy);//进入队列并且染色 
	            vis[dx][dy]=color;  //这些点都在第color层 所有说它们可以到的点相同 
            }
		}
		
		h.pop();l.pop();cnt++;//cnt表示 该层 可以到达的点 
	} 
} 


int main(void)
{
	cin>>n>>m;
	int i=0; int j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
		 cin>>mp[i][j]; 
		}
	}
	
	//广度搜索每一类点 都标记上相同的color标记，表示相同color可以到达的点是一样的，然后一直广度搜索分支 
	for(i=1;i<=n;i++)  //对每个没有访问过的点都进行广搜 
	{
		for(j=1;j<=n;j++)
		{
			if(vis[i][j]==0)//没有被染色过 说明是新的起点 
			{
				color++;  //发现新的点 
				bfs(i,j);
				ans[color]=cnt;   
				cnt=0;  
			} 
		}
	}
	
	for(i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		cout<<ans[vis[x][y]]<<endl;
	}
	return 0;
}
