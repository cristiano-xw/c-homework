#include<bits/stdc++.h>
using namespace std;
int n=0; int c=0;
int dp[55][55][2];
int a[55];int b[55]; int sum[55];

int main()
{
	//dp[i][j]��ʾ�ص���i��j�ĵ�����Ҫ��ʱ�� 
	cin>>n; cin>>c;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		sum[i]=sum[i-1]+b[i];
	}
	memset(dp,127,sizeof(dp));
	dp[c][c][1]=dp[c][c][0]=0;//���Ϊ0 
	
	for(int k=1;k<n;k++)//��� 
	{
		for(int i=1;i+k<=n;i++)		
		{
			int j=i+k;
			dp[i][j][0]=min(dp[i+1][j][0]+(a[i+1]-a[i])*(sum[n]-sum[j]+sum[i]),dp[i+1][j][1]+(a[j]-a[i])*(sum[n]-sum[j]+sum[i]));
			//��ʱj��ƹ��ˣ�����i��ĵ�ȴû�й� 
			dp[i][j][1]=min(dp[i][j-1][0]+(a[j]-a[i])*(sum[n]+sum[i-1]-sum[j-1]),dp[i][j-1][1]+(a[j]-a[j-1])*(sum[n]+sum[i-1]-sum[j-1]));
			//��ʱ��i����Ѿ����ˣ�����j��ĵƹ�ȴ����û�أ������ߵ�j		
		}
	}
	
	int ans=min(dp[1][n][0],dp[1][n][1]);
	cout<<ans;
	return 0; 
	
}
