#include<bits/stdc++.h>
using namespace std;
long long  sum[1000001];
int main()
{
	long long n=0,k=0;
	cin>>n>>k;
	if(k>=n-1)
	{
		cout<<"0";
		return 0;
	}
	
	for(int i=1;i<=n-1;i++)
	{
		long long x;
		cin>>x;
		sum[i]=sum[i-1]+x;
	}
	
	long long cnt=sum[k];//从第一个点出发 
	{
		for(int i=2;i<=n-k;i++)
		{
			cnt=max(cnt,sum[i-1+k]-sum[i-1]);
		}
	} 
 	 
	cout<<sum[n-1]-cnt;
	return 0;
}   
