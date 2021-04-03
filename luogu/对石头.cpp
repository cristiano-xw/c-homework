#include<bits/stdc++.h>
using namespace std;
int a[300];//存放石头个数
int dp1[300][300];//存放最小
int dp2[200][200];//存放最大
int sum[300];//存放前缀和
int n=0;
const int INF=999999999;

int cha(int i,int j)
{
	return sum[j]-sum[i-1];
}

int main()
{
	 std::ios::sync_with_stdio(false);
	 cin>>n;
	 for(int i=1;i<=n;i++)
	 {
	 	cin>>a[i];
	 	a[i+n]=a[i];//构成环状结构哈 
	 }
	 for(int i=1;i<=2*n;i++)
	 {
	 	sum[i]=sum[i-1]+a[i];//前缀和 
	 }
	 
	 for(int k=1;k<n;k++)//i和j的初始间隔
	{
	 	for(int i=1,j=i+k;i<2*n,j<=2*n;i++,j++)
	 	{
	 		dp1[i][j]=INF;
	 		for(int m=i;m<j;m++)
	 		{
	 			dp1[i][j]=min(dp1[i][j],dp1[i][m]+dp1[m+1][j]+cha(i,j));
	 			dp2[i][j]=max(dp2[i][j],dp2[i][m]+dp2[m+1][j]+cha(i,j));
			}
		}
	} 
	
	int maxx=0; int minn=INF;
	for(int i=1;i<=n;i++)
	{
		minn=min(minn,dp1[i][i+n-1]);
		maxx=max(maxx,dp2[i][i+n-1]);
	}
	cout<<minn<<endl<<maxx;
	return 0;
} 
