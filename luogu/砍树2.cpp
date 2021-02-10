#include<bits/stdc++.h>
using namespace std;

long long m=0; long long n=0;
long long a[1000005]={};
long long l=0; long long maxx=0;
long long ans=0; 
int main()
{
	scanf("%lld%lld",&n,&m);
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%lld",&a[i]);
		maxx=max(maxx,a[i]);
	}
	
	while(l<=maxx)
	{ 
	    ans=0;//清空中间变量 
		int mid=(l+maxx)/2;
		for(i=1;i<=n;i++)
		{
			if(a[i]>mid)
			{
				ans+=(a[i]-mid);
			}
		}
		
		if(ans<m)
		{
			maxx=mid-1;
		}
		else
		{
			l=mid+1;
		}
	}
	
	cout<<maxx;
	return 0;
}
