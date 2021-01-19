#include<cmath>
#include<stdio.h>
int main(void)
{   
    int n=0;
    scanf("%d",&n);
    int i=0;
    int a[1111]={};
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	int b[1111]={};
	for(i=0;i<n-1;i++)
	{
		int k=0;
		k=abs(a[i]-a[i+1]);
		b[k]=1;
	}
	
	for(i=1;i<n;i++)
	{
		if(b[i]!=1)
		{
			printf("Not jolly");
			return 0;
		}
	}
	
	printf("Jolly");
	
	return 0;
}
