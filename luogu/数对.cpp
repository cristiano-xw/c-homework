#include<bits/stdc++.h>
using namespace std;
long long a[222222]={}; long long n=0;
int main()
{   
    long long  ans=0;
    long long  c=0;
	scanf("%lld%lld",&n,&c);
    int i=0;
    
    for(i=1;i<=n;i++)
    {
    	scanf("%lld",&a[i]);
	}
	
	sort(a+1,a+n+1);
	 
	for(i=1;i<=n;i++)//从前往后遍历  
	{
		int k1=upper_bound(a+1,a+n+1,a[i]+c)-a;
		int k2=lower_bound(a+1,a+n+1,a[i]+c)-a;
		ans+=k1-k2;
	}                                                          
	
	cout<<ans;
	return 0;
}
