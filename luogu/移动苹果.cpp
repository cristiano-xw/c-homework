#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[111];
	memset(a,0,sizeof(a));
	int i=0; int n=0;
	scanf("%d",&n);
	int sum=0; int ans=0; int ave=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	
	ave=sum/n;//求平均
	for(i=1;i<n;i++)//最后一个必须相同 
	{
		if(a[i]!=ave)
		{
			a[i+1]=a[i+1]+(a[i]-ave); 
			ans++;
		}
	} 
	
	cout<<ans;
	return 0;
	
	
}
