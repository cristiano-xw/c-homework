#include<iostream>
#include<stdio.h>
#include<malloc.h> 
#include<string.h>
#include <queue>
using namespace std;
int map[40][40];//��ʼ������ 
bool b[40][40];//�������
int xx[]={0,-1,1,0};
int yy[]={1,0,0,-1};

int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=0; int j=0;
	memset(map,0,sizeof(map));//��ʼ��Ϊ0
	memset(b,0,sizeof(b));//��ʼ���������
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{     
			scanf("%d",&map[i][j]);
		}
	} 
	
	queue < int > x; queue < int > y;
	x.push(0);y.push(0);
	b[0][0]=1;//��ǹ��Ѿ�����
	
	while(x.empty()==0)
	{
		for(i=0;i<4;i++)
		{
			int dx=x.front()+xx[i];
			int dy=y.front()+yy[i];
			
			if(dx>=0&&dx<=n+1&&dy>=0&&dy<=n+1&&map[dx][dy]==0&&b[dx][dy]==0) //��1Ϊ���� 
			{
				x.push(dx); y.push(dy);
				b[dx][dy]=1;//�������� 
			}
		}
		x.pop();
		y.pop();
	} 
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(map[i][j]==0&&b[i][j]==0)
			printf("2 ");
		
		    else printf("%d ",map[i][j]);
	    }
	    printf("\n");
	} 
	return 0;
} 
