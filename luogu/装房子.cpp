//此题依然是01背包问题 但是衡量的条件是价值和重要度积
#include<bits/stdc++.h>
using namespace std;
int c[111]; int v[111];
int s[111];
int dp[33333];
int main()
{    
	int i=0;
	int n=0; int m=0;
	scanf("%d%d",&n,&m);
	                     
	for(i=1;i<=m;i++)
	{
		scanf("%d%d",&c[i],&v[i]);
		s[i]=c[i]*v[i];
		
	}
	int j=0;
	for(i=1;i<=m;i++)
	{
		for(j=n;j>=c[i];j--)
		{
			dp[j]=max(dp[j],dp[j-c[i]]+s[i]);
		}
	}
	
	cout<<dp[n];
	return 0;
} 
