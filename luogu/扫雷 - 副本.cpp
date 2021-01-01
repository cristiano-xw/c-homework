#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	int a[111][111];
	 
	int n=0; int m=0;  //n行m列;
	scanf("%d %d",&n,&m);
	int i=1;
	int j=1;
	
	memset(a,0,sizeof(a));
	
	for(i=1;i<=n;i++) //把第一个位置留出来，免得爆表 
	{
		for(j=1;j<=m;j++)
		{   char k='0';
			scanf("%c",&k);
			if(k=='*')
			{
				a[i][j]=1; //将地雷点标记为1 
			}
			if(k=='?')
			{
				a[i][j]=0;
			}
		}
	} 
	
	printf("%d",a[1][1]);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=m;j++) 
		{
			if(a[i][j]==1)
			{
				printf("*");
			}
			else
			{ 
				int v=0;
				v=a[i+1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i][j+1]+a[i][j-1]+a[i-1][j+1]+a[i-1][j]+a[i-1][j-1];
			    printf("%d",v);
			}
		}
		printf("\n");
	}
	return 0;
	
	
	
}
