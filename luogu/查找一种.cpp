//����yizhong
#include<bits/stdc++.h>
using namespace std;
char a[111][111];
int xx[]={0,0,-1,-1,-1,1,1,1}; //�˸����� 
int yy[]={1,-1,0,-1,1,0,-1,1}; 
int n=0;

string yz="yizhong";
int vis[111][111];
void dfs(int x,int y)//��ʱ������ 
{   
    int i=0; int j=0; 
	for(i=0;i<8;i++)//�˸�����
	{   
	    int f=1;//��־���������ͱ�Ϊ0  
		for(j=0;j<7;j++)//����һ����7 
		{   
		    int dx=x+j*xx[i]; int dy=y+j*yy[i];
			if(yz[j]!=a[dx][dy]||dx<1||dx>n||dy<1||dy>n)  
			{    
				f=0;
				break;
			}
		}
	
	if(f==1)
	{
		for(j=0;j<7;j++)
		{
			int dx=x+j*xx[i];
			int dy=y+j*yy[i];
			vis[dx][dy]=1;
			
		}
	}
   }
} 




int main(void)
{  
    memset(a,0,sizeof(a));
    memset(vis,0,sizeof(vis));
	scanf("%d",&n);
	int i=1;int j=1;
	 
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			 cin>>a[i][j];
		}
		
		
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(a[i][j]=='y')//��ʼ����
			{
				dfs(i,j);
			} 
		}
	}
	
 
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(vis[i][j]==1)
			{
				cout<<a[i][j];//������cincout���� 
			}
			
			else
			printf("*");
		}
		
		printf("\n");
	}
	return 0;
} 
