#include<bits/stdc++.h>
using namespace std;
int main(void)
{  
    int m=0; int n=0; int f=0;
    scanf("%d%d%d",&m,&n,&f);  
    int a[3];int b[3];int c[3];
    memset(a,0,sizeof(a));
    memset(b,0,sizeof(b));
    memset(c,0,sizeof(c));
    int w=0;
    
    int i=0; int j=0; int k=0;
    int i1=1;int j1=1;int k1=1;
    
    if(m>=100&&n>=100&&f>=100)
	{
		int a1,a2,a3;
		a1=m;a2=n;a3=f;
	    
	    int d[10]={0}; memset(d,0,sizeof(d));
	    
		for(i=1;i<=3;i++) 
	    {
	    	int g=0;
	    	while(a1>0)
	    	{
	        g=a1%10;
	        a1=a1/10;
	    	d[g]=1;
	        }
		}
		
		
		for(i=1;i<=3;i++) 
	    {
	    	int g=0;
	    	while(a2>0)
	    	{
	        g=a2%10;
	        a2=a2/10;
	    	d[g]=1;
	        }
		}
		
		for(i=1;i<=3;i++) 
	    {
	    	int g=0;
	    	while(a3>0)
	    	{
	        g=a3%10;
	        a3=a3/10;
	    	d[g]=1;
	        }
		}
		
		int fg=0;
		for(i=1;i<=9;i++)
		{
			if(d[i]==0)
			{
				fg=1;
			}
		}
		if(fg!=1)
		{
			printf("%d %d %d",m,n,f);
		}
		if(fg==1)
		{
			printf("No!!!");
		}
	} 
    
	if(m<=9&&n<=9&&f<=9)
	{ 
    for(i1=1;i1<=9;i1++)
    {
    	for(j1=1;j1<=9;j1++)
    	{
    		for(k1=1;k1<=9;k1++)
    		{
    			if(i1!=j1&&i1!=k1&&j1!=k1)
    			{
    				a[0]=k1;a[1]=j1;a[2]=i1;//依然把数倒着存放 
    				b[0]=a[0]*n/m;
	    			b[1]=a[1]*n/m;
					b[2]=a[2]*n/m;
	
					int v=0;
					for(v=0;v<2;v++)
					{
	  				if(b[v]>=10)
	  				{
	  				b[v+1]+=b[v]/10;
	  				b[v]=b[v]%10;
					}
					}	 
	
					c[0]=a[0]*f/m;
					c[1]=a[1]*f/m;
					c[2]=a[2]*f/m;
					
	
					for(v=0;v<2;v++)
					{
				  	if(c[v]>=10)
				  	{
			  		c[v+1]+=c[v]/10;
			  		c[v]=c[v]%10;
					}
				}	 
	
					int d[10]={0};
					memset(d,0,sizeof(d));
	             
	            int i=0;
				for(i=0;i<3;i++)
				{
				d[a[i]]=1;
				}
	
				for(i=0;i<3;i++)
				{
				d[b[i]]=1;
				}
	
				for(i=0;i<3;i++)
				{
				d[c[i]]=1;
				}
	         
	         
	            int ji=0;
				for(i=1;i<=9;i++)
				{
				if(d[i]==0||b[2]>=10||c[2]>=10) 
				{
					ji=1;
				}
				}
				if(ji==1)
				{
					continue;
				}
				
				w=1;
			    
				for(j=2;j>=0;j--)
				{
					printf("%d",a[j]);
				}
				printf(" ");
				for(j=2;j>=0;j--)
				{
					printf("%d",b[j]);
				}
				printf(" ");
				
				for(j=2;j>=0;j--)
				{
					printf("%d",c[j]);
				}
				printf("\n");
				}
			}
		}
	}
	if(w==0)
	{
		printf("No!!!"); 
	}
	} 
	
	
    
	return 0;
}
