//��ά�����һ����Ӧ������ �ڶ�����Ӧ������
#include<bits/stdc++.h>
using namespace std;
int main(void)
{   
    long long int b[100][100];//�ж��Ƿ�����Ŀ��Ƶ�
	long long int a[100][100];//����Ϊi jʱ���Ե��߷�;
	
	int dx[9]={2,1,-1,-2,-2,-1,1,2,0};
    int dy[9]={1,2,2,1,-1,-2,-2,-1,0}; //���ӵ��������� 
    int i=0; int j=0; int n=0; int m=0; int x=0; int y=0;
    
    scanf("%d%d%d%d",&n,&m,&x,&y);
   
    for(i=0;i<9;i++)
    {  
        if(x+dx[i]>=0&&x+dx[i]<=n&&y+dy[i]>=0&&y+dy[i]<=m) 
        {
    	b[x+dx[i]][y+dy[i]]=1;//�������ŵĵط����Ϊ1
	    }  
	}
	
	int k=0;
	while(b[k][0]!=1&&k<=n)
	{
		a[k][0]=1;
		k++;
	}
	
	int l=0;
	while(b[0][l]!=1&&l<=m)    
	{
		a[0][l]=1;
		l++;
	}  //�жϳ������������Щ  
	
   for(i=1;i<=n;i++)
   {
   	for(j=1;j<=m;j++)
   	{
   		if(b[i][j]==1)
   		{
   			a[i][j]=0;
		}
		else  
		{
			a[i][j]+=a[i-1][j]+a[i][j-1];//Ҫô���������Ҫô�������� 
	    }
	}
   }
   
   //���ݹ���⣬ֻ��Ҫ֪��������͵��ƹ�ϵʽ.    
   printf("%lld",a[n][m]);
	return 0;
}
