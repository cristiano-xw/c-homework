//�����˼·������������� һֱҪ��������ͷ�ٻ��� ����ͷans++
#include<bits/stdc++.h>
using namespace std;
int n=0; int m=0; int t=0;//�ϰ�����
int sx=0; int sy=0; int fx=0; int fy=0;
int mp[10][10];//��ͼ
int vis[10][10];//�������
int xx[]={1,0,-1,0};
int yy[]={0,-1,0,1};
int ans=0;//��� 


void dfs(int x,int y)
{
	if(x==fx&&y==fy)
	{  
	    ans++;
		return;
	 
	}
	
	else
	{
		int i=0;
		for(i=0;i<4;i++) //�����ĸ����� 
		{
			int dx=x+xx[i];
			int dy=y+yy[i];
			if(dx>=1&&dx<=n&&dy>=1&&dy<=m&&vis[dx][dy]==0&&mp[dx][dy]==0) 
			{
				vis[dx][dy]=1;//�����˹� 
				dfs(dx,dy);
				vis[dx][dy]=0;
			}
		}
	}
}
 
int main(void)
{
	cin>>n>>m>>t>>sx>>sy>>fx>>fy;
    memset(mp,0,sizeof(mp));
	memset(vis,0,sizeof(vis));
	int i=0; int j=0;
	
	for(i=1;i<=t;i++)   //����t���ϰ��� �����꿪ͷΪ1��1 
	{
		int x=0; int y=0;
		scanf("%d%d",&x,&y);
		mp[x][y]=1;
	}
	
	
	
	vis[sx][sy]=1;
	dfs(sx,sy);
	cout<<ans;
	return 0;
	
}  
