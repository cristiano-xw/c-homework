#include<stdio.h>
#include<string.h>
int sushu(int x)
{
	int i=0;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0&&x!=2)                     
		{
			return 0;
		}
	}
	
	if(x==0||x==1)
   {
	return 0;
   }
   
	return 1;
}

int main(void)
{
    int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
	int x=0;
	scanf("%d",&x); //存数
	 
	int a[10000]={0};
	
	int j=0;int g=0;
	for(j=2;j<x;j++)
	{
		if(sushu(j)==1)
		{
			a[g]=j; 
			g++;  //将素数从小到大存入 
		}
	}
	
    
	int r=0;
    if(sushu(x)==0)
    {
	while(x>a[r])  //我将质数从小到大检索 
	{
		if(x%a[r]==0)   //如果可以整除 
		{
			printf("%d*",a[r]);
			x=x/a[r];
		}
		
		else
		{
			r++;
		}
	}
	
	 
	printf("%d",x);
    printf("\n");
    continue;
	
    }
    
    if(sushu(x)==1)
    {
    	printf("%d\n",x);
	}
	}
	return 0;	
}


















