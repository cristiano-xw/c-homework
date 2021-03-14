#include<bits/stdc++.h>
using namespace std;
long long sum[1000001];
long long n,k;
int main()
{
	cin>>n>>k;
	if(k>=n-1)  
	{
		cout<<0<<endl;
		return 0;
	} 
	
	for(int i=1;i<=n-1;i++)
	{
		long long x;
		cin>>x;
		sum[i]=sum[i-1]+x;//Ç°×ººÍ
	}
	  
	long long cnt=sum[k];
	
	for(int i=2;i<=n-k;i++)
	{
		cnt=max(cnt,sum[i+k-1]-sum[i-1]);//i->i+k-1
	}
	
	cout<<sum[n-1]-cnt<<endl;
	return 0;
}  
