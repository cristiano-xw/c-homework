#include<bits/stdc++.h>     
using namespace std;
int n=0; int m=0; int a[111111];

int main()
{
	scanf("%d%d",&n,&m);
	int i=0;int left=0; int right=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		left=max(a[i],left);  
		right+=a[i]; 
	}
	
	int ans=0;

	while(left<=right)
	{ 
	    int mid=(left+right)/2;     
		int sum=0; int t=0;
	    for(i=1;i<=n;i++)
	    {
	    	if(a[i]+sum<=mid)
	    	{
	    		sum+=a[i];
			}
			else
			{
				sum=a[i];
				t++;
			}  
		}
		if(t>=m)
		{  
			left=mid+1;                 
		}
		else 
		{
			right=mid-1;
			//ans=mid;
		}
		ans=mid;
	}
	cout<<ans;
	return 0;
}
