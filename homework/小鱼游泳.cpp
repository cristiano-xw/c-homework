#include<stdio.h>
int main(void)
{
	int x=0; int n=0;
	scanf("%d%d",&x,&n);
	int i=0;//有多少个休息 
	int j=0;
	long long sum=0;
	if(x==6)
	{
		i=2+2*((n-2)/7);
		sum=250*(n-i);
		printf("%lld",sum);
		
	}
	
	if(x==7)
	{
		i=1+2*((n-1)/7);  
		sum=250*(n-i);
		printf("%lld",sum);
		
	}
	
	if(x!=6&&x!=7)
	{
		i=2*((n/7));  
		j=n%7;
		//printf("%d",j);
		if(x+j>=8)
		{
		sum=250*(n-i-2);
		printf("%lld",sum);
		return 0;
	    }
	    
	    if(x+j==7)      
	    {
	    	sum=250*(n-i-1);
	    	printf("%lld",sum);
	    	return 0;
		}
		
		else
		{
			sum=250*(n-i);
			printf("%lld",sum);
			return 0;
		}
	}
	
	return 0;
 
	
}
