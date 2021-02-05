#include<bits/stdc++.h>
#include<queue>
using namespace std;
int ans=0;//结果 也是中途计时的 
int xx[]={1,-1,0,0};
int yy[]={0,0,-1,1};
int d[333][333];//落下时间        
int vis[333][333];
int main()
{   
    memset(d,0,sizeof(d));  
	memset(vis,0,sizeof(vis));              
	int m=0; scanf("%d",&m);
	int i=0;
	
	for(i=0;i<m;i++)
	{ 
		int x=0; int y=0;//读入陨石点的坐标
		scanf("%d%d",&x,&y);
		int t=0;
		scanf("%d",&t);
		
		if(t<d[x][y]||d[x][y]==0)
		{
			d[x][y]=t;//该点陨石到来的最快时间 
			//printf("ok");
		}
		if((x+1<=300&&t<d[x+1][y])||(x+1<=300&&d[x+1][y]==0))
		{
			d[x+1][y]=t;
			//printf("kk");
		}
		
		if(x-1>=0)
		{
		if((x-1>=0&&t<d[x-1][y])||(x-1>=0&&d[x-1][y])==0) 
		{
			d[x-1][y]=t;
			//printf("ii");
		}
	    } 
		
		if(y-1>=0)
		{
		if((y-1>=0&&t<d[x][y-1])||(y-1>=0&&d[x][y-1]==0))  
		{
			d[x][y-1]=t;
			//printf("dd");
		} 
	    }
	    
		if((y+1<=300&&t<d[x][y+1])||(y+1<=300&&d[x][y+1]==0))  
		{ 
			d[x][y+1]=t;
			//printf("OO");
		}
	} //图像读取思路无误 
	
	int j=0;
	/*for(i=0;i<=5;i++)
	{
		for(j=0;j<=5;j++)
		{
			cout<<d[i][j];
		}
		cout<<endl;
	}*/ 
	
	queue<int>x; queue<int>y;//建立队列
	x.push(0);y.push(0);
	int dx=0; int dy=0;
	int v=0;
	
	while(x.empty()==0) 
	{
		int sx=x.front(); int sy=y.front();
		vis[sx][sy]=1;
		if(d[sx][sy]==0) 
		{
			cout<<ans;
			return 0;
		}
	   
	    for(i=0;i<4;i++)
	    {   
	    	dx=sx+xx[i];
	    	dy=sy+yy[i];
	    	if(dx<=300&&dx>=0&&dy>=0&&dy<=300&&vis[dx][dy]==0&&ans<=d[dx][dy]-1)  
	    	{
	    		x.push(dx);y.push(dy); 
	    		v++;
			}
		}
		x.pop();y.pop();
		ans++;
	} 
	
	cout<<"-1";
	return 0;
} 
