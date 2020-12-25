#include<stdio.h>
#define N 10
int sum_array(int a[N])
{
	int i,sum=0;
	for (i=0;i<N;i++)
	sum+=a[i];
	return sum;
}
int main(void)
{
	int a[N],i,sum;
	
	for (i=0;i<N;i++)
	scanf("%d",&a[N]);
	printf("the sum of %d is %d",a[N],sum(a[N]));
	return 0;
}
