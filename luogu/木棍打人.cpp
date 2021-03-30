#include<bits/stdc++.h>
using namespace std;
int dp[5555];

struct node
{
	int len; int wei;
}s[5555];

bool cmp(node x,node y)
{
	if(x.len!=y.len) return x.len>y.len;
	else return x.wei>y.wei;
}

int main()
{
	int n=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i].len; cin>>s[i].wei;
	}
	
	sort(s+1,s+n+1,cmp);
	
	dp[1]=s[1].wei;
	int j=1;
	int k=1;
	for(int i=2;i<=n;i++)
	{
		j=lower_bound(dp+1,dp+k+1,s[i].wei)-dp;
		if(j<=k) dp[j]=s[i].wei;
		else
		k++,
		dp[k]=s[i].wei;
	}
	
	cout<<k;
	return 0;
}


