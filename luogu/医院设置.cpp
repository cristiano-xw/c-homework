#include<bits/stdc++.h>
using namespace std;
int vis[111];
struct node
{
	int value; int father; int left;int right;
}s[111];

int tol(int x,int d)
{
	if(x==0||vis[x]==1)
	{
		return 0;
	}
	else
	{  
	    vis[x]=1;
		return tol(s[x].father,d+1)+tol(s[x].left,d+1)+tol(s[x].right,d+1)+s[x].value*d;
	}
}

int main()
{
	int n=0; int i=0; int ans=11111111;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>s[i].value>>s[i].left>>s[i].right;
	}
	for(i=1;i<=n;i++)
	{
		s[s[i].left].father=i;
		s[s[i].right].father=i;
	}
	
	for(i=1;i<=n;i++)
	{
		memset(vis,0,sizeof(vis));
		ans=min(ans,tol(i,0));
	}
	cout<<ans;
	return 0;
}
