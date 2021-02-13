#include<bits/stdc++.h>
int a[100005];
using namespace std;
int main()
{
	int n=0; int k=0;
	scanf("%d%d",&n,&k);
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int l=0; int r=100000000;
	while(r-l>1)
	{
		int mid=(r+l)/2;
		int s=0; 
		for(i=1;i<=n;i++)
		{
			s+=a[i]/mid;
		}
		
		if(s>=k) 
		{
			l=mid;
		}
		else
		{
			r=mid;
		}
	}
	
	cout<<l;
	return 0;
}
