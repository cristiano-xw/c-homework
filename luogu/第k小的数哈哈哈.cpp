#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int a[5555555];
int k=0;
int h=0;    //h作为基准数 
int quicksort(int i,int j)
{
	//分别从左边和右边开始寻找;
	//左边寻找大于基准数的，右边寻找小于基准数的 基准数为第一个数
	int v=0;
	v=j;//保存最后一个数的角标 
	do
	{
	while(a[i]<a[h])
	{
		i++;
	}
	while(a[j]>a[h])
	{
		j--;
	}
	
	if(i<=j)
	{
		swap(a[i],a[j]);
	}
	swap(a[h],a[i-1]);
    }while(i<=j&&j!=0);
    
    if(i-1==k)
    {
    	return a[i-1];
	}
	
	if(i-2>h+1)
	quicksort(h+1,i-2);
	
	if(i-2<=h+1)
	{
		h++;
		quicksort(h+1,v);
	}
}


int main(void)
{ 
    int n=0; 
    scanf("%d%d",&n,&k);
    int i=0;
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	int l=0 ;int r=0;
	l=1;r=n-1;
	quicksort(l,r);
	printf("%d",a[k]);
	return 0;
}
