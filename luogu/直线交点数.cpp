#include<bits/stdc++.h>
using namespace std;
bool f[11111];
int Max=0; int i=0;

void dp(int n,int k)
{
	int r=0;
	if(n==0)
	{
		f[k]=1;
		Max=max(Max,k);
	}
	else
	{
		for(r=n;r>=1;r--)
		{
			dp(n-r,r*(n-r)+k); 
		}
	}
}

int main()
{
	memset(f,0,sizeof(f));
	int n=0; int ans=0;
	cin>>n;
	
	dp(n,0);
	
	for(i=0;i<=Max;i++)
	{
		if(f[i]==1) 
		{ 
		    //cout<<i<<" ";
			ans++;
		}
	}
	
	cout<<ans;
	return 0;
}
