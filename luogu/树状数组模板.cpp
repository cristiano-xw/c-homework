#include<bits/stdc++.h>
using namespace std;
int n=0; int m=0;
int t[2000010]={0}; 
void add(int x,int k)
{
	for(;x<=n;x+=x&-x)//��ǰ׺��
	{
		t[x]+=k;
	}
}

int sum(int x)//��ѯǰ׺�� 
{
	int ans=0;
	for(;x;x-=x&-x) 
	{
		ans+=t[x];
	}
	return ans;
}

int main()
{
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		int a=0;
		cin>>a;
		add(i,a);
	}
	
	for(int i=1;i<=m;i++)
	{
		int a=0; int b=0; int c=0;
		cin>>a>>b>>c;
		if(a==1)
		{
			add(b,c);
		}
		if(a==2)
		{
			cout<<sum(c)-sum(b-1)<<endl;
		}
	}
	
	return 0;
}
