#include<bits/stdc++.h>
#include<map>
using namespace std;
string a[100055];
string ans[100055];
string now[100055];
int len[100055];
int vis[100055]; 
map<char,int> s1,s2;
int n=0; int sum=0; int flag=0;

void dfs(int last,int step) 
{
	if(flag==1)
	return;
	if(step==n)
	{
		flag=1;
		for(int i=1;i<=sum;i++)
		{
			ans[i]=now[i];
		}
		return;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==1)
		continue;
		if(a[last][a[last].length()-1]==a[i][0])
		{
			now[++sum]=a[i];
			vis[i]=1;
			dfs(i,step+1);
			sum--;
			vis[i]=0;
		}
	}
}
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		len[i]=a[i].length();
		s1[a[i][0]]++;
		s2[a[i][len[i]-1]]++;
	}	
	
	int start=1;
	sort(a+1,a+1+n);
	char begin,end;
	for(char c='a';c<='z';c++)
	{
		if(abs(s1[c]-s2[c])==1)
		{
			if(s1[c]-s2[c]==1)
			begin=c;
			 
			if(s2[c]-s1[c]==1)
			end=c;
		}
	}
	
	int cnt=s2[end];
	for(int i=1;i<=n;i++)
	{
		if(a[i][0]==begin && (a[i][len[i]-1]!=end || cnt!=1))
		{
			start=i;
			break;
		}
	}
	
	vis[start]=1;
	now[++sum]=a[start];
	dfs(start,1);
	if(flag==0)
	{
		cout<<"***";
		return 0;
	}
	
	for(int i=1;i<n;i++)
	{
		if(i!=n)
		cout<<ans[i]<<".";
	}
	cout<<ans[n];
	return 0;
}
