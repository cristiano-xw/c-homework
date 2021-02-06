#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t=0; int m=0;
	cin>>t>>m;
	int c[111]={}; int v[111]={};
	int dp[111]={};
	memset(dp,0,sizeof(dp));
	
	int i=0;
	for(i=1;i<=m;i++)
	{
		cin>>c[i]>>v[i];
	} 
	int j=0;
	
	for(i=1;i<=m;i++)//遍历搜索每一株药草
	{
		for(j=t;j>=c[i];j--) 
		{
			dp[j]=max(dp[j],dp[j-c[i]]+v[i]);//要么用要么不要 
		}
	} 
	
	cout<<dp[t];
	return 0;
	
}
