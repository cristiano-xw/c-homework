#include<stdio.h>
int issushu(int x)//�ж��Ƿ�Ϊ����
{
	int i;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			return 0;	
		}
	}
	return 1;
}
int main()
{
	int n;
	int i;
	int a = 0;
	printf("������һ�����ڶ���ż����");
	scanf("%d",&n);
	if(n<=2 || n%2!=0 )
	{	
		printf("���֣�����һ�����ڶ���ż����");
		return 0;	
	}
	for(i=2;i<=n/2;i++)
	{
		a = n-i;
		if(issushu(i) && issushu(a))
		{
			printf("%d=%d+%d\n",n,i,a);
		}
	}
	return 0;
}


