#include<bits/stdc++.h>
#include<queue>
using namespace std;
int dx[4]={0,0,1,-1};
int dy[4]={1,-1,0,0};     
int vis[505][505];//标记数组
int sx[111111]; int sy[111111];
int mapp[505][505];//结果
int n=0; int m=0;int a=0; int b=0;
struct node
{
	int x; int y; int step;
};

queue<node>s;

void chu(int a,int b)
{
	vis[a][b]=1;
	node tmp;
	tmp.x=a; tmp.y=b;
	tmp.step=0;
	s.push(tmp);//入队 
}

void bfs()
{
	while(s.empty()==0)//不是空的
	{
		node tmp;
		node t;
		t=s.front();//把头元素取出
		for(int i=0;i<=3;i++)
		{
			int xx=t.x+dx[i];
			int yy=t.y+dy[i];
			if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&vis[xx][yy]==0)
			{
				vis[xx][yy]=1;
				tmp.x=xx;
				tmp.y=yy;
				tmp.step=t.step+1;//建立新的点
				s.push(tmp); 
			}
		}
		mapp[t.x][t.y]=t.step;//存路径 
		s.pop();
	} 
}

int main() 
{
	memset(vis,0,sizeof(vis));
	cin>>n>>m;
	cin>>a>>b;
	for(int i=1;i<=a;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		chu(x,y);
	}
	for(int i=1;i<=b;i++)
	{
		cin>>sx[i]>>sy[i];	
	}
	bfs();
	for(int i=1;i<=b;i++)
	{
		cout<<mapp[sx[i]][sy[i]]<<endl;
	}
	return 0;
}
