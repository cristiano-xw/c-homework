#include<bits/stdc++.h>
using namespace std;
long long n=0;long long w=0; long long s=0;
long long v[5555];
long long dp[5555];
const long long INF=-999999999999999888;

inline long long read()//读入优化不多说 
{
    long long x=0;
    bool f=0;
    char ch=getchar();
    while(ch<'0'||ch>'9')
	{
		f|=(ch=='-');
		ch=getchar();
	}
    while(ch>='0'&&ch<='9')
	{
        x=(x<<1)+(x<<3)+(ch^48);
        ch=getchar();
    }
    
    if(f)return -x;
	else return x;
}

int main()
{
	//cin>>n>>w>>s;
	n=read(); w=read(); s=read();
		
	for(long long i=1;i<=n;i++)
	{
		v[i]=read();
	}
	
	for(long long i=1;i<=w;i++)
	{
		dp[i]=INF;
	} 
	
	dp[1]=v[1];			//此时锅里面只有第一个元素 
	
	for(long long i=1;i<=n;i++)//每种原料需要按照次序依次投入
	{
		long long cnt[5555];
		for(long long j=1;j<=w;j++) 
		{
			cnt[j]=INF;
		}
		for(long long j=1;j<=min(w,i+1);j++)//遍历锅里面的情况 
		{
			for(long long k=min(w,j+1);k>=1&&k>=j+1-s;k--)//遍历拿出来的情况
			{
				if(cnt[k]<dp[j]+k*v[i+1])//此时原本锅里面的价值为dp[j]，k*v[i]是价值改变 
				{
					cnt[k]=dp[j]+k*v[i+1];
				}
				else break;
			} 
		} 
		
		for(long long j=1;j<=min(w,i+1);j++)
		{
			dp[j]=cnt[j];
		}
	} 
	
	long long ans=INF;
	
	for(long long i=1;i<=w;i++)
	{
		ans=max(dp[i],ans);	
	}
	
	cout<<ans;
	return 0;
}

