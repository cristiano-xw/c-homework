#include<stdio.h>
int zhishu(int n)
{
	int i=0;
	for(i=2;i<=n/2;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
		
		if(n==0||n==1)
		{
			return 0;
		}
	}
	
	return 1;
}
int main(void)
{   
    int m=0;
    scanf("%d",&m);
    int i=0;
    int v=0;
    
    for(i=3;i<=m/2;i++)
    {
    	if(zhishu(i)&&zhishu(m-i))
    	{
    		printf("%d %d\n",i,m-i);
    		v=1;
		}              
	}
	
	if(v==0)
	{
		printf("ERROR\n");
	}
    
    
    
    
    
    
	return 0;
}
