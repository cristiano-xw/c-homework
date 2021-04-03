#include<bits/stdc++.h>
using namespace std;
char s[55];
int dp[55][55];
int n=0;
//dp[i][j]表示从i到j需要的次数 
int main()
{
	scanf("%s",s+1);//我从第一位开始读入 
	int n=0;
	n=strlen(s+1);//找出长度 
	memset(dp,127,sizeof(dp));
	
	for(int i=1;i<=n;i++) 
	{
		dp[i][i]=1;	//初始化 
	}
	
	for(int k=1;k<n;k++)//区间长度 
	{
		for(int i=1,j=i+k;j<=n;i++,j++)//遍历  
		{
			if(s[i]==s[j])//区间两端点相等 
			{
					dp[i][j]=min(dp[i][j-1],dp[i+1][j]);
			}
			else    
			{
				for(int t=i;t<j;t++)
				{
					dp[i][j]=min(dp[i][j],dp[i][t]+dp[t+1][j]);	
				}
			}
		}
	}
	
	cout<<dp[1][n];
	return 0;
}
