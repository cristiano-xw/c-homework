#include<bits/stdc++.h>
#include<queue>
using namespace std;
int xx[]={0,0,1,-1};
int yy[]={1,-1,0,0};//��������
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
	
    int x[100006];int y[100006];//��������ֱ�洢 
	int r[100006];//�洢����  
	
    for(i=1;i<=m;i++)
    {
    	scanf("%d%d",&x[i],&y[i]); 
	}
	
	 
	for(i=1;i<=m;i++)//һ��Ҫ��¼m������ 
	{  
	   int x1=x[i];int y1=y[i];
	   queue<int >x;
	   queue<int >y;
	   int vis[1005][1005];//�������ÿ�ζ�Ҫ��� 
	   memset(vis,0,sizeof(vis));
	   x.push(x1); y.push(y1);
	   
	   while(x.empty()==0&&y.empty()==0)
	   { 
	   	 for(int t=0;t<4;t++)//��������
         {
         	int dx=x.front()+xx[t];
         	int dy=y.front()+yy[t];
         	if(map[x.front()][y.front()]==0&&map[dx][dy]==1&&vis[dx][dy]==0&&dx>=1&&dx<=n&&dy>=1&&dy<=n)
         	{
         		vis[dx][dy]=1;//�������
				r[i]++;//������һ
				x.push(dx);y.push(dy);//������� 
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
