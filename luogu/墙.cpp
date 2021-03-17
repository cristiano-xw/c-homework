#include<bits/stdc++.h>
using namespace std;
int vis[505][505];
char mapp[505][505];
int n=0; int m=0; int cnt=0; int k=0;
int dx[5]={0,0,0,1,-1};
int dy[5]={0,1,-1,0,0};

inline void dfs(int x,int y)
{
	
	for(int i=0;i<=4;i++)
	{
		int fx=x+dx[i]; int fy=y+dy[i];
		if(cnt!=0&&fx>=1&&fx<=n&&fy>=1&&fy<=m&&mapp[fx][fy]=='X'&&vis[fx][fy]==0)
		{
			cnt--;
			mapp[fx][fy]='.';
			vis[fx][fy]=1;
			dfs(fx,fy);
		}
	}
}

int main()
{
	int t=0;
	cin>>n>>m>>k;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>mapp[i][j];	
			if(mapp[i][j]=='.')
			{
				mapp[i][j]='X';
				t++;
			}
		}
	}
	
	cnt=t-k;
	
	int flag=0;
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(mapp[i][j]=='X')
			{
				dfs(i,j);
				break;
				flag=1;
			}
		}
		if(flag==1)
		break;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cout<<mapp[i][j];
		}
		cout<<endl;
	}
	return 0;
}
