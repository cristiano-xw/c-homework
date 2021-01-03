//使用插入排序对数据进行排序；
#include<stdio.h>
#define N 10 //需要排序的数据元素数量；
 
void InserSort(int a[])  //直接插入排序；
{   int i=0;int j=0;
 
	for( i=1;i<N;i++)
	{
		int t=a[i];  //取出一个没有排序的数据；
		for( j=i-1;j>=0&&t<a[j];j--)  //在排序中序列中查找位置；
			a[j+1]=a[j];  //向后移动数据元素；
		a[j+1]=t;
	}
}
                                      
int main(void)
{   
    int i=0;
	int a[N]={3,2,5,8,4,7,6,9,1,10};  //定义数组；
	printf("原始数据为:\n");
	for( i=0;i<N;i++)  //输出原始数据；
		printf("%d ",a[i]);
	printf("\n\n");
	InserSort(a);
	printf("使用插入排序后的数据为:\n");
	for(i=0;i<N;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}
