#include<bits/stdc++.h>
using namespace std;
int fa[1111]={}; 
int find(int x)
{
	if(x==fa[x]) return x;
	if(x!=fa[x]) return find(fa[x]);
}

void join(int x,int y)
{
	int f1=find(x); int f2=find(y);
	if(f1!=f2)
	fa[f1]=f2;
}


int main()
{
	while(1)
	{   
	    memset(fa,0,sizeof(fa));
		int n=0; int m=0; int i=0;
		cin>>n;
		if(n==0)
		break;
		
		for(i=1;i<=n;i++)
		{
			fa[i]=i;//自己是自己的族长 
		}
		
		cin>>m;
		for(i=1;i<=m;i++)
		{
			int x=0; int y=0;
			cin>>x>>y;
			join(x,y);
		}
		int ans=0;
		for(i=1;i<=n;i++)
		{
			if(find(i)==i)
			{
				ans++;
			}
		}
		printf("%d\n",ans-1);
	}
	return 0;
}
