//�����õݹ飬��ζ�̶�Ϊn����һ���ݹ������Ϊ��ǰ����ζ�̶ȡ���Ʒ��һ��ֻ��10�֣��ڶ����ݹ������Ϊ
//��ǰ��Ʒ����ζ�̶�.
#include<bits/stdc++.h>
using namespace std;
int n=0;int kind=0;//��ʾ���� 
int m[10000][111];  //ǰ��һ����ڼ�������������һ����ÿ����Ʒ������ 
int a[11];//��һ����������Ķ�Ӧ��Ʒ������

void f(int total,int d)//total��ʾ��ʱ��������d��ʾ��ʱ�浽�ڼ�������
{    
     int i=0;
	 if(total<n&&d<10)
	 {
	 	for(i=1;i<=3;i++)
	 	{
	 		a[d]=i;
			f(total+i,d+1) ;
		}
	 }  
	 
	 if(total==n&&d==10)
	 {
	 	int j=0;
	 	for(j=0;j<10;j++)
	 	{
	 	m[kind][j]=a[j];	
		}
		kind++;
	 }
} 

int main(void)
{   
    scanf("%d",&n);
    
	if(n<10)
    {                 
    	printf("0"); 
    	return 0;
	}
	
	int i=0 ;int j=0;
	f(0,0);
	printf("%d\n",kind);
	for(i=0;i<kind;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%d ",m[i][j]);
		}
		printf("\n");
	}
	return 0;
} 
