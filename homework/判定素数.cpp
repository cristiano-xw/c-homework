#include<stdio.h>
int is_prime(int n)
{
	int divisor;
	if(n<=1)
	return false;
	else
	for (divisor =2; divisor*divisor<=n;divisor++)
	if (n % divisor ==0)
	return false;
	else
	return  true;
}
  int main(void)
  {
  	int n;
  	printf("enter a number\n");
  	scanf("%d",&n);
  	if(is_prime(n))
  	printf("prime\n");
  	else
  	printf("not prime\n");
  }
