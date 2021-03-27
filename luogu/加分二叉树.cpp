#include<bits/stdc++.h>
using namespace std;

int dp[50][50];
int root[50][50];
int v[50];
int n=0;

int setree(int l,int r)
{
	if(dp[l][r]) return dp[l][r];//���仯 
	if(l==r)
	{
		return v[l];
	}
	if(l>r) return 1;//˵��û�нڵ��� 
	
	for(int i=l;i<=r;i++)
	{
		int p=setree(l,i-1)*setree(i+1,r)+dp[i][i];       //���ҼӸ� 
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
	}//�����ڵ���� ��������������ڵ� 
	
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
	cout<<dp[1][n]<<endl;//��1��n�����ֵ
	print(1,n);
	return 0; 
}
