#include<bits/stdc++.h>
using namespace std;

struct node
{
	int next; int to;
}a[333];
int head[333];
int dp[333][333];	//��ʾ����iΪ���ڵ��ͼ��ѡȡk�ڿ� 

int n=0;int m=0;
int cnt=0;

void add(int from,int to)//�ڽӱ��ͼ
{
	a[++cnt].next=head[from];
	a[cnt].to=to;
	head[from]=cnt;//����	
} 

void solve(int x)//��xΪ���ڵ� 
{
	for(int i=head[x];i;i=a[i].next)	 
	{
		solve(a[i].to);//�Ȱ�ǰ��ĸ㶨 
	}
	
	for(int i=head[x];i;i=a[i].next)
	{
		for(int j=m;j>0;j--)//01����
		{
			int v=a[i].to;//�ҵ���ʱ�Ľڵ�
			for(int k=0;k<j;k++)//�����ʱ 
			{
				dp[x][j]=max(dp[x][j],dp[x][j-k]+dp[v][k]);
			} 
		} 
	}
}

int main()
{
	cin>>n>>m;
	//��0��Ϊ���е�Ĭ�ϸ��ڵ�
	m++; 
	for(int i=1;i<=n;i++)//����ڵ���Ϣ 
	{
		int fa=0;//���ڵ�
		cin>>fa;
		cin>>dp[i][1];
		add(fa,i); 
	}
	solve(0);
	cout<<dp[0][m];	//��0���Ĭ�Ͻ����� ��Ѱ��m���� 
	return 0;
} 
