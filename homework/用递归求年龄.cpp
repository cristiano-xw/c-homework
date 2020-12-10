//输入三个正整数n、a和k（0<n,a,k<=100,n>=2） 
//分别代表摆龙门阵的小伙伴的人数、第一号小伙伴的年龄和相邻编号小伙伴的年龄差。
#include<stdio.h>
int sum(int n,int a,int k)//要用的值必须在函数括号里定义 因为只有括号里的值实参会发送给形参 
{   
	if (n==1)
	{
		return a;
	}
	else 
	{
		return (sum(n-1,a,k)+k);
	}
}
int main(void)
{   int n,a,k;
	//printf("how many children there are ?\n");
	//scanf("%d",&n);
//	printf("the age of the first child\n");
	//scanf("%d",&a);
	//printf("the age difference between each child\n");
	//scanf("%d",&k);
	scanf("%d%d%d",&n,&a,&k);
	int m;
	if(n>=2&&a>0&&k<=100&&k>0&&a<=100&&n<=100)
	{
	m=sum(n,a,k);
	printf("%d\n",m);
	}
	else 
	{
		printf("Wrong Number");
	}
	
}
//我对递归的理解，递归实际上是一种函数，可以实现在函数体内部自己调用自己前一步的值，从而实现循环。 






