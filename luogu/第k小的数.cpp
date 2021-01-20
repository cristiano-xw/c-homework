#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int a[5555555];
int k=0;
int quicksort(int i,int j)
{
	//分别从左边和右边开始寻找;
	//左边寻找大于基准数的，右边寻找小于基准数的 基准数为第一个数
	int v=0;
	v=j;//保存最后一个数的角标 
	do
	{
	while(a[i]<a[0])
	{
		i++;
	}
	while(a[j]>a[0])
	{
		j--;
	}
	
	if(i<=j)
	{
		swap(a[i],a[j]);
	}
	swap(a[0],a[i-1]);
    }while(i<=j&&j!=0);
    
    if(i-1==k)
    {
    	return a[i-1];
	}
	
	if(i-2>0)
	quicksort(0,i-2);
	
	if(i-2<=0)
	{
		int x=0; int y=0;
		for(x=0;x<=v-1;x++)
		{
			for(y=x+1;y<=v;y++)
			{
				if(a[x]>a[y])
				{
					swap(a[x],a[y]);
				}
			}
		}
		return a[k];
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
