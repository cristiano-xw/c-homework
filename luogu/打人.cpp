//01��������д��
#include<bits/stdc++.h>
using namespace std;
int n=0; int x=0;
long long lose[1111]; long long win[1111];
long long s[1111];//���ĵ�ҩ��
long long dp[1111];
//�����������ù�������ѡ�񲻴�ǡʧ�ܾ��飬��ù���ҲҪ��ǡ�ɹ��߾��飬 �򲻹�ǡʧ�ܾ��� 
int main()
{
	cin>>n>>x;
	for(int i=1;i<=n;i++)
	{
		cin>>lose[i]>>win[i]>>s[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=x;j>=s[i];j--)
		{
			//dp[j]=max(dp[j]+lose[i],dp[j-s[i]]+win[i]);
			if(dp[j]+lose[i]>dp[j-s[i]]+win[i])
			{
				dp[j]=dp[j]+lose[i];
			}
			else
			{
				dp[j]=dp[j-s[i]]+win[i];
			}
		}
		for(int j=s[i]-1;j>=0;j--)
		{
			dp[j]+=lose[i];
		}
	}
	
	cout<<5*dp[x];
	return 0;
} 
