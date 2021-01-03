//从小到大进行排序，思路1不断和第一位比较比较n-1次每次让最小的交换到数列的第一位。
#include<stdio.h>
int main(void)
{
	int a[100]={0};
	int n;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int j=0;
	 
	for(i=0;i<n;i++)
	{   int t=0;
		for(j=i+1;j<n;j++)
		{
			
			if (a[j]<a[i])
			{
				t=a[i];
			    a[i]=a[j];
			    a[j]=t;
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
	
	
	
	
	
} 
