#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	
	char a[10000];
	int i=0;
	for(i=0;i<=n;i++) 
	{
		scanf("%c",&a[i]); //��һλ�洢��һ�����з� 
	}
	int v=0;
	int c=0;
	for(i=1;i<n;i++)       
	{
		if(a[i]=='V'&&a[i+1]=='K')
		{
			v++;
			a[i]='X';
			a[i+1]='X'; //���ϱ�ǣ���ֹ�ظ� 
		}
		
	}   
	
	for(i=1;i<n;i++)
	{
		if(a[i]==a[i+1]&&a[i]!='X')
		{
			c=1;
		}
	}
	
	v=v+c;
	printf("%d",v);
	
	return 0;
}
