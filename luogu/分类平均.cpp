#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int k=0;
	int v=0;
	int u=0;
	scanf("%d",&k);
	int a[10003]={0};
	int b[10000]={0};
	int i=0;
	for(i=1;i<=n;i++)
	{
		a[i]=i;
	}
	for(i=1;i<=n;i++)
	{
		if(a[i]%k==0)
		{
		   v++;
		   b[i]=1;
		}
		else
		{
			b[i]=0;
			u++;
		}
	}
	
	int sum1=0;
	int sum2=0;
	for(i=1;i<=n;i++)
	{    
		if(b[i]==1)
		{
			sum1 +=a[i];
		}
		if(b[i]==0)
		{
			sum2 +=a[i];
		}
	}
	float t=0;float s=0;
	 
	//printf("%.1f ",(float)sum1/v);
	//printf("%.1f ",(float)sum2/u);
	t=(float)sum1/v;
	s=(float)sum2/u;
	printf("%.1f ",t);
	printf("%.1f ",s);
	
	
}
