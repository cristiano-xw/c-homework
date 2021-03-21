#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int s[10];
int n=0; int r=0;


void solve()
{
	sort(s,s+n);
	int i=0; 
	int ans=0;
	while(i<n)
	{
		int x=s[i];i++;
		while(i<n&&s[i]<=x+r)	i++;
		int p=s[i-1];//范围内最后一个点做上标记 
		while(i<n&&s[i]<=p+r)	i++; 
		ans++;
	}
	cout<<ans<<endl;
}

int main()
{
	while(cin>>r>>n)
	{
		if(r==-1&&n==-1)
		{
			return 0;
		}
		else
		{
			for(int i=0;i<n;i++)
			{
				cin>>s[i];
			}
			solve();
		}
	}
	
	return 0;
}


