#include<stdio.h>
#define N 2
int main(void)
{
	int a[N],i;
	printf("please enter %d numbers\n",N);
	for (i=0;i<N;i++)
	scanf("%d",&a[i]);
	//printf("in reverse order");
	
	//for (i=N-1;i>=0;i--)
	printf("a=%d,%d",a[0],a[1]);
		return 0;
	
}
