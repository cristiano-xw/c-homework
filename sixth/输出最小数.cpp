#include<stdio.h>
int main(void)
{
	int a[20]={0};
	int i=0;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);  //����������ֵĸ��� 
	}
	
	for(i=1;i<=9;i++)
	{
		if(a[i]!=0)
		{
			printf("%d",i); //ȷ����λ
			a[i]=a[i]-1; 
			break;
		}
	}
	
	for(i=0;i<=9;i++)
	{
		if(a[i]!=0)
		{
			int e=0;
			for(e=0;e<a[i];e++)
			{
				printf("%d",i);
			}
		}
	}
	
	return 0;
}
