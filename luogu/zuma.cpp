#include<bits/stdc++.h>
using namespace std;

const int INF=999999999;
int dp[555][555];
int a[555]; int n=0;
int main()
{
	memset(dp,127,sizeof(dp));
	
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		dp[i][i]=1;
	}
	
	for(int i=1;i<n;i++)
	{
		if(a[i]==a[i+1]) 
		{
			dp[i][i+1]=1; //��ʾ��ͨ������һ��ȥ�� 
		}
		else 
		{
			dp[i][i+1]=2;  //��ʾ����ֿ�ȥ�� 
		}
	}
	//����������һ������������ 
	
	for(int k=2;k<n;k++)	//�������2�� 
	{
		for(int i=1,j=i+k;j<=n;i++,j++)
		{
			if(a[i]==a[j])  //����߽���ͬ�����ȥ�߽�
			{
				dp[i][j]=dp[i+1][j-1];
			} 
			
			else
			{
				for(int m=i;m<j;m++)	//����������Ѱ��С���� 
				{
					dp[i][j]=min(dp[i][j],dp[i][m]+dp[m+1][j]);
				}
			}
		}
	}
	
	cout<<dp[1][n];
	return 0;
	
	
}
