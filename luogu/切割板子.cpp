#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n=0;int s[22222];
	
void solve()
{
	long long ans=0;
	//int left=0; int right=0;
	while(n>1)
	{
	sort(s+1,s+n+1);//找到最短的两个板子
	
	int t=s[1]+s[2];//将最短的板子加上，回到上一层 
	ans+=t;
	s[1]=t;
	n--;//板子的数量减少 
	}
	cout<<ans;
	
}
	
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	
	solve();
	return 0;
}
