#include<bits/stdc++.h>
using namespace std;
long long tree[500005];
int n=0; int m=0;
inline long long lowbit(long long x)
{
	return x&-x;
}

void add(long long x,long long k)//从第x层开始哈 
{
	while(x<=n)//层层遍历
	{
		tree[x]+=k;
		x+=lowbit(x);
	} 
}

long long ask(long long x)
{
	long long ans=0;
	while(x)
	{
		ans+=tree[x];
		x-=lowbit(x);
	}
	return ans;
}

int main()
{
	cin>>n>>m;
	long long now=0; long long last=0;
	{
		for(int i=1;i<=n;i++)
		{
			cin>>now;
			add(i,now-last);//实现每个数精确加法 
			last=now;
		}
	} 
	
	for(int i=1;i<=n;i++)
	{
		int flag=0;
		cin>>flag;
		if(flag==1)//实行添加操作
		{
			long long a=0; long long b=0; long long c=0;
			cin>>a>>b>>c;
			add(a,c);	//区间加数 
			add(b+1,-c); //避免重复运算 
		} 
		
		if(flag==2)
		{
			long long c=0;
			cin>>c;
			cout<<ask(c);
			cout<<endl;
		}
	}
	return 0;
}


