#include<bits/stdc++.h>
using namespace std;
int a[111]; int b[111];//表示质量和价钱
int dp[55555];
int main()
{
	int n=0;//公司
	int m=0;//总质量
	
	cin>>n>>m;
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	} 
	
	for(int i=1;i<=m+5000;i++)
	{
		dp[i]=1e9;
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=a[i];j<=m+5000;j++)
		{
			dp[j]=min(dp[j],dp[j-a[i]]+b[i]);
		}
	}
	int ans=1e9;
	for(int i=m;i<=m+5000;i++)
	{
		ans=min(ans,dp[i]);
	}
	
	cout<<ans;
	return 0;
}
