#include<bits/stdc++.h>
using namespace std;
int n,m,p,c[100005],p2,p1,a,b,c1;
long long sum,ans;
int main()
{
	cin>>n>>m;
	if(m>0)cin>>p1;
	for(int i=2;i<=m;i++)
	{
		cin>>p2;
	 	if(p1<p2)c[p1]++,c[p2]--;
	 	else c[p2]++,c[p1]--;
	 	p1=p2;
	}
	for(int i=1;i<n;i++)
	{
		sum+=c[i];
		cin>>a>>b>>c1;
		if(sum!=0)ans+=min(a*sum,b*sum+c1);
	}
	if(m<=1)ans=0;
	cout<<ans;
	return 0;
}
