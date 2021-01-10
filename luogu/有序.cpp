#include<stdio.h>
int main(void)
{   
    int m=0;int n=0;
    scanf("%d%d",&m,&n);
    int a[1000]={0};
    int b[1000]={0};
    int i=0;         
    
    for(i=0;i<m;i++)
    {
    	scanf("%d",&a[i]);
	}
	
	for(i=m;i<m+n;i++)
	{
		scanf("%d",&b[i]);
	}
	
	int c[11111]={0};
	for(i=0;i<m;i++)
	{
		c[i]=a[i];
	}
	
	for(i=m;i<m+n;i++)
	{
		c[i]=b[i];
	}
	
    int p=0; int q=0;
    for(p=0;p<m+n-1;p++)
    {
    	for(q=p+1;q<m+n;q++)
    	{
    		int k=0;
    		if(c[p]>c[q])
    		{                    
    			k=c[q];
    			c[q]=c[p];
    			c[p]=k;
			}
		}
	}
	
	for(i=0;i<m+n;i++)
	{
		printf("%d ",c[i]);
	}
	
	return 0;
}
