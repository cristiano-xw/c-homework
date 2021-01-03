#include<stdio.h>
int zhishu(int x)
{
	int i=0;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0&&x!=2)
		{
			return 0;
		}
	}
	
	if(x==1)
	{
		return 0;
	}
	
	return 1; 
}

int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=4;i<=n;i++)
	{
		if(i%2==0)
		{
			int j=0;
			for(j=0;j<=i/2;j++)
			{
				if(zhishu(j)==1)
				{
					int m=0;
					m=i-j;
					if(zhishu(m)==1)
					{
						printf("%d=%d+%d",i,j,m);
						printf("\n");
						break;
					}
				}
			}
		}
	}
}
