#include<bits/stdc++.h> 
using namespace std;
int n;
int mp[305][305];
int vis[305][305];
int sx,sy,st;
int ans[305][305];  
int dx[5]={0,0,0,1,-1};
int dy[5]={0,1,-1,0,0}; 

int main()
{
    scanf("%d",&n);
    memset(mp,-1,sizeof(mp));
	
    for (int i=1;i<=n;i++)
	{
    	scanf("%d%d%d",&sx,&sy,&st); 
		for (int j=0;j<5;j++)
		{ 
			if (sx+dx[j]>=0&&sy+dy[j]>=0&&(mp[sx+dx[j]][sy+dy[j]]==-1||mp[sx+dx[j]][sy+dy[j]]>st)) 
				mp[sx+dx[j]][sy+dy[j]]=st;
		} 
	}
	
	queue<int> q[2]; 
	vis[0][0]=1; 
	q[0].push(0);q[1].push(0); 
	
	while (!q[0].empty())
	{ 
		int x=q[0].front();
		int y=q[1].front(); 
		q[0].pop();q[1].pop(); 
		int s=ans[x][y]+1; 
		if (mp[x][y]==-1)
		{ 
			printf("%d\n",ans[x][y]);
			return 0;
		}
		
		for (int i=1;i<=4;i++)
		{
			int fx=x+dx[i],fy=y+dy[i]; 
			if (fx>=0&&fy>=0&&(s<mp[fx][fy]||mp[fx][fy]==-1)&&vis[fx][fy]==0)
			{ 
				q[0].push(fx);
				q[1].push(fy); 
				vis[fx][fy]=1; 
				ans[fx][fy]=s; 
			}
		}
	}
	
	printf("-1\n"); 
	return 0;
}
