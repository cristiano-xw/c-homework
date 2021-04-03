#include<bits/stdc++.h>
using namespace std;
int n=0; int c=0;
int dp[55][55][2];
int a[55];int b[55]; int sum[55];

int main()
{
	//dp[i][j]表示关掉从i到j的等所需要的时间 
	cin>>n; cin>>c;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum[i]=sum[i-1]+b[i];
	}
	memset(dp,127,sizeof(dp));
	dp[c][c][1]=dp[c][c][0]=0;//起点为0 
	
	for(int k=1;k<n;k++)//间隔 
	{
		for(int i=1;i+k<=n;i++)		
		{
			int j=i+k;
			dp[i][j][0]=min(dp[i+1][j][0]+(a[i+1]-a[i])*(sum[n]-sum[j]+sum[i]),dp[i+1][j][1]+(a[j]-a[i])*(sum[n]-sum[j]+sum[i]));
			//此时j点灯关了，但是i点的灯却没有关 
			dp[i][j][1]=min(dp[i][j-1][0]+(a[j]-a[i])*(sum[n]+sum[i-1]-sum[j-1]),dp[i][j-1][1]+(a[j]-a[j-1])*(sum[n]+sum[i-1]-sum[j-1]));
			//此时的i点灯已经关了，但是j点的灯光却还是没关，向右走到j		
		}
	}
	
	int ans=min(dp[1][n][0],dp[1][n][1]);
	cout<<ans;
	return 0; 
	
}
