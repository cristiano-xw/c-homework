#include<bits/stdc++.h>
using namespace std;
struct node
{
	int g; int ti;//分别是国籍和上船时间 
}h;

queue<node>q;//构造队列
int ans=0; int a[111111];//存国籍 
int main()
{
	memset(a,0,sizeof(a));
	int i=0;int n=0; int m=0; int t=0;int j=0;
	cin>>n;//一共有n艘船
	for(i=1;i<=n;i++)
	{   
	    cin>>t>>m;
		while(q.empty()==0)
		{
			node w=q.front();
			if(w.ti+86400<=t)//队首超过范围了 
			{
				a[w.g]--;
				if(a[w.g]==0)
				{
					ans--;
				}
				q.pop();//推下海
				continue; 
			}
			break;
		}
		for(j=1;j<=m;j++)
		{
			int x=0;
			cin>>x;
			h.g=x;h.ti=t;
			q.push(h);//进入队列
			a[x]++;
			if(a[x]==1)
			{
				ans++;
			 } 
		}
		
		printf("%d\n",ans);
	} 
    return 0;
} 
