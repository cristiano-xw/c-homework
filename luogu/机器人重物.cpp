#include<bits/stdc++.h>
#include<queue>
using namespace std;
int mp[55][55];
int vis[55][55][4];
int xx[]={-1,0,1,0};//0,1,2,3�����������ζ�Ӧ 
int yy[]={0,1,0,-1};
int n;int m; 
int sx=0; int sy=0;//��ʼλ��
int fx=0; int fy=0;//��ֹλ�� 
//�����0��ʼ��n 
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
			scanf("%d",&mp[i][j]);//�����·�������� 
			if(mp[i][j]==1)
			{
				mp[i][j]=mp[i-1][j-1]=mp[i-1][j]=mp[i][j-1]=1;
			} 
		}
	}  
	
	queue <robot> q; //�����ṹ�����
	char chu;//��ʼ���� 
	
	scanf("%d%d%d%d %c",&sx,&sy,&fx,&fy,&chu); 
	robot t1;
	t1.x=sx;t1.y=sy;t1.s=0;
	if(chu=='N') t1.d=0;
	if(chu=='E') t1.d=1;
	if(chu=='S') t1.d=2;
	if(chu=='W') t1.d=3;
	q.push(t1);//�������
	
	while(q.empty()==0)
	{
		robot k;//���ɱ��� 
		k=q.front();
		vis[k.x][k.y][k.d]=1;//���ϱ��
		
		if(k.x==fx&&k.y==fy)
		{
			printf("%d",k.s);
			return 0;
		} 
		
		k.s++;
		//����������α���
		
		robot k1;
		k1=k;//���ı�k
		
		//����ת
		k1.d=(k1.d+1)%4;
		if(vis[k1.x][k1.y][k1.d]==0)
		{
			q.push(k1);//������� 
		} 
		//����ת ���������
		
		k1.d=(k1.d+2)%4;
		if(vis[k1.x][k1.y][k1.d]==0)
		{
			q.push(k1);
		}
		 
		//��ǰ��
		k1=k;//�ع�
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
