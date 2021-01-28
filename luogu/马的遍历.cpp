//用队列解题 确定八个方向数组
#include<bits/stdc++.h>
using namespace std;
int xx[]={2,2,-2,-2,1,1,-1,-1}; //行坐标的变化 
int yy[]={1,-1,1,-1,2,-2,2,-2};//列坐标的变化

struct node
{
    int x; int y; int t;//行坐标 列坐标 次数	 
} ;

int main(void)
{
	int n=0; int m=0; int sx=0; int sy=0;
	scanf("%d%d%d%d",&n,&m,&sx,&sy);
	int map[500][500];
	memset(map,-1,sizeof(map));//将地图全部初始化标记为0
	
	queue<node>q;
	q.push((node){sx,sy,0});//将初始情况压入结构体
	map[sx][sy]=0; //初始位置为0
	
	while(q.empty()==0)//队列里面不是空的
	{             
		int i=0;
		for(i=0;i<8;i++)
		{
			int dx=xx[i]+q.front().x;
			int dy=yy[i]+q.front().y;  
			
			if(dx>=1&&dx<=n&&dy>=1&&dy<=m&&map[dx][dy]==-1)
			{
				q.push((node){dx,dy,q.front().t+1});//满足条件就进入队列 
				map[dx][dy]=q.front().t+1;//所有点都是第一个点派生而来 
			}
		}
		
	   q.pop();
	} 
	
	
	int i=0; int j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("%-5d",map[i][j]);
		}
		printf("\n");
	}
	 
	return 0;
	
} 
