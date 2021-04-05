#include<bits/stdc++.h>
using namespace std;
const int N=505;
const int inf=233333333;

int n=0;
int a[N],dp[N][N];

int main()
{
	cin>>n;
	for (int i=1;i<=n;i++) 
	{
		cin>>a[i];
	}
	
	memset(dp,127,sizeof(dp));
	
	for (int i=1;i<=n;i++) 
	dp[i][i]=1;   
	
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i+1]) 
		{
			dp[i][i+1]=1; //表示相通，可以一起去掉 
		}
		else 
		{
			dp[i][i+1]=2;  //表示必须分开去掉 
		}
	}


	for (int k=3;k<=n;k++)   
	for (int i=1;i+k<=n;i++)
	{
		int j=i+k-1;
		if (a[i]==a[j]) dp[i][j]=dp[i+1][j-1];
		
		for (int m=i;m<j;m++) 
		{
		dp[i][j]=min(dp[i][j],dp[i][m]+dp[m+1][j]);  
		}
	}
	
	cout<<dp[1][n];

	return 0;
}
