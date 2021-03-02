#include<bits/stdc++.h>
#include<queue>
#define MAXN 100005
using namespace std;
int n=0; int m=0;
vector<int>p[MAXN];
queue<int>q;
bool u[MAXN];

int main()
{   
    memset(u,0,sizeof(u));
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		p[x].push_back(y);//进入队列 
	}
	
	u[1]=1;
	q.push(1);
	while(!q.empty())
	{
		int x=q.front();
		q.pop();
		cout<<x<<" ";
		for(int i=0,sz=p[x].size();i<sz;i++)
		{
			if(u[p[x][i]]==0)
			{
				u[p[x][i]]=1;
				q.push(p[x][i]);
			}
		}
	}
	return 0;
}
