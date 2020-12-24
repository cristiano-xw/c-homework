#include<stdio.h>
#include<string.h>
int sushu(int x)
{
	int i=0;
	for(i=2;i<=x/2;i++)
	{
	    if(x%i==0) 
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
	 int a[100000]={0};//´æ±ê¼Ç;
	 int L=0;
	 scanf("%d",&L);
	 int sum =0;
	 int i=0;
	 int v=0;
	 int x=0;
	 
	 for(x=0;x<100000;x++)
	 {
	 	if(sushu(x)==1)
	 	{
	 		a[x]=1;
		}
	 }
	 
	i=0;
	 
	 	while(sum<=L) 
	 	{
	 		if(a[i]==1)
	 		{
	 			sum+=i;
	 			v++;
			}
			i++;
		 }
	
	int j=0;
	
	for(j=0;j<i-1;j++)
	{
	if (a[j]==1)
	{
		printf("%d\n",j);
		printf("\n");
	}	
	}	
	
	printf("%d",v-1); 
	 
	 
	 
	
}










