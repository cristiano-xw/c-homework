//�ö��н��� ȷ���˸���������
#include<bits/stdc++.h>
using namespace std;
int xx[]={2,2,-2,-2,1,1,-1,-1}; //������ı仯 
int yy[]={1,-1,1,-1,2,-2,2,-2};//������ı仯

struct node
{
    int x; int y; int t;//������ ������ ����	 
} ;

int main(void)
{
	int n=0; int m=0; int sx=0; int sy=0;
	scanf("%d%d%d%d",&n,&m,&sx,&sy);
	int map[500][500];
	memset(map,-1,sizeof(map));//����ͼȫ����ʼ�����Ϊ0
	
	queue<node>q;
	q.push((node){sx,sy,0});//����ʼ���ѹ��ṹ��
	map[sx][sy]=0; //��ʼλ��Ϊ0
	
	while(q.empty()==0)//�������治�ǿյ�
	{             
		int i=0;
		for(i=0;i<8;i++)
		{
			int dx=xx[i]+q.front().x;
			int dy=yy[i]+q.front().y;  
			
			if(dx>=1&&dx<=n&&dy>=1&&dy<=m&&map[dx][dy]==-1)
			{
				q.push((node){dx,dy,q.front().t+1});//���������ͽ������ 
				map[dx][dy]=q.front().t+1;//���е㶼�ǵ�һ������������ 
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
