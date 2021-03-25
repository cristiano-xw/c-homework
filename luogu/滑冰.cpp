//此题用记忆化搜索和深度优先搜索求解
#include<bits/stdc++.h>
using namespace std;
int n=0; int m=0;
int tx[4]={0,0,1,-1};
int ty[4]={1,-1,0,0};
int mapp[111][111];
int ans=0;
int s[111][111]={0};//长度数组 

int dfs(int dx,int dy)
{
	if(s[dx][dy]!=0)
	return s[dx][dy];//记忆化 
	
	else
	{
		s[dx][dy]=1;
		for(int i=0;i<=3;i++)
		{
			for(int j=0;j<=3;j++)
			{
				int xx=dx+tx[i]; int yy=dy+ty[i];
				if(xx>=1&&yy>=1&&xx<=n&&yy<=m&&mapp[dx][dy]>mapp[xx][yy])
				{
					dfs(xx,yy);//向下搜索 
					s[dx][dy]=max(s[dx][dy],s[xx][yy]+1); 
				}
			}
		}
		return s[dx][dy];
	}
}



int main()
{
	//memset(s,0,sizeof(s));
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mapp[i][j];
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			ans=max(ans,dfs(i,j));
		}
	}
	
	cout<<ans;
	return 0;
} 
