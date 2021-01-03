#include<stdio.h>
void sort(int a[100],int n)
{
    int i=0; int j=0;
    for(i=0;i<n;i++)
    {
    	int k=0;
    	k=a[i];//找到一个还没有排序的数
	    for( j=i-1;j>=0&&k<a[j];j--)  //在排序中序列中查找位置； 
	    {
	    	a[j+1]=a[j]; //。插入 
		}
		a[j+1]=k;
	}
}

int main(void)
{
	int n=0;
	printf("你想插排几个数\n");
	scanf("%d",&n);
	
	int a[100]={0};
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	sort(a,n);
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	return 0;
	
	
}
