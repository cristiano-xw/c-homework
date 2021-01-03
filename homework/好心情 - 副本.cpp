#include<stdio.h>
int main(void)
{
	int n=0;
	int m=0;
	scanf("%d %d",&n,&m);
	int a[4000]={0};
	int b[4000]={0};
	
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int k=0;
   
	
	for(i=0;i<n-m+1;i++)
	{
		int e=0;
		while(e<m)
		{    
			b[k]=a[i]+b[k];
			i=i+1;
			e=e+1;
		}
		
		i=i-m;
		k=k+1;
	}
	
	int j=0;
	//for(j=0;j<k;j++)
	//{
	//	printf("%d\n",b[j]);
	//}

	
	int min=0;
	 
	for(j=0;j<k;j++)
	{
		if(b[j]<b[min])
		{
			min=j;
		}
	}
	
	printf("%d",b[min]);
	
	return 0;
}
