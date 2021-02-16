#include<bits/stdc++.h>
using namespace std;
int dp[33333];
struct bag
{
	int tot;//表示这个组一共的情况
	int w[5];//几种情况分别对应的重量
	int v[5];//几种情况分别对应的价值 
}a[77];

int main()
{  
    
    memset(dp,0,sizeof(dp));
	int n=0; int m=0;
	scanf("%d%d",&n,&m);//n表示钱 m表示一共有m个物品
	
	int i=0; int j=0;
	for(i=0;i<=m;i++)
	{
		a[i].tot=0;//初始化
		memset(a[i].v,0,sizeof(a[i].v));
		memset(a[i].w,0,sizeof(a[i].w)); 
	}
	
	int x=0; int y=0; int z=0; //价格，重要度，组数 
	for(i=1;i<=m;i++)//读入物品 
	{
		cin>>x>>y>>z;
		if(z==0)
		{
			a[i].tot=1;
			a[i].w[1]=x;
			a[i].v[1]=x*y;
		}
		
		else
		{
		if(a[z].tot==1)//此时只有主件
		{
			a[z].tot=2;
			a[z].w[2]=a[z].w[1]+x;
			a[z].v[2]=a[z].v[1]+x*y;
		} 
		else//有了一个主件和附件
		{   
		    a[z].tot=4;
			a[z].w[3]=a[z].w[1]+x;
			a[z].v[3]=a[z].v[1]+x*y;//主件和另外一个附件
			a[z].w[4]=a[z].w[2]+x;
			a[z].v[4]=a[z].v[2]+x*y;//主件和两个附件 
		} 
	    }
	}
	
	int k=0;
	for(i=1;i<=m;i++)
	{
		if(a[i].tot==0)
		{
			continue;
		}
		
		for(j=n;j>=0;j--)
		{
			for(k=1;k<=a[i].tot;k++)//一个组的情况选取一种 
			{
				 if(j>=a[i].w[k]) 
				 {
				 	dp[j]=max(dp[j],dp[j-a[i].w[k]]+a[i].v[k]);
				 }
			}
		}
	}
	cout<<dp[n];
	return 0;
}
