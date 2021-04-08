#include<bits/stdc++.h>
using namespace std;

struct node
{
	int next; int to;
}a[333];
int head[333];
int dp[333][333];	//表示在以i为根节点的图中选取k节课 

int n=0;int m=0;
int cnt=0;

void add(int from,int to)//邻接表存图
{
	a[++cnt].next=head[from];
	a[cnt].to=to;
	head[from]=cnt;//建边	
} 

void solve(int x)//以x为根节点 
{
	for(int i=head[x];i;i=a[i].next)	 
	{
		solve(a[i].to);//先把前面的搞定 
	}
	
	for(int i=head[x];i;i=a[i].next)
	{
		for(int j=m;j>0;j--)//01背包
		{
			int v=a[i].to;//找到此时的节点
			for(int k=0;k<j;k++)//分配课时 
			{
				dp[x][j]=max(dp[x][j],dp[x][j-k]+dp[v][k]);
			} 
		} 
	}
}

int main()
{
	cin>>n>>m;
	//让0成为所有的默认根节点
	m++; 
	for(int i=1;i<=n;i++)//读入节点信息 
	{
		int fa=0;//父节点
		cin>>fa;
		cin>>dp[i][1];
		add(fa,i); 
	}
	solve(0);
	cout<<dp[0][m];	//以0这个默认结点出发 ，寻找m个数 
	return 0;
} 
