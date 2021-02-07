#include<bits/stdc++.h>
using namespace std;
int c[11111]; int v[11111];
int dp[11111];
                                  
int main()
{
	memset(c,0,sizeof(c));
	memset(v,0,sizeof(v));
	memset(dp,0,sizeof(dp));
	int k=0; int n=0; int g=0; int i=0;int j=0;
	scanf("%d%d%d",&k,&n,&g);
	                            
	for(i=1;i<=n;i++)
	{
		scanf("%d%d",&v[i],&c[i]);   //石头重量就是价值，体力就是背包剩余重量 
	}
	
	for(i=1;i<=n;i++) //n块石头     
	{
		for(j=g;j>=c[i];j--)
		{
			dp[j]=max(dp[j],dp[j-c[i]]+v[i]);    
		}
	}  
	
	for(i=0;i<=g;i++)
	{
		if(dp[i]>=k) 
		{
			printf("%d",g-i); 
			return 0;
		}
	}
	
	cout<<"Impossible";                 
	return 0;
}
