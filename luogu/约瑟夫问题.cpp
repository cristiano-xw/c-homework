#include<bits/stdc++.h>
#include<list>            
using namespace std;
list<int>a;
int main()
{
	int n,m,cnt=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		a.push_back(i);
	}
	list<int>::iterator it ,now;
	it=a.begin();
	while(!a.empty())
	{
		cnt++;
		now=it;
		if(++it==a.end()) it=a.begin();
		if(cnt==m)
		{
			cout<<*now<<" ";
			a.erase(now);
			cnt=0;
		}
	}
	return 0;
}
