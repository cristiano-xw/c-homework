#include<stdio.h>
#define N 10
int main(void)
{
	int a[N],*p;
	printf("please input %d numbers",N);
	for (p=a;p<a+N;p++)
	scanf("%d",p);
	printf("in reverse order");
	for (p=a+N-1;p>=a;p--)
	printf("%d",*p);
	return 0;
	
 } 
