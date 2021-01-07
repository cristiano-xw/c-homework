#include<stdio.h>
int zhishu(int n)
{
	int i=0;
	for(i=3;i<=n/3;i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}
	
	return 1;
}

int huiwen(int n)
{
	int j=0;
	int k=n;
	int m=0;
	while(k>0)
	{
		m=k%10;
		k=k/10;
		j=j*10+m;
	}
	
	if(j==n)
	{
		return 1;
	}
	return 0;
		
}


int main(void)
{  
    int a=0;
    int b=0;
    scanf("%d%d",&a,&b);
    int i=0;
    
    for(i=a;i<=b;i++)
    {
    	if(i%2!=0)
    	{
    		if(zhishu(i)==1)
    		{
    			if(huiwen(i)==1)
    			{
    				printf("%d\n",i);
				}
			}
		}
	}
	
	
	return 0;
}
