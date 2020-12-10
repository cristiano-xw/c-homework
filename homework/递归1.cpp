//用递归编写斐波那契数列
//C允许函数调用它自己<有去有回>，这种调用过程称为递归。
#include<stdio.h>
int f(int n)
{
	if (n==1)
	{
		return 1;  //函数返回值为1 
	}
	if (n==2)
	{
		return 1;
	}
	else 
	{
		return (f(n-1)+f(n-2));
	}
 } 
int main(void)
{
	int m;
	m=f(6);
	printf("the result is %d",m);
	return 0;
	
}
 
 
 
 
 
 
 
 
 
 
 
