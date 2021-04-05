#include<bits/stdc++.h>
using namespace std;
const int N=1010,INF=0x3f3f3f3f;
int n,a[N],dp[N][N];
int main()
{
	cin>>n;
	memset(dp,127,sizeof(dp));
	
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		dp[i][i]=1;
		dp[i][i-1]=1;
	}
		
	for(int l=1;l<=n;l++) 
	{
		for(int i=1;i<=n-l;i++)
		{					
			int j=i+l;
			if(a[i]==a[j])
			{
			dp[i][j]=dp[i+1][j-1];
			}
			
			for(int k=i;k<j;k++)dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]);
		}
	}
	
	cout<<dp[1][n];
	return 0;
}
