#include<stdio.h>
#include<string.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	
	char a[111][11111];
	int i=0;
	int v; v=n;
	for(i=0;i<n;i++)
	{
		scanf("%s",a[i]);  
	}
	
	int d[111]={0}; //用来装数 
	char b[5]="n/a";
	for(i=0;i<n;i++)
	{
		if(strcmp(a[i],b)==0)
		{
			v--;
		}
		
		
		
	   if(strcmp(a[i],b)!=0)
	   {
	   	int l=0;int e=0;
	   	 
	   	l=strlen(a[i]);
	   	//printf("len is %d",l);
	   	for(e=0;e<l;e++)
	   	{   
		    a[i][e]=a[i][e]-'0';
	   		d[i]=d[i]*10+a[i][e];    
		}
		
	   }
	}
	
	/*	for(i=0;i<n;i++)
	{
		if(d[i]!=0)
		{
			printf("%d\n",d[i]);
		}
	}*/
	
	double sum=0;
	for(i=0;i<n;i++)
	{
		if(d[i]!=0)
		{
			sum=sum+d[i];
		}
	}
	
	if(v==0)
	{
		printf("n/a");
	}
	
	if(v!=0)
	{
	float x=0;
	x=(float)sum/v;
	 
	printf("%.2lf",x);
    }
    
	return 0;
	
}
