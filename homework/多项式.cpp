#include<stdio.h>
int main(void)
{
	int n=0;//´ÎÊý
	scanf("%d",&n);
	int a[111]={0};
	int i=0;
	for(i=1;i<=n+1;i++)
	{
	scanf("%d",&a[i]);	
	} 
	
	int k=0;
	k=n;
	
	for(i=1;i<=n+1;i++)
	{
	if(a[i]!=0)
	{
		if(i!=1)
		{
			if(a[i]>0)
			{
				printf("+");
			}
			
			 
		}
		
		if(i!=n+1) 
		{
		if(a[i]!=1&&a[i]!=-1)
		{ 
		printf("%d",a[i]);
	    }
	    if(a[i]==-1)
	    {
	    	printf("-");
		}
		printf("x");
		if(k!=1)
		{
		printf("^");
		printf("%d",k);
	    }
	    }
	    
	    if(i==n+1)
	    {
	    printf("%d",a[i]);
	    break;
	    }	
	}
	k--;
	}
	
	return 0;
}
