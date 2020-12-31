#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void)
{
	int a[1001][4];
	int N=0;int i=0,t=0,m=0,j=0; 
	scanf("%d",&N);
	for(i=0;i<N;i++)
	{
	scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]) ;
	} 
    int sum[1001];
    for(i=0;i<N;i++)
    {
    sum[i]=a[i][0]+a[i][1]+a[i][2];
	}
	
	for(i=0;i<N;i++)
	{
	for(j=i+1;j<N;j++)
	{
	if(abs(a[i][0]-a[j][0])<=5&&abs(a[i][1]-a[j][1])<=5&&abs(a[i][2]-a[j][2])<=5&&abs(sum[i]-sum[j])<=10)
	{
		m=m+1;
	}
	}
	}
	printf("%d",m);
	
	
	
}
