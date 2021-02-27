#include<bits/stdc++.h>
#include<map>
using namespace std;
map<int,int>q;
int main()
{
	int n=0; int i=0;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		int x=0;
		cin>>x;
		q[x]=i;
	}
	
	int m=0;
	cin>>m;
	for(i=1;i<=m;i++)
	{
		int x=0;
		cin>>x;
		if(q[x]) cout<<q[x]<<endl;
		else cout<<"0"<<endl;
	}
	return 0;
}
