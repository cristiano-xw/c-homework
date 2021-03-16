#include<bits/stdc++.h>
using namespace std;
long long int sum=0; long long int ans=0;
int main()
{
    int n=0;int m=0;
	int d[100005];
	memset(d,0,sizeof(d));
	cin>>n>>m;
	int p1=0;
	cin>>p1;
	for(int i=1;i<m;i++)
	{  
	    int p2=0;
		cin>>p2;
		if(p1<p2) d[p1]++, d[p2]--;
		else d[p2]++, d[p1]--;
		p1=p2;
	}
	for(int i=1;i<n;i++)
	{
		int a=0; int b=0; int c=0;
		cin>>a>>b>>c;
		sum+=d[i];
		if(sum!=0)ans+=min(a*sum,b*sum+c);
	}
	
	cout<<ans;
	return 0;
}
