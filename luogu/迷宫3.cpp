#include<bits/stdc++.h>
#include<queue>
using namespace std;
int xx[]={0,0,1,-1};
int yy[]={1,-1,0,0};//��������
int r=0;
char mmap[1005][1005];
int n=0; int m=0; int i=0; int j=0;

void bfs(int x1,int y1 )
{
	   queue<int >x;
	   queue<int >y;
	   int vis[1005][1005];//�������ÿ�ζ�Ҫ��� 
	   memset(vis,0,sizeof(vis));
	   x.push(x1); y.push(y1);
	   printf("q");
	   while(x.empty()==0&&y.empty()==0)
	   { 
	     printf("ok");
	   	 for(int t=0;t<4;t++)//��������
         { 
            int x2=x.front();int y2=y.front() ;
         	int dx=x.front()+xx[t];
         	int dy=y.front()+yy[t]; 
         	
         	if(mmap[x2][y2]!=mmap[dx][dy]&&vis[dx][dy]==0&&dx>=1&&dx<=n&&dy>=1&&dy<=n)
         	{
         		vis[dx][dy]=1;//�������
				r++;//������һ 
				x.push(dx);y.push(dy);//������� 
			}
		 }	
		 x.pop();y.pop();  
	   }
	
	
}

 
int main(void)
{
	scanf("%d%d",&n,&m); 
	getchar();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%c",&mmap[i][j]);
		}
		getchar();
	} 

	for(i=1;i<=m;i++)//һ��Ҫ��¼m������ 
	{  
	   int x1;int y1;
	   scanf("%d%d",&x1,&y1);
	   printf("0kkk"); 
	   bfs(x1,y1); 
	   printf("0k");
	   printf("%d\n",r);
	   r=0;
	}
	
	return 0;
} 
