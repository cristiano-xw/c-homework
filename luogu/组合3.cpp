//���������ⷨΪdfs�ӻ���
#include<bits/stdc++.h>
using namespace std;
int a[1000]={};int b[1000]={};//bΪ������� aΪ��������
int n=0;//һ���������

void dfs(int k) //kΪ��ʱ�ǵڼ����� 
{ 
    int i=0;
	if(k>n)//�Ѿ����� 
	{
		for(i=1;i<=n;i++)
		{
			printf("%5d",a[i]);
		}
		printf("\n");
	}
	
	if(k<=n) 
	{
		for(i=1;i<=n;i++)
		{
			if(b[i]==0)
			{
               a[k]=i;
			   b[i]=1;
			   dfs(k+1);
			   b[i]=0;			
			} 
		}	
	}
} 

int main(void)
{
	scanf("%d",&n);
	dfs(1);
	return 0;
}
