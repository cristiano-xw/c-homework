#include<stdio.h>
int power(int x,int n)
{
	int i,result=1;
	for(i=1;i<=n;i++)
	result=result*x;
	return result;
 } 
 int main(void)
 {
 	int x,n;
 	scanf("%d%d",&x,&n);
 	printf("the result of %d and %d is %d",x,n,power(x,n));
 	return 0;
  } 
