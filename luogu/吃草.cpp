#include<cstdio>
#include<algorithm>
using namespace std;
int n,m,ans=1e9;
int a[100],b[100],dp[55005];
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=m+5000;i++)
    dp[i]=1e9;//��ʼ������ΪҪ�ҵ�һ����Сֵ��dp[i]��ʾ�õ�i���ĸɲ�������Ҫ��Ǯ�� 
    for(int i=1;i<=n;i++)
    scanf("%d%d",&a[i],&b[i]);
    for(int i=1;i<=n;i++)
        for(int j=a[i];j<=m+5000;j++)//ע��ѭ������Ϊm+5000����Ϊ��ֻ����mǧ��ʱ���ѵ�Ǯ��һ�������ٵģ�5000ʱһ������������ֵ 
        //��ȫ���� 
        dp[j]=min(dp[j],dp[j-a[i]]+b[i]);
    for(int i=m;i<=m+5000;i++)
    ans=min(ans,dp[i]);//Ѱ����һ���ȷ��Ϲ�������Ǯ������ 
    printf("%d",ans);//ֱ��������� 
}
