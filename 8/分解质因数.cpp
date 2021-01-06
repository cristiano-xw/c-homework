#include<stdio.h>
int zhishu(int n)
{
	int i=0;
	for(i=2;i<=n/2;i++)
	{
		if(n!=2&&n%i==0)
		{
			return 0;
		}
	}
	
	if(n==0||n==1)
	{
		return 0;
	}
	
	else
	return 1;
}



int main(void)
{   
    
    int k=0;
    int i=0;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
    	int x=0;
    	scanf("%d",&x);
    	int j=2;
    	int v=0;
    	while(x>1&&x>=j)  
    	{
    		if(zhishu(j)==1)
    		{
    			while(x%j==0)
    			{   
    			     
    				 
    				
    				if(x==j)  
    			    {
    			    printf("%d",j);
    			    printf("\n");
    			    break;
					}
					
    				x=x/j;
    				if(x!=1)
    				{
    				printf("%d*",j);
    			    }
    			    
    			    //printf("%d ",x); 
    			    if(x==1)  
    			    {
    			    printf("%d",j);
    			    printf("\n");
    			    break;
					}
					      
				}
				
			} 
			j++;
			 
		}
		
	 
		
	}
	
	
	return 0;
}
