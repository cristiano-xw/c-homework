#include<stdio.h>
int main(void)
{   
    int n=0;
    scanf("%d",&n);
    int i=0;
    for(i=0;i<n;i++)
    {
    	int a[3]={0};
    	int j=0;
    	for(j=0;j<3;j++)
    	{
    		scanf("%d",&a[j]);
		}
		
		int max=0;
		int k=0;
		for(j=0;j<2;j++)
		{
			 for(k=j+1;k<3;k++)
			 {
			 	if(a[k]>a[j])
			 	{
			 		int t=0;
					t=a[k];
					a[k]=a[j];
					a[j]=t; 
				}
			 }
		}
		
		if(a[0]>=a[1]+a[2])
		{
			printf("No\n");
		}
		
		if(a[0]<a[1]+a[2])
		{
			if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2])
			{
				printf("Yes\n");
			}
			
			else 
			printf("No\n");
		}
		
		
    	
	}
	return 0;
}
