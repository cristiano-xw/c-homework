#include<bits/stdc++.h>
using namespace std;
bool prime[111111];
int fa[111111]; 
int a=0; int b=0; int p=0;
int vis[111111];

int find(int x)
{    
	if(fa[x]==x) return x;
	else return fa[x]=find(fa[x]);
}

void join(int x,int y)
{
	int f1=find(x); int f2=find(y);
	if(f1!=f2)
    fa[f1]=f2;//共同祖先 
}

void search()//寻找质数 
{
	memset(prime,1,sizeof(prime));
	prime[0]=prime[1]=0;
	int i=0;
	for(i=2;i<=sqrt(b);i++) 
	{
		if(prime[i])
		{
			for(int j=2*i;j<=b;j+=i)
			{
				prime[j]=0;//不是质数 
			}
		}
	}                      
}

int main()
{  
    int ans=0;
	cin>>a>>b>>p;
	int i=0; int j=0;
	for(i=a;i<=b;i++)
	{
		fa[i]=i;
	}
	
	search();
	int cnt=0;
	for(i=p;i<=b;i++)
	{
		if(prime[i])
		{
			vis[++cnt]=i;
		}
	}
	
	for(i=1;i<=cnt;i++)
	{
		int t=0;
		while(vis[i]*t<a)
		{
			t++;
		}
		while(vis[i]*(t+1)<=b)
		{
            join(vis[i]*t,vis[i]*(t+1));
			t++;
		}
	}
	
	for(i=a;i<=b;i++)
	{
		 if(fa[i]==i)
		 {
		 	ans++;
		 }
	}
	
	cout<<ans;
	return 0;
}
