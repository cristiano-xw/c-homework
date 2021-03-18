#include<bits/stdc++.h>
#include<queue>
using namespace std;
char mapp[400][400];//读入图表 
queue<int>X;
queue<int>Y;
int dx[8]={0,0,1,-1,1,1,-1,-1};
int dy[8]={-1,1,0,0,-1,1,-1,1};
int vis[400][400];//标记数组 
int dis[400][400]={0};
int ans=999999999;
int qx=0; int qy=0; int tx=0; int ty=0;
int n=0; int m=0;
 
int bfs(int x,int y) //在每一个空地都可能可以使用咒语 
{   
    //cout<<"pp";
	X.push(x); Y.push(y);
	dis[x][y]=0;
    while(X.empty()==0||Y.empty()==0)
    {
    //cout<<"ll";
    int a=X.front(); int b=Y.front();
    vis[a][b]=1;
    X.pop(); Y.pop();
    for(int i=0;i<=3;i++)
    {
    	int nx=a+dx[i];//移动 
    	int ny=b+dy[i];
    	
    	if(nx>=1&&nx<=n&&ny>=1&&ny<=m&&mapp[nx][ny]=='O'&&vis[nx][ny]==0) 
    	{
    		dis[nx][ny]=dis[a][b]+1;
    		X.push(nx); Y.push(ny);
		}
	}
  }
}

int main()
{
 
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
		   cin>>mapp[i][j];
		}
	 
	}
	
	//奖杯和哈利坐标
	
	while(cin>>qx>>qy>>tx>>ty)
	{   
	    memset(dis,999999999,sizeof(dis)); 
	    memset(vis,0,sizeof(vis));
		if(qx==0&&qy==0&&tx==0&&ty==0)
		{
			break;
		}
		
		bfs(tx,ty);
		
		for(int i=0;i<8;i++)
		{
			int rx=qx; int ry=qy; //对奖杯所在的位置进行回溯 
			while(rx+dx[i]>=0&&rx+dx[i]<=n&&ry+dy[i]>=0&&ry+dy[i]<=m&&mapp[rx+dx[i]][ry+dy[i]]=='O')
			{
				rx=rx+dx[i];
				ry=ry+dy[i];
				ans=min(ans,dis[rx][ry]);
				//cout<<"jkk";
				//cout<<dis[rx][ry];
			}
		}
		
		if(ans!=999999999&&ans!=-1)         
		cout<<ans<<endl;
		else cout<<"Poor Harry"<<endl;
	} 
	return 0;
}   
