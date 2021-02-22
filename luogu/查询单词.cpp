#include<bits/stdc++.h>
#include<queue>
using namespace std;
bool vis[1111];
queue<int>q;
int main()
{   
    int ans=0;
	memset(vis,0,sizeof(vis));
	int n=0; int m=0;
	cin>>m>>n;
	int i=0; int x=0;
	for(i=1;i<=n;i++)
	{
		cin>>x;
		if(vis[x]==1) continue;
		else
		{
			if(q.size()>=m)
			{
				vis[q.front()]=0;
				q.pop();
			}
			q.push(x);//添加一次单词表示查询次数加一
		    vis[x]=1;
		    ans++;
		}
	}
	
	cout<<ans;
	return 0;
} 
