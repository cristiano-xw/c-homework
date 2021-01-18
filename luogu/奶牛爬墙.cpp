#include<stdio.h> 
#include<iostream>
using namespace std;
int a[22222]={0};
void quicksort(int l,int r)
{
	int m=a[(l+r)/2];
	int i=l;int j=r;
	do
	{
		while(a[i]<m)
		{
			i++;
		}
		
		while(a[j]>m)
		{
			j--;
		}
		
		if(i<=j)
		{
			swap(a[i],a[j]);
			i++;
			j--; 
		}
	}while(i<=j); 
	
	if(i<r)
	{
		quicksort(i,r);
	}
	if(j>l)
	{
		quicksort(l,j);
	}
	
}

int main(void)
{   
    int n=0;
    int b=0;
    scanf("%d",&n);
    scanf("%d",&b);
    int i=0;
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&a[i]);
	}
	quicksort(1,n);//从小到大排序
	int j=0;
	//for(j=1;j<=n;j++)
	//{
	//	printf("%d ",a[j]);
	//}
	i=n;
	int v=0;
	while(b>0)
	{
		b=b-a[i];
		i--;
		v++;
	} 
	printf("%d",v);
	return 0;
}
