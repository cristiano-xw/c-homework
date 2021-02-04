#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0;
	cin>>n;
	long long a[333]; 
	memset(a,0,sizeof(a));
	int i=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	sort(a+1,a+n+1);//排序
	
	long long  ans=0;
	ans=a[n]*a[n]; 
	int j=n;i=1;
	int t=0;//0,1切换 0就是往回 1就是往上 
	while(j>=i)
	{   
	    if(t==0)
		{ 
		ans+=(a[j]-a[i])*(a[j]-a[i]);
		j--;
		t=1;
		continue;
	    }
	    if(t==1)
	    {
	    ans+=(a[j]-a[i])*(a[j]-a[i]);
	    i++;
	    t=0;
	    continue;
		}
	}
	
	cout<<ans;
	return 0;
}
