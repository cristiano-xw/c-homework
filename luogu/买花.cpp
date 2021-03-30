#include<bits/stdc++.h>
using namespace std;
int a[111]; 
int dp[111][111];
int main()
{
	int n=0; int m=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	dp[0][0]=1;
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=m;j++)
		{
			for(int k=0;k<=min(a[i],j);k++)
			{
				dp[i][j]=(dp[i-1][j-k]+dp[i][j])%1000007;
			}
		}
	}
	cout<<dp[n][m];
	return 0; 
}
