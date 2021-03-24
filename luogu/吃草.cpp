#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,ans=1e9;
int a[100],b[100],dp[55005];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m+5000;i++)
    dp[i]=1e9;//初始化，因为要找到一个最小值，dp[i]表示得到i磅的干草最少需要的钱数 
    for(int i=1;i<=n;i++)
    scanf("%d%d",&a[i],&b[i]);
    for(int i=1;i<=n;i++)
        for(int j=a[i];j<=m+5000;j++)//注意循环结束为m+5000，因为你只购买m千克时花费的钱不一定是最少的，5000时一坨草质量的最大值 
        //完全背包 
        dp[j]=min(dp[j],dp[j-a[i]]+b[i]);
    for(int i=m;i<=m+5000;i++)
    ans=min(ans,dp[i]);//寻找哪一个既符合购买量，钱又最少 
    printf("%d",ans);//直接输出即可 
}
