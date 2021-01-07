#include<stdio.h>
#include<string.h>
int main(void)
{   
    int m=0;int n=0;int t=0;
    scanf("%d%d%d",&m,&n,&t);//存入面数;
    int a[2000]={0};//下标代表和
	memset(a,0,sizeof(a));
	int i=0;
	int j=0; int k=0;
	
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			for(k=1;k<=t;k++)
			{
				int sum=0;
				sum=i+j+k;
				a[sum]++;
			}
		}
	} 
	
	int max=0;
	int q=0;
	for(q=0;q<=m+n+t;q++)
	{
		if(a[q]>a[max])
		{
			max=q;
		}
	}
	
	printf("%d\n",max);
	printf("%d",a[max]);
	 
	return 0;
}
