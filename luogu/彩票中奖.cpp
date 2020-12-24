#include<stdio.h>
#include<string.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int a[8]={0}; //存放中奖号码;
	int i=0;
	for(i=0;i<7;i++)
	{
		scanf("%d",&a[i]);
	} 
	
	int b[8]={0};//存放中奖次数;
	
	for(i=0;i<n;i++)
	{   
	    int v=0;
		int c[8]={0}; //彩票的购买情况 
		int j=0;int k=0;
		for(j=0;j<7;j++)
		{
			scanf("%d",&c[j]);
		}
		
		for(j=0;j<7;j++)
		{
			for(k=0;k<7;k++)
			{
				if(a[k]==c[j])                                  
				{
					v++;
				}
			}
		}
		
		if(v==7)
		{
			b[0]++;
		}
		
		if(v==6)
		{
			b[1]++;
		}
		
		if(v==5)
		{
			b[2]++;
		}
		
		if(v==4)
		{
			b[3]++;
		}
		
		if(v==3)
		{
			b[4]++;
		}
		
		if(v==2)
		{
			b[5]++;
		}
		
		if(v==1)
		{
			b[6]++;
		}
		
	} 
	
	for(i=0;i<7;i++)
	{
		printf("%d ",b[i]);
	}
	return 0;
	
}
