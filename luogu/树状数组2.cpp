#include<bits/stdc++.h>
using namespace std;

int n=0; int m=0;
long long t[500005];

void add(long long x,long long k)//第x个数加上k 
{
	for(;x<=n;x+=x&-x)
	{
		t[x]+=k;
	}
}

int ask(long long x)//第x个数 
{
	long long ans=0;
	for(;x<=n;x-=x&x)
	{
		ans+=t[x];
	}
	return x;
}

int main()
{
	cin>>n>>m;
	long long now=0; long long last=0;
	{
		for(int i=1;i<=n;i++)
		{
			cin>>now;//第i个数的值
			add(i,now-last);//加上差值，避免重复 
			last=now; 
		}
	}
	
	for(int i=1;i<=m;i++)
	{
        int flg=0;
        cin>>flg;
        if (flg == 1) 
		{
            int x, y;
            long long k;
            cin>>x>>y>>k;
            add(x, k);
            add(y + 1, -k);
        }  
		if (flg == 2)
		{
            int x;
           	cin>>x;
            cout<<t[x]<<endl;
        }
    }
    return 0;
	
}
