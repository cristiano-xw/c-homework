#include<bits/stdc++.h> 
using namespace std;
int n;
int a1[100010],a2[100010];
int s[100010];
int f[100010],b[100010],len;
int dp[111111];
int main()
{
    //freopen("a.in","r",stdin);
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a1[i]);
        s[a1[i]]=i;
    }
    
    for(int i=1;i<=n;i++)
    scanf("%d",&a2[i]);
    
    for(int i=1;i<=n;i++)
    {
        b[i]=s[a2[i]]; //��a2����ת�� 
    }
    int res=0;
    
    for(int i=1;i<=n;i++)
    {
    	 dp[i]=1;
    	for(int j=1;j<i;j++)
    	{
    		if(b[j]<b[i]) 
    		{
    			dp[i]=max(dp[i],dp[j]+1);
			}
		}
		res=max(dp[i],res);
	}
    cout<<res;
    return 0;
}

