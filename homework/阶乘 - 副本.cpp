#include<stdio.h>
int main(void)
{
	int n;//一共与n个数
	scanf("%d",&n);
	int sum=0; 
	int i=1;
	int k=1;
	for(i=1;i<=n;i++)  //一共有n个数相加 
	{
		int j=1;int add=1;
		for(j=1;j<=k;j++)       //每个加数是k个数之积             
		{
			add=j*add;
		}
		k++;
		//printf("%d\n",add);
		sum += add;
	} 
	
	printf("%d",sum);
}
