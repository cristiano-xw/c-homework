#include<bits/stdc++.h>
using namespace std;
int dp[111111];
int c[111];
int main()
{
	int m=0;
	cin>>m;
	memset(dp,63,sizeof(dp));
	dp[0]=0;
	int i=0; int k=0;
	for(i=1;i*i*i*i<=m;i++)
	{
		c[i]=i*i*i*i;
	}
	k=i;
	int j=0;
	//cout<<" "<<k<<" ";
	
	for(i=1;i<=k;i++)
	{
		for(j=c[i];j<=m;j++)
		{
			dp[j]=min(dp[j],dp[j-c[i]]+1);
		}
	}
	
	cout<<dp[m];
	return 0;
	
}
