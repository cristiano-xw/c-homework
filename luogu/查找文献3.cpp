#include<bits/stdc++.h>
#include<queue>
using namespace std;
vector<int> p[100005];
queue<int>q;  
bool vis[100005];//������� 

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

int main()
{
	memset(vis,0,sizeof(vis));
	int n=0; int m=0;
	cin>>n>>m;
	int i=0; int j=0;
	for(i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
	    p[x].push_back(y);
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

