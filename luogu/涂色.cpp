#include<bits/stdc++.h>
using namespace std;
char s[55];
int dp[55][55];
int n=0;
//dp[i][j]��ʾ��i��j��Ҫ�Ĵ��� 
int main()
{
	scanf("%s",s+1);//�Ҵӵ�һλ��ʼ���� 
	int n=0;
	n=strlen(s+1);//�ҳ����� 
	memset(dp,127,sizeof(dp));
	
	for(int i=1;i<=n;i++) 
	{
		dp[i][i]=1;	//��ʼ�� 
	}
	
	for(int k=1;k<n;k++)//���䳤�� 
	{
		for(int i=1,j=i+k;j<=n;i++,j++)//����  
		{
			if(s[i]==s[j])//�������˵���� 
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
