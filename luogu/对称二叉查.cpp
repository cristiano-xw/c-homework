#include<bits/stdc++.h>
using namespace std;
int n=0;//��ʾ�ڵ���� 

inline int read()   
{
	int x=0; int f=1;
	char c=getchar();
	while(c<'0'||c>'9')
	{
		if(c=='-')
		{
			f=-1;
		}
		c=getchar();
	}
	
	while(c>='0'&&c<='9')
	{
		x=x*10+c-'0';
		c=getchar();
	}
	return f*x;
}


int son[1111111][2]; int val[1111111];//��Ŷ��Ӻͼ�ֵ
int size[1111111];//���ÿ�����Ĵ�С 

void dfs(int x)
{
	size[x]=1;
	if(son[x][0]!=-1)//��߱��� 
	{
		dfs(son[x][0]);
		size[x]+=size[son[x][0]];
	}
	
	if(son[x][1]!=-1)//�ұ߱��� 
	{
		dfs(son[x][1]);
		size[x]+=size[son[x][1]];
	}

}

int check(int u,int v)
{
	if(u==-1&&v==-1)
	return 1;
	if(u!=-1&&v!=-1&&val[u]==val[v]&&check(son[u][0],son[v][1])&&check(son[u][1],son[v][0]))
	return 1;
	
	return 0; 
}


int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		val[i]=read();	//��������ڵ��Ȩֵ 
		//cin>>val[i];
	}
	
	for(int i=1;i<=n;i++)
	{
		son[i][0]=read();
		son[i][1]=read();//�������ҽڵ� 
		//cin>>son[i][0]>>son[i][1];
	}
	
	dfs(1);
	int ans=0;
	
	for(int i=1;i<=n;i++)
	{
		if(check(son[i][0],son[i][1]))
		{
			ans=max(ans,size[i]);
		}
	}
	
	cout<<ans;
	return 0;
	
} 
