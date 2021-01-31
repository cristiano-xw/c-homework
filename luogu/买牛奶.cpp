#include<bits/stdc++.h>
using namespace std;

struct node
{
	int mon;//单价
	int tot;//奶量 
}a[5555];

bool cmp(node x,node y)
{
	return x.mon<y.mon;
}

int main(void)
{
	int n=0;
	int m=0;
	cin>>n>>m;
	int i=0;
	for(i=1;i<=m;i++)
	{
		cin>>a[i].mon>>a[i].tot;
	}
	
	sort(a+1,a+m+1,cmp);
	int ans=0;//花销
	 
	for(i=1;i<=m;i++)
	{
		if(n>=a[i].tot)
		{
			ans+=a[i].mon*a[i].tot;
			n=n-a[i].tot;
		}
		else
		{
			ans+=n*a[i].mon;
			break;
		}
		
	}
	
	cout<<ans;
	
} 
