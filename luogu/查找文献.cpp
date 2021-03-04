#include<bits/stdc++.h>
#define MAXN 100005
using namespace std;
int n; int m;
vector<int>p[MAXN];
bool u[MAXN]; //看是否来过哈 

void solve(int x)
{
	cout<<x<<" ";
	for(int i=0,sz=p[x].size();i<sz;i++)
	{
		if(u[p[x][i]]==0)
		{
			u[p[x][i]]=1;
			solve(p[x][i]);
		}
	}
}



int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		p[x].push_back(y);//记录子目录的文献 
	}
	
	u[1]=1;
	solve(1);
	return 0;
}
