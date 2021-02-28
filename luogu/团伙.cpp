#include<bits/stdc++.h>
using namespace std;
int fa[5555];int enemy[5555];

int find(int x)
{
	if(x==fa[x]) return x;
	else return fa[x]=find(fa[x]);
}

int main()
{
	int n=0; int m=0;
	int i=0; int j=0;
	memset(enemy,0,sizeof(enemy));
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		fa[i]=i;
	}
	
	for(i=1;i<=m;i++)
	{
		char k; int x=0; int y=0;
		cin>>k>>x>>y;
		
		if(k=='F')
		{
			int f1=find(x); int f2=find(y);
	        fa[f1]=f2;
		}
		
		if(k=='E')
		{
			if(enemy[x]==0) enemy[x]=find(y); 
			else 
			{
				int f1=find(enemy[x]); int f2=find(y);
				fa[f1]=f2;
			}
			       
			if(enemy[y]==0) enemy[y]=find(x);   
			else 
			{
				int f1=find(enemy[y]); int f2=find(x);
				fa[f1]=f2;
			}
		}
	}
	
	int ans=0;
	
	for(i=1;i<=n;i++)
	{
		if(find(i)==i)
		ans++;
	}
	cout<<ans;
	return 0;
}
