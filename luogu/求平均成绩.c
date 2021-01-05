#include<stdio.h>
int main(void)
{   
    int n=0;
    scanf("%d",&n);
    double ave=0;
    double a[1111]={0};
    int i=0;
    for(i=1;i<=n;i++)
    {
    	scanf("%lf",&a[i]);
	}
	
	int min=1; int max=1;
	for(i=1;i<=n;i++)
	{
		if(a[i]>a[max])
		{
			max=i;
		}
		
		if(a[i]<a[min])
		{
			min=i;
		}
	} 
	
	double sum=0;
	for(i=1;i<=n;i++)
	{
		sum+=a[i];
	}
	
	sum=sum-a[max]-a[min];
	
	ave=sum/(n-2);
	printf("%.2lf",ave);	
	
	
	
	
	
	
	return 0;
}
