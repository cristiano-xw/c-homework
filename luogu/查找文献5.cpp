#include<bits/stdc++.h>
#include<queue>
using namespace std;
vector<int> p[100005];
queue<int>q;  
bool vis[100005];//������� 
struct node
{
	int x; int y;//�ֱ�Ϊ�����յ� 
}s[1000005];

void dfs(int x)//��ȱ��� 
{  
	cout<<x<<" ";
	for(int i=0;i<p[x].size();i++)
	{
		if(vis[p[x][i]]==0) //�����û������
		{
			vis[p[x][i]]=1;
			dfs(p[x][i]);
		} 
	}
}

bool cmp(node a,node b)
{
	if(a.y<b.y) return 1;
	if(a.y==b.y)  
	{
		if(a.x<b.x) return 1;
	}
	return 0;
}

int main()
{
	memset(vis,0,sizeof(vis));
	int n=0; int m=0;
	cin>>n>>m;
	int i=0; int j=0;
	
	for(i=1;i<=m;i++)
	{
	    cin>>s[i].x>>s[i].y;      
	}
	
	sort(s+1,s+m+1,cmp);
	
	for(i=1;i<=m;i++)
	{
		p[s[i].x].push_back(s[i].y);
	}
	
	vis[1]=1;
	dfs(1);
	cout<<endl;
	memset(vis,0,sizeof(vis));
	
	vis[1]=1;
	q.push(1);//1���Ƚ������
	while(q.empty()==0)
	{
		int x=q.front();//����
		cout<<x<<" ";
		q.pop();
		for(i=0;i<p[x].size();i++)
		{
			if(vis[p[x][i]]==0)
			{
				vis[p[x][i]]=1;
				q.push(p[x][i]);             
			}
		} 
	} 
	
	return 0;
}   

