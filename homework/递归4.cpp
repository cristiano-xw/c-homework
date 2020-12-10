//通过递归找出一个数组中的最大最小值 ， 即将第n项和第n-1项进行比较
#include<stdio.h>
int max (char a[],int n)
{
	if (n==0)
	{
		return a[0];
	}
	else 
	{
		if (a[n]>a[n-1])
		{
			return a[n];
		}
		else 
		{
			return a[n-1];
		}
	}
 } 
 int main(void)
 {  
    int m;
 	char a[10]={1,2,3,4,5};
 	m=max(a,5);
 	printf("%d",m);
 	return 0;
 }
