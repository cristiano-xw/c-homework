#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i=0; int j=0; int k=0;
	int a[3]; int b[3]; int c[3];
	memset(a,0,sizeof(a)); 
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	int m=0;
	
	for(i=1;i<=9;i++)
	{
		for(j=1;j<=9;j++)
		{
			for(k=1;k<=9;k++)
			{   
			    if(i!=j&&i!=k&&j!=k)
			    {
				a[0]=k; a[1]=j; a[2]=i;
			    
			    
			    b[0]=a[0]*2; b[1]=a[1]*2; b[2]=a[2]*2;
			    
			    	if(b[0]>=10)
			    	{
			    	   b[1]+=b[0]/10;
			    	   b[0]=b[0]%10;  
					}
					if(b[1]>=10)
					{
						b[2]+=b[1]/10;
						b[1]=b[1]%10;
					}
					if(b[2]>=10)
					{
						continue;
					}
					
				c[0]=a[0]*3; c[1]=a[1]*3; c[2]=a[2]*3;
				
				if(c[0]>=10)
				{
					c[1]+=c[0]/10;
					c[0]=c[0]%10;
				}
				if(c[1]>=10)
				{
					c[2]+=c[1]/10;
					c[1]=c[1]%10;
				}
				if(c[2]>=10)
				{
					continue;
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
				int f=0;
				for(i=1;i<=9;i++)
				{
					if(d[i]==0)
					{   
						f=1;
						break;
					}
				} 
					
				if(f==1)
				{
					continue;
				}
				
				for(i=2;i>=0;i--)
				{
					cout<<a[i];
				}
				cout<<" ";
				for(i=2;i>=0;i--)
				{
					cout<<b[i];
				}
				cout<<" ";
				for(i=2;i>=0;i--)
				{
					cout<<c[i];
				}
				cout<<endl;
			   }
 			}
		}
	}
	
	return 0;
}
