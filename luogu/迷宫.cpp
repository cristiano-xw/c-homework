#include<bits/stdc++.h>
#include<queue>
using namespace std;
int xx[]={0,0,1,-1};
int yy[]={1,-1,0,0};//建立方向
int main(void)
{
	int map[1005][1005];
	int n=0; int m=0; int i=0; int j=0;
	
	scanf("%d%d",&n,&m); 
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%d",&map[i][j]);
		}
	} 
	
    int x[100006];int y[100006];//横纵坐标分别存储 
	int r[100006];//存储次数  
	
    for(i=1;i<=m;i++)
    {
    	scanf("%d%d",&x[i],&y[i]); 
	}
	
	 
	for(i=1;i<=m;i++)//一共要记录m组数据 
	{  
	   int x1=x[i];int y1=y[i];
	   queue<int >x;
	   queue<int >y;
	   int vis[1005][1005];//标记数组每次都要清空 
	   memset(vis,0,sizeof(vis));
	   x.push(x1); y.push(y1);
	   
	   while(x.empty()==0&&y.empty()==0)
	   { 
	   	 for(int t=0;t<4;t++)//遍历方向
         {
         	int dx=x.front()+xx[t];
         	int dy=y.front()+yy[t];
         	if(map[x.front()][y.front()]==0&&map[dx][dy]==1&&vis[dx][dy]==0&&dx>=1&&dx<=n&&dy>=1&&dy<=n)
         	{
         		vis[dx][dy]=1;//标记来过
				r[i]++;//次数加一
				x.push(dx);y.push(dy);//进入队列 
			}
		 }	
		 x.pop();y.pop();  
	   }
	   
	}
	
	
	for(i=1;i<=m;i++)
	{
		printf("%d\n",r[i]);
	}
	return 0;
} 
