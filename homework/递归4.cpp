//ͨ���ݹ��ҳ�һ�������е������Сֵ �� ������n��͵�n-1����бȽ�
#include<stdio.h>
int max (char a[],int n)
{
	if (n==0)
	{
		return a[0];
	}
	else 
	{
		if (a[n]>a[n-1])
		{
			return a[n];
		}
		else 
		{
			return a[n-1];
		}
	}
 } 
 int main(void)
 {  
    int m;
 	char a[10]={1,2,3,4,5};
 	m=max(a,5);
 	printf("%d",m);
 	return 0;
 }
