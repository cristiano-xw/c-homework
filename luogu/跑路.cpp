#include<bits/stdc++.h>
using namespace std;
int vis[60][60];//��ʾi��j�����ʱ��
int mapp[60][60][65];//����
int n=0; int m=0;
void make()//���� 
{
	memset(vis,10,sizeof(vis));
	memset(mapp,0,sizeof(mapp));
	for(int i=1;i<=m;i++)  
	{
		int x=0; int y=0;
		cin>>x>>y;// x��y�ı�
		vis[x][y]=1;
		mapp[x][y][0]=1; 
	}
} 

void check()
{
	for(int k=1;k<=60;k++)//�η� 
	for(int i=1;i<=n;i++)
	for(int t=1;t<=n;t++)
	for(int j=1;j<=n;j++)
	if(mapp[i][t][k-1]&&mapp[t][j][k-1])
	{
		mapp[i][j][k]=1;//��Ϊһ���ӿ��Ե��� 
		vis[i][j]=1;//һ���� 
	}
}

void add()
{
	for(int k=1;k<=n;k++)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{ 
				vis[i][j]=min(vis[i][j],vis[i][k]+vis[k][j]);
			}
		}
	}
}

int main()
{
	cin>>n>>m;
	make();
	check();
	add();
	cout<<vis[1][n]<<endl;
	return 0;
}
