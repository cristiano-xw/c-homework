#include<bits/stdc++.h>
using namespace std;

int dp[50][50];
int root[50][50];
int v[50];
int n=0;

int setree(int l,int r)
{
	if(dp[l][r]) return dp[l][r];//记忆化 
	if(l==r)
	{
		return v[l];
	}
	if(l>r) return 1;//说明没有节点了 
	
	for(int i=l;i<=r;i++)
	{
		int p=setree(l,i-1)*setree(i+1,r)+dp[i][i];       //左右加根 
		if(p>dp[l][r]) dp[l][r]=p, root[l][r]=i; 
	} 
	return dp[l][r];
}

void print(int l,int r)
{
	 
	if(r<l) 
	{
		return;
	}
	if(r==l)
	{
	cout<<l<<" " ;
	return ;
	}//遇到节点输出 总是最先输出根节点 
	
	cout<<root[l][r]<<" ";
	print(l,root[l][r]-1);
	print(root[l][r]+1,r); 
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
		dp[i][i]=v[i];
	}	
	
	setree(1,n);
	cout<<dp[1][n]<<endl;//从1到n的最大值
	print(1,n);
	return 0; 
}
