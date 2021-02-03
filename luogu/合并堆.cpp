#include<bits/stdc++.h>
#include<queue>
//优先队列 
using namespace std;
int main()
{
	int n=0;
	int s=0; int ans=0;
	cin>>n;
    int a=0;
	priority_queue<int,vector<int>,greater<int> >q;
	int i=1;
	for(i=1;i<=n;i++)
	{
		cin>>a;
		q.push(a);//将a压入队列
	}
	
	for(i=1;i<n;i++)//每次s等于堆的前两个元素重量之和 
	{
		s=q.top();
		q.pop();
		s+=q.top();
		q.pop();
		ans+=s;
		q.push(s);
	}
	
	cout<<ans;
	return 0;
}
