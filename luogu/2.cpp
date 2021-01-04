#include<stdio.h>
int zhishu(int n)
{
	int i=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0&&n!=2)
		{
			return 0;
		}
	}
	
	return 1;
}


int main(void)
{
	int L=0;
	scanf("%d",&L);
 
	int sum=0;//用来存储质数的和
	int i=2;//数从2开始
	int a[11111]={0};//用来装质数 
	int j=1;
	if(L==1)
	{
		printf("0");
		return 0;
	}
	while(sum<L)
	{
		if(zhishu(i)==1)
		{
			a[j]=i;
			sum+=i;
			j++;
		}
		
		i++;
	} 
	
	int k=0;
	for(k=1;k<j;k++)
	{
		printf("%d",a[k]);
		printf("\n");
		 
	}
	
	printf("%d",j-1); 
	
	
	
	 return 0;
}
