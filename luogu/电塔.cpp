#include<bits/stdc++.h>
using namespace std;
long long h[1111];
long long dp[1111][44444];
int n=0;
const long long mod=998244353;
long long ans=0;
int main()
{
	cin>>n;
	long long maxx=0;
	for(int i=1;i<=n;i++)
	{
		cin>>h[i];
		maxx=max(h[i],maxx);
	}
	
	for(int i=2;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			dp[i][h[i]-h[j]+maxx]=(dp[i][h[i]-h[j]+maxx]+dp[j][h[i]-h[j]+maxx]+1)%mod;//h[i]-h[j]+maxx公差
			ans=(ans+dp[j][h[i]-h[j]+maxx]+1); //找到合适的 
		}
	}
	ans=(ans+n)%mod;
	cout<<ans;
	return 0;
}

