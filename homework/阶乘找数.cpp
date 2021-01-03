#include<stdio.h>
#include<math.h> 
#include<string.h>
int main(void)
{    
    int t=0;
    scanf("%d",&t);
    int i=0;
    int count[1111]={0};
    for(i=1;i<=t;i++)
    {   
         
        int p=1;
    	int a[50000]={0};
    	memset(a,0,sizeof(a));
        a[1]=1;
    	int k=0;
    	scanf("%d",&k);//k的阶乘
    	int shu=0;
    	scanf("%d",&shu);
    	int j=0;int e=0;
    	//printf("%d",a[1]);
    	
    	for(e=2;e<=k;e++)
    	{
    	for(j=1;j<=p;j++)
    	{  
    		a[j]=a[j]*e;  //逐位相乘  
    		 
		}
		
		for(j=1;j<=p;j++)
		{
			if(a[j]>=10)
    		{
    			a[j+1]+=a[j]/10; //乘完以后再判断进位 
    			a[j]=a[j]%10;
			}
		}
		
		
		if(a[p+1]!=0)
		{
			p++;
		}
	    
	    
	    while(a[p]>=10)
	    {
	    	a[p+1]=a[p]/10;
	    	a[p]=a[p]%10;
	    	p++; //看一共有多少位 
	    	//printf("ok\n");
		}
		//printf("%d\n",p);
		
	    }
	    
	    
	    //for(j=1;j<=p;j++)
	   // {
	    //	printf("%d",a[j]);
		//}
	//	printf("\n");
		
		for(j=1;j<=p;j++)
		{
			if(a[j]==shu)
			{
				count[i]=count[i]+1;
			}
		}
		
		
	 
		
		 
	}
	for(i=1;i<=t;i++)
	{
		printf("%d\n",count[i]);
	}
	
	
	
	
	return 0;
}
