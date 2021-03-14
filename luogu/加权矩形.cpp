#include<bits/stdc++.h>
using namespace std;
int s[155][155];
int main()
{
	int ans=-131313;
	int n=0; cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{   
		    int x=0; cin>>x;
			s[i][j]=s[i-1][j]+x;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<i;j++)
		{
			int sum=0;
			for(int k=1;k<=n;k++)
			{
				int cnt=s[i][k]-s[j][k];
				if(sum<0) sum=0;
				sum+=cnt;
				if(ans<sum) ans=sum;
			}
		}
	}
	 cout<<ans; return 0;
} 
