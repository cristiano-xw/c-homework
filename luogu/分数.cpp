//����Ļ���˼·�����Ѽӻ���
#include<bits/stdc++.h>
using namespace std;
int a[1111]={1};//���Ȳ�ֵ�һ��Ԫ����1
int n=0;

void print(int n)//n��ʾ��������n���� 
{  
	for(int i=1;i<n;i++)
	{
		printf("%d",a[i]);
		printf("+");
	}
	printf("%d",a[n]);
	printf("\n");
}

void dfs(int s,int i)
{
	int t=0;//��ʾ��ǰ����
	for(t=a[i-1];t<=s;t++)
	{
		if(t<n)//��ֹ���ԭ������ 
		{
			a[i]=t;
			s=s-t;
			if(s==0)
			{
				print(i);
			} 
			
			if(s>0) 
		    dfs(s,i+1);
			s+=t;
		}
	} 
}



int main(void)
{
	scanf("%d",&n);
	dfs(n,1);  //�ӵ�һ������ʼ��
	return 0; 
} 


