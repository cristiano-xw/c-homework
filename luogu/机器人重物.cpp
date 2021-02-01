#include<bits/stdc++.h>
#include<queue>
using namespace std;
int mp[55][55];
int vis[55][55][4];
int xx[]={-1,0,1,0};//0,1,2,3东南西北依次对应 
int yy[]={0,1,0,-1};
int n;int m; 
int sx=0; int sy=0;//初始位置
int fx=0; int fy=0;//终止位置 
//坐标从0开始到n 
struct robot
{
	int x;int y;int s;int d;
};
            
int main(void) 
{  
    memset(vis,0,sizeof(vis)); 
    memset(mp,0,sizeof(mp));
	scanf("%d%d",&n,&m);
	int i=0; int j=0;
	
	for(i=1;i<=n;i++) 
	{
		for(j=1;j<=m;j++)
		{
			scanf("%d",&mp[i][j]);//用右下方点代表方块 
			if(mp[i][j]==1)
			{
				mp[i][j]=mp[i-1][j-1]=mp[i-1][j]=mp[i][j-1]=1;
			} 
		}
	}  
	
	queue <robot> q; //申明结构体队列
	char chu;//初始方向 
	
	scanf("%d%d%d%d %c",&sx,&sy,&fx,&fy,&chu); 
	robot t1;
	t1.x=sx;t1.y=sy;t1.s=0;
	if(chu=='N') t1.d=0;
	if(chu=='E') t1.d=1;
	if(chu=='S') t1.d=2;
	if(chu=='W') t1.d=3;
	q.push(t1);//进入队列
	
	while(q.empty()==0)
	{
		robot k;//过渡变量 
		k=q.front();
		vis[k.x][k.y][k.d]=1;//做上标记
		
		if(k.x==fx&&k.y==fy)
		{
			printf("%d",k.s);
			return 0;
		} 
		
		k.s++;
		//五种情况依次遍历
		
		robot k1;
		k1=k;//不改变k
		
		//向右转
		k1.d=(k1.d+1)%4;
		if(vis[k1.x][k1.y][k1.d]==0)
		{
			q.push(k1);//进入队列 
		} 
		//向左转 即方向加三
		
		k1.d=(k1.d+2)%4;
		if(vis[k1.x][k1.y][k1.d]==0)
		{
			q.push(k1);
		}
		 
		//向前方
		k1=k;//回归
		k1.x+=xx[k1.d];
		k1.y+=yy[k1.d];
		if(k1.x>=1&&k1.x<n&&k1.y>=1&&k1.y<m&&vis[k1.x][k1.y][k1.d]==0&&mp[k1.x][k1.y]==0)
		{
			q.push(k1);
			k1.x+=xx[k1.d];
			k1.y+=yy[k1.d];
			if(k1.x>=1&&k1.x<n&&k1.y>=1&&k1.y<m&&vis[k1.x][k1.y][k1.d]==0&&mp[k1.x][k1.y]==0)
			{
				q.push(k1);
				k1.x+=xx[k1.d];
				k1.y+=yy[k1.d];
				if(k1.x>=1&&k1.x<n&&k1.y>=1&&k1.y<m&&vis[k1.x][k1.y][k1.d]==0&&mp[k1.x][k1.y]==0)
				{
					q.push(k1);
				}
				
			}
		}
		q.pop();
	} 
	printf("-1");
	return 0;
}
