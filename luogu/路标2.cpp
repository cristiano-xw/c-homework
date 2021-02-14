#include<bits/stdc++.h>
using namespace std;
int a[100005]; 
int main()
{
	int l=0; int n=0; int k=0;
	int ans=0;
	scanf("%d%d%d",&l,&n,&k);
	int i=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int left=0; int right=l;
	
	while(left<=right)
	{
		int mid=(left+right)/2;
		int flag=0; int s=0;
		for(i=1;i<=n;i++)
		{
			while(a[i]-flag>mid)
			{
				flag+=mid; s++;
			}
			
			if(s>k)
			{
				break;
			}
			else
			{
				flag=a[i];
			}
		}
		
		if(s>k)
		{
			left=mid+1;
		}
		else
		{
			right=mid-1; ans=mid;
		}
	}
	
	cout<<ans;
	return 0;
}
