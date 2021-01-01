//冒泡排序法，即比较数组的相邻两位即可
#include<stdio.h>
int main(void)
{   int a[100];
	int n=0;
	scanf("%d",&n);
	int i=0; 
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j=0; int t=0;
    //假设最小的数在最后一位，那么要至少n-1次排序才可以
	for(i=0;i<n-1;i++) 
	{    
	   	for(j=0;j<n-1;j++)
	   	{    
	   		if(a[j]>a[j+1])
	   		{   
	   		    
	   			t=a[j];
	   			a[j]=a[j+1];
	   			a[j+1]=t;
			}
		}
	}
		for(i=0;i<n;i++)
		{
			printf("%d ",a[i]);
		}
	
}
