#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[31111];
	int w=0; int n=0;
	scanf("%d%d",&w,&n);
	int i=0;
	
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	int ans=0;//组数 
	sort(a+1,a+n+1);
	int p=0; int q=0;//数组左右两边同时开始遍历 
	p=1;q=n;
	
	while(q>=p)
	{
		if(a[q]+a[p]<=w)
		{
			q--;p++;
			ans++;
		}
		
		else
		{
			q--;
			ans++;
		}
	}
	
	cout<<ans;
	
}
