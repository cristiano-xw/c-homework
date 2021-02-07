#include<bits/stdc++.h>
using namespace std;
long long dp[999]={0,0,1};
int main()
{
	int n=0; int m=0;
	scanf("%d",&n);
	m=(n+1)*n/2;
	
	if(m%2==1)
	{
		cout<<"0";
		return 0;
	}
	
	int i=0;
	int j=0;
	if(m%2==0)
	{
		for(i=1;i<=n;i++)
		{
			for(j=m;j>=i;j--)
			{
				dp[j]+=dp[j-i];//表示方案数 
			}
		}
	}
	cout<<dp[m/2]/2;
	return 0;
}
