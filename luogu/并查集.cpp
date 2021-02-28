#include<bits/stdc++.h>
using namespace std;
int fa[22222];
int n=0; int m=0;

inline int find(int x)
{
	if(x==fa[x])
	return x;
	else return fa[x]=find(fa[x]);
}

/*inline void join(int x,int y)
{
	int t1=find(x);
	int t2=find(y);
	if(t1!=t2)
	{
		fa[t1]=t2;
	}
}*/

int main()
{
	cin>>n>>m;
	int i=0;
	for(i=1;i<=n;i++)
	{
		fa[i]=i;
	}
	
	for(i=1;i<=m;i++)
	{
		int k=0; int x=0; int y=0; 
		cin>>k>>x>>y;
		if(k==1)
		{
			int f1=find(x); int f2=find(y);
			if(f1!=f2)
			fa[f1]=f2;
		}
		
		if(k==2)
		{
			int f1=find(x);
			int f2=find(y);
			if(f1==f2) cout<<"Y"<<endl;
			if(f1!=f2) cout<<"N"<<endl; 
		}
	}
	return 0;
}
