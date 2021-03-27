#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>a[11111];
int t[11111];
int n=0; int k=0;
int main()
{
	cin>>n>>k;
	for(int i=1;i<=k;i++)
	{
		int s=0; int b=0;
		cin>>s>>b;//存入开始和持续的时间
		a[s].push_back(b); 
	}
	
	for(int i=n;i>=0;i--)
	{
		if(a[i].size())
		{
			for(int j=0;j<a[i].size();j++)
			{
				t[i]=max(t[i],t[i+a[i][j]]);
			}
		}
		else t[i]=t[i+1]+1;
	}
	cout<<t[1];
	return 0;
}
