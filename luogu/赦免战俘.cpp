#include<stdio.h>
#include <math.h>
#include<malloc.h>
int a[1050][1050];


void digui(int x,int m,int n) //x��ʾ�߳���m��ʾ���������Ϸ���һ����ĺ����꣬n��ʾ���Ϸ���һ����������� 
{

if (x==2)
{   
	a[m][n]=0;//���һ�Σ������Ϸ��ĵ���Ϊ0��Ȼ���˳�
	return ; 
}

if(x!=2)                 
{
	int i=0;
	int j=0;
	i=m; j=n;
	for(i=m;i<m+x/2;i++)
	{
		for(j=n;j<n+x/2;j++)
		{
		  a[i][j]=0;	
		}
	}
	
	digui(x/2,m+x/2,n);
	digui(x/2,m,n+x/2);       
	digui(x/2,m+x/2,n+x/2);
}
	
} 


int main(void)
{
	 
	double n=0;
	int x=0;
	scanf("%lf",&n);    
	x=pow(2,n); 
	int i=0;
	int j=0;
	for(i=0;i<x;i++)
	{
		for(j=0;j<x;j++)
		{
			a[i][j]=1;
		}
	} //��ȫ���������ױ�� 
	
	
	digui(x,0,0);                       
	for(i=0;i<x;i++)
	{
	   for(j=0;j<x;j++)
	   {
	   	printf("%d ",a[i][j]);
	   }
	   printf("\n");
	}
	
	
	/*for(i=0;i<m;i++)
	{
	   for(j=0;j<m;j++)
	   {
	   	printf("%d ",a[i][j]);
	   }
	   printf("\n");
	}*/
	
	
	 
}
