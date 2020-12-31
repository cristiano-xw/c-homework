#include<stdio.h>
int main(void)
{
	double k;
	scanf("%lf",&k);
	double sum=0;
	int n=1;
	
	while(k>=sum)
	{
		sum = sum + 1.0/n;
		n=n+1;               
	}
	
	printf("%d",n-1);
}
