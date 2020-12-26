#include<stdio.h>
#include<string.h>
int main(void)
{
	int m,n;
	scanf("%d%d",&m,&n);
	int i=0;
	int  a[1000];
    int b[1000];
    
    for(i=0;i<m;i++)
    {
    	scanf("%d",&a[i]);
	}
	 
	/*for(i=0;i<m;i++)
    {
    	printf("%d",a[i]);
	}*/ 
	
	for(i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	int c[1000]={0};  
	int z=0;
	for(i=0;i<m;i++)
	{
		c[i]=a[z];
		z++;
	}
	
	int h=0;
	for(i=m;i<m+n;i++)
	{
		c[i]=b[h];   
		h++;                  
	}
	
	//for(i=0;i<m+n;i++)
	//{
	//	printf("%d",c[i]);
	//}
	
	int p=0;int q=0;
	for(p=0;p<m+n-1;p++)
	{
		for(q=p+1;q<m+n;q++)
		{   int t=0;
			if(c[q]<c[p])
			{
				t=c[p];
				c[p]=c[q];
				c[q]=t;
			}
		}
	}
	
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
  return 0;
}
