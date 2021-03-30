#include<bits/stdc++.h>
using namespace std;
int dp[2][111];
int a[111];
int main()
{
	int n=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			if(a[i]>a[j])
			dp[0][i]=max(dp[0][i],dp[0][j]+1);
		}
	}
	
	for(int i=n;i>=1;i--)
	{
		for(int j=n;j>=i+1;j--)
		{
			if(a[i]>a[j])
			dp[1][i]=max(dp[1][i],dp[1][j]+1);
		}
	}
	
	int ans=0;
	for(int i=1;i<=n;i++)
	{				
		ans=max(dp[0][i]+dp[1][i],ans);
	}
	
	cout<<n-ans-1; 
	return 0;
}
