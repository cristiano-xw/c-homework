#include<bits/stdc++.h>
#include<queue>
using namespace std;
int main()
{
	int n=0; int m=0;
	cin>>n>>m;
	queue<int>q;
	int i=0;
	for(i=1;i<=n;i++)
	{
		q.push(i);
	}
	
	while(q.size()!=0)
	{
		for(i=1;i<m;i++)
		{
			q.push(q.front());
			q.pop();
		}
		printf("%d ",q.front());
		q.pop();
	}
	return 0;
}                        
