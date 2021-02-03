#include<bits/stdc++.h>
using namespace std;
int main()
{  
    long long sum;
    long long a[111111];
    memset(a,0,sizeof(a));
	int n=0; int x=0;
	scanf("%d%d",&n,&x);
	
	int i=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	long long ans=0;//³ÔµôµÄ¿ÅÊý
	for(i=1;i<n;i++)
	{
		long long d=0;
		d=a[i]+a[i+1]-x;
		if(d>0)
		{
		    if(a[i+1]>=d)
		    {
		    	a[i+1]=a[i+1]-d; 
		    	ans+=d;
		    	continue;
			}
			
			if(a[i+1]<d)
			{
				a[i+1]=0;
				a[i]=a[i]-(d-a[i+1]);
				ans+=d;
			}
		}
	}
	
	cout<<ans;
	
	 return 0;
}
