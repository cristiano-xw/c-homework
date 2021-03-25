#include<bits/stdc++.h>
using namespace std;
int k=0; int n=0;
int a[20];

bool dfs(int i,int sum)
{
	if(i==n+1) return sum==k;
	if(dfs(i+1,sum)) return true;
	if(dfs(i+1,sum+a[i])) return true;
}

int main()
{
	cin>>n; cin>>k;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	if(dfs(1,0)) cout<<"yes";
	else cout<<"false";
	return 0;
}

