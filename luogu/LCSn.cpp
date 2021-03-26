#include<bits/stdc++.h>
using namespace std;
int s[111111]; int t[111111];
int dp[11111][11111];
int main()
{
	int n=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	for(int i=1;i<=n;i++)
	{
		cin>>t[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(s[i]==t[j]) dp[i+1][j+1]=max(dp[i+1][j+1],dp[i][j]+1);//有相同的字段 
			else dp[i+1][j+1]=max(dp[i][j+1],dp[i+1][j]);//继承 
		}
	}
	cout<<dp[n+1][n+1];
	return 0;
}
