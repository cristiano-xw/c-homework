#include<bits/stdc++.h>
using namespace std;
int dp[2222][2222][2];
int n=0; int a[2222];
//dp��ʾ��������������� 
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		dp[i][i][0]=1;
	}
	
	for(int k=1;k<n;k++)
	{
		for(int i=1,j=i+k;j<=n;i++,j++)
		{
			if(a[i]<a[i+1]) dp[i][j][0]+=dp[i+1][j][0];//����߽��� 
			if(a[i]<a[j]) dp[i][j][0]+=dp[i+1][j][1];//
			if(a[j]>a[i]) dp[i][j][1]+=dp[i][j-1][0];//���ұ߽�����
			if(a[j]>a[j-1]) dp[i][j][1]+=dp[i][j-1][1]; 
			
			dp[i][j][0]=dp[i][j][0]%19650827;
			dp[i][j][1]=dp[i][j][1]%19650827;
		}
	}
	
	int ans=0;
	ans=(dp[1][n][0]+dp[1][n][1])%19650827;
	cout<<ans;
	return 0;
	
	
}

