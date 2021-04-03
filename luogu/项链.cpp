#include<bits/stdc++.h>
using namespace std;
int a[300]; int dp[300][300];
int n=0;
int main()
{
	std::ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i+n]=a[i];
	}
	
	for(int k=1;k<=n;k++)
	{
		for(int i=1,j=i+k;i<=2*n&&j<=2*n;i++,j++)
		{
			for(int p=i+1;p<=j-1;p++) //界于之间  
			{
				dp[i][j]=max(dp[i][j],dp[i][p]+dp[p][j]+a[i]*a[j]*a[p]);
			}
		}
	}
	
	int ans=0;
	for(int i=1;i<=n;i++)
	{
		ans=max(ans,dp[i][i+n]);
	}
	
	cout<<ans;
	return 0;
}
