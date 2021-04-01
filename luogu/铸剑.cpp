#include<bits/stdc++.h>
using namespace std;
long long n,m,s,a[5505],dp[5505][5505],q[5505],pos[5505];
int main()
{
	scanf("%lld %lld %lld",&n,&m,&s);
	for(long long i=1;i<=n;++i)	scanf("%lld",&a[i]);
	for(long long i=0;i<=n;++i)	for(long long j=0;j<=m;++j)	dp[i][j]=-1008600110086001;
	dp[0][0]=0;
	for(long long i=1;i<=n;++i)
	{
		int l=1,r=1;
		q[l]=dp[i-1][m];
		pos[l]=m;
		for(long long j=m;j;--j)
		{
			while(pos[l]>j+s-1 && l<=r)	++l;
			while(q[r]<dp[i-1][j-1] && l<=r)	--r;
			pos[++r]=j-1;
			q[r]=dp[i-1][j-1];
			dp[i][j]=q[l]+j*a[i];
		}
	}
	long long ans=-1008600110086001;
	for(long long i=0;i<=m;++i)	ans=max(ans,dp[n][i]);
	printf("%lld",ans);
	return 0;
}
