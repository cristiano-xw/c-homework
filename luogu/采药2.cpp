#include<bits/stdc++.h>
#define int long long
const int k=1e7+5;
const int f=1e4+5;
using namespace std;
int c[f]; int v[f];
int dp[k];
signed main()
{
	int t=0; int m=0;
	cin>>t>>m;
	
	int i=0;
	for(i=1;i<=m;i++)
	{
		cin>>c[i]>>v[i];
	} 
	int j=0;
	
	for(i=1;i<=m;i++)//遍历搜索每一株药草
	{
		for(j=c[i];j<=t;j++)  
		{
			dp[j]=max(dp[j],dp[j-c[i]]+v[i]);//要么用要么不要 
		}
	} 
	
	cout<<dp[t];
	return 0;
	
}
