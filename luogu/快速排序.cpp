#include<iostream>
using namespace std;
int a[111111111]={0};
int n=0;

void quicksort(int l,int r)   //规定左边界位l有边界为r
{
	int m=a[(l+r)/2];  //取中间值为比较点 
	int i=l;int j=r;
	                               
	do
	{
	while(a[i]<m)
	{
		i++;//左边小于中值   
	}
	
    while(a[j]>m)
    {
    	j--;//右边大于中间值 
	}
	
	if(i<=j) //不可以越界交换 
	{
	swap(a[i],a[j]);
	i++;
	j--;
    }
    
    }while(i<=j); //i=j时为交换终点 
    
    if(l<j)
    {
    	quicksort(l,j);
	}
	
	if(i<r)
	{
		quicksort(i,r);
	}
    
    
} 
int main(void)
{   
    int i=0; 
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	quicksort(1,n);   //开始时左边界为1 右边界为n
   
	for(i=1;i<=n;i++)
	{
		cout<<a[i]<<" ";
	} 
	
	return 0;
}
