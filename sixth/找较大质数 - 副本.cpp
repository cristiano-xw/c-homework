#include<stdio.h>
#include<string.h>
int zhishu(int x)
{
  int i=0;
  for(i=2;i<=x/2;i++)
  {
  if(x%i==0&&x!=2)  
  {
  return 0;	
  }	
  }	
  
  if(x==1)
  {
  	return 0;
  }
  
  return 1;
} 

int main(void)
{
	int n=0;int v=0;
	scanf("%d",&n);
	int j=0;
	for(j=1;j<=n/2;j++)
	{
		if(zhishu(j)==1)
		{
			if(n%j==0)
			{
				v++;          
			}
			
			if(n==j*j)
			{
				printf("%d",j);
			}
			
			if(v==2)
			{
				printf("%d",j);
			}
		}
	}
}
