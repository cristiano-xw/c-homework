#include<stdio.h>
int sum(int arr[],int n) //(数组名【】，长度)
{
	if (n==0)
	{
		return arr[0];
	}
	else 
	{
		return (sum(arr,n-1)+arr[n]);//改变了函数的值，累加。。。。 
	}
 } 
int main(void)
{
	int a[10]={1,2,3,4,5};
	int m;
	m=sum(a,9);//注意不要越界，如果有n个数，则数组最后一个数的下标为n-1； 
	printf("%d",m);
	return 0;
}






