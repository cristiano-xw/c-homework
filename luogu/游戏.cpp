#include<bits/stdc++.h>
using namespace std;
int dp[255][255];
int n=0;
int ans=0;

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>dp[i][i];//初始化 
	}
	
	for(int k=1;k<n;k++)//依然是间隔
	{
		for(int i=1,j=i+k;i<n&&j<=n;i++,j++)
		{
			for(int pos=i;pos<j;pos++)
			{
				if(dp[i][pos]==dp[pos+1][j]&&dp[i][pos]>0)
				{
					dp[i][j]=max(dp[i][j],dp[i][pos]+1);
					ans=max(ans,dp[i][j]);
				}
			}
		}
	} 
	cout<<ans;
	return 0;
}
