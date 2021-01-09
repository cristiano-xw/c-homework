#include<stdio.h>
#include<math.h>
int main(void)
{   
    int m=0;
    scanf("%d",&m);
    int a[22]={0};
    int i=0;
    for(i=0;i<m;i++) 
    {
    	scanf("%d",&a[i]);
	}
	
	int b[22]={0};
	for(i=0;i<m;i++)
	{
		b[i]=abs(a[i]);
	}
	
	int max=0;
	for(i=0;i<m;i++)
	{
		if(b[i]>b[max])
		{
			max=i;
		}
	}
	
	printf("%d",a[max]);
	
	
	
	
	return 0;
}
