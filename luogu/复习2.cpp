//����ö�ټӻ���
#include<bits/stdc++.h>
using namespace std;
int total=20020616;
int a[100][100];
int l=0; int r=0;

void dfs(int x,int i,int y)
{
    if(i<=y-1)//�ӵ�0������ʼ
	{
		l+=a[x][i];
		dfs(x,i+1,y);
		l-=a[x][i];
		
		r+=a[x][i];
		dfs(x,i+1,y);
		r-=a[x][i];
	} 
	
	if(i==y)
	{
		total=min(total,max(r,l));
		return ;
	}
}

int main()
{   
    int ans=0;
    int d[4];
    int i=0;
    cin>>d[0]>>d[1]>>d[2]>>d[3];
    
    for(i=0;i<4;i++)
    {  
        l=r=0;
    	int j=0;
    	for(j=0;j<d[i];j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	
	
	//�Զ�ά�����ÿһ�н�������
	
	for(i=0;i<4;i++)
	{ 
	    l=r=0;//ÿ����ɺ����� 
		dfs(i,0,d[i]); //���ص�i��һά���� ÿһ����d��i������ 
		ans+=total;
		total=19999;
	} 
	
	
	printf("%d",ans);
	return 0;
}
