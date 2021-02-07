#include<bits/stdc++.h>
using namespace std;
int main()
{
	int v=0; int n=0;
	scanf("%d%d",&v,&n);
	
	int a[33];
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);//每一样物品的重量 
	}
	
	int dp[22222];
	memset(dp,0,sizeof(dp));
	int j=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=v;j>=a[i];j--)
		{
			dp[j]=max(dp[j],dp[j-a[i]]+a[i]);                
		}
	}
	
	cout<<v-dp[v];
	return 0;
}
