//��С�����������˼·1���Ϻ͵�һλ�ȽϱȽ�n-1��ÿ������С�Ľ��������еĵ�һλ��
#include<stdio.h>
int main(void)
{
	int a[100]={0};
	int n;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j=0;
	 
	for(i=0;i<n;i++)
	{   int t=0;
		for(j=i+1;j<n;j++)
		{
			
			if (a[j]<a[i])
			{
				t=a[i];
			    a[i]=a[j];
			    a[j]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	
	
	
} 
