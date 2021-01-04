#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	char a[222]="0";
	scanf("%s",a);
	int i=0;
	int sum=0;
	int u=0;//恂芝催込込込込込込込込 
	for(i=0;i<n;i++)
	{
		if(a[i]=='V'&&a[i+1]=='K')
		{
			sum++;
		}
		
		if(i+2<=n-1)
		{ 
		if(a[i]=='V'&&a[i+1]=='V'&&a[i+2]!='K'&&u==0)
		{
			sum++;
			u=1;
		}  
	    }
	    
	    if(i==n-2)
	    {
	    	if(a[i]=='V'&&a[i+1]=='V'&&u==0) 
		{
			sum++;
			u=1;
		}  
		}
		
		if(i-2>=0)
		{
		if(a[i]=='K'&&a[i-1]=='K'&&a[i-2]!='V'&&u==0)
		{
			sum++;
			u=1;
		}
	    }
	    
	    if(i==1)
	    {
	    if(a[i]=='K'&&a[i-1]=='K'&&u==0)
	    {
	    	sum++;
	    	u=1;
		}
		}
			
	}
	//printf("%d\n",u);
	printf("%d",sum);
}
