#include<stdio.h>
#include<string.h>
int main(void)
{   

    int n=0;
    scanf("%d",&n);
    int i=0;
    
    for(i=0;i<n;i++)
    {
    	int k=0;
    	scanf("%d",&k);
    	int a[111];
    	memset(a,0,sizeof(a));
    	int j=0;
    	for(j=0;j<k;j++)
    	{
    		scanf("%d",&a[j]);
		}

	
	int p=0; int q=0;
	for(p=0;p<k-1;p++)
	{
		for(q=p+1;q<k;q++)
		{
			if(a[q]<a[p])
			{   
			  int t=0;
				t=a[q];
				a[q]=a[p];
				a[p]=t;
			}
		}
	}
	
	//for(p=0;p<k;p++)
	//{
	//	printf("%d ",a[p]);
	//}
	
	if(a[0]==a[k-1]||k==1)
	{
		printf("ERROR\n");
	}
	
	else
	{
	for(p=1;p<k;p++)
	{
		if(a[p]!=a[0])
		{
			printf("%d\n",a[p]);
			return 0;
		}
	}	
	} 
  }
	
	
	return 0;
}
