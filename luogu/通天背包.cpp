#include<bits/stdc++.h>
using namespace std;
struct node
{ 
	int w[1111];//重量
	int v[1111];//价值 
	int top;//这一组有多少个数 
}a[111];

int main() 
{   
    int dp[1111]={};
	int m=0; int n=0;
	cin>>m>>n;
	int i=0; int j=0; int k=0;
	
	for(i=0;i<111;i++)
	{
		a[i].top=0;
	}
	
	int g=0;
	for(i=1;i<=n;i++)
	{
		int x=0; int y=0;  int z=0;
		cin>>x>>y>>z;
		g=max(g,z);
		a[z].top++;
		a[z].v[a[z].top]=y;
		a[z].w[a[z].top]=x;
	}
	 
	
	for(i=1;i<=g;i++)//第几组数 
	{
		for(j=m;j>=0;j--)//0 1背包 
		{
			for(k=1;k<=a[i].top;k++)//对第i组的所有情况都进行遍历 
			{
				if(j-a[i].w[k]>=0)
				{
					dp[j]=max(dp[j],dp[j-a[i].w[k]]+a[i].v[k]);
				}
			}
		}
	}
	
	cout<<dp[m];
	return 0;
}
