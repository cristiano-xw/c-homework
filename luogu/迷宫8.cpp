#include<bits/stdc++.h>
using namespace std;
const int maxx=1010;
int n=0; int m=0; 
int color=0; int cnt=0;
int mp[maxx][maxx];
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
	            vis[dx][dy]=color;     
            }
		}
		
		h.pop();l.pop();cnt++;
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
			char x; cin>>x;
			if(x=='1')
		    mp[i][j]=1;
		    if(x=='0')
		    mp[i][j]=0;
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(vis[i][j]==0)//没有访问过哈
			{
				color++; //发现新的点 
				bfs(i,j);
				ans[color]=cnt;//cnt就是出现次数 
				cnt=0;//color就是出现顺序 
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
