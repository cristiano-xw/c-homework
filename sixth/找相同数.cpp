#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	int a[33]={0};
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int v=0;
	for(i=0;i<n;i++)
	{   
	    int j=0; int u=0;
		for(j=0;j<i;j++)
		{
			   if(a[j]==a[i])
				{
					u=1;
				}
		
		}
		
		if(u==0)
		{
			v++;
		}
	}
	
	printf("%d",v) ;
	return 0;
}
