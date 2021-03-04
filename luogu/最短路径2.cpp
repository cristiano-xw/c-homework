#include<bits/stdc++.h>
#include<queue>
const int num=2147483647;
using namespace std;
int m=0; int n=0; int s=0;
int tmp=0;
int vis[555555];int head[555555];int dis[555555];
struct node
{
	int ne; int now; int dis; //分别表示下一个，当前这个，和边权值 
}t[555555];

void add(int x,int y,int dis)//邻接表建图
{
    t[++tmp].ne=head[x];
	t[tmp].now=y;
	t[tmp].dis=dis;
	head[x]=tmp;	
} 

void spfa()
{
	queue<int>q;
	for(int i=1;i<=n;i++)
	{
		dis[i]=num;//初始化长度
		vis[i]=0; 
	}
	
	q.push(s); dis[s]=0; vis[s]=1;
	while(q.empty()==0)
	{
		int j=q.front();
		q.pop(); vis[j]=0;//出队
		for(int i=head[j];i;i=t[i].ne)//对邻接表进行遍历
		{
			int v=t[i].now;
			if(dis[v]>dis[j]+t[i].dis) //如果有最短路就更改
			{
				dis[v]=dis[j]+t[i].dis;
				if(vis[v]==0)
				{
					vis[v]=1; q.push(v);
				}
			}
		} 	 
	}
}

int main()
{
	cin>>n>>m>>s;
	for(int i=1;i<=m;i++)
	{
		int x=0;int y=0; int l=0;
		cin>>x>>y>>l;
		add(x,y,l);
	}
	
	spfa();
	for(int i=1; i<=n; i++)
    if(s==i) cout<<0<<" ";  
    else cout<<dis[i]<<" ";  
    return 0;
}
