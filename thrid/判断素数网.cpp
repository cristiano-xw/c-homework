#include<stdio.h>
int issushu(int x)//判断是否为素数
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
	printf("请输入一个大于二的偶数：");
	scanf("%d",&n);
	if(n<=2 || n%2!=0 )
	{	
		printf("别闹！输入一个大于二的偶数！");
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


