#include<bits/stdc++.h>
using namespace std;

int n=0; int m=0;
long long t[500005];

void add(long long x,long long k)//��x��������k 
{
	for(;x<=n;x+=x&-x)
	{
		t[x]+=k;
	}  
}

long long ask(long long x)//��x���� 
{
	long long ans=0;
	for(;x;x-=x&x)   
	{
		ans+=t[x];
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
			cin>>now;//��i������ֵ
			add(i,now-last);//���ϲ�ֵ�������ظ� 
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
            long long x;
           	cin>>x;
            cout<<ask(x)<<endl; 
        }
    }
    return 0;
	
}
