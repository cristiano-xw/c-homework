#include<stdio.h>
#include<math.h>
int main(void)
{
	double x=0;
	scanf("%lf",&x);
	int i=0;
	double sum=0;
	while(sum<x)
	{
		sum=sum+2*pow(0.98,i);
		i++;
	}
	
	printf("%d",i);
}
