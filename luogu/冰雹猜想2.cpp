#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int a[111]={0};//用来装过程数
	int i=0;
	for(i=0;;)  
	{
		if(n%2==0)
		{
			a[i]=n;
			n=n/2;
			i++;
			 
		}
		
		if(n%2==1&&n!=1)
		{
			a[i]=n;
			n=n*3+1;
			i++;
			
		}
		
		if(n==1)
		{
		a[i]=1;
		break;	
		} 
		
	 
	}
	
	int k=0; k=i+1;
	for(i=k-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	
	
	return 0; 
}
