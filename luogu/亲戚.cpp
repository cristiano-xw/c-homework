#include<bits/stdc++.h>
using namespace std;
int fa[55555];

int find(int x)//找关系 
{
	if(x==fa[x])
	return x;
	else
	return (fa[x]=find(fa[x]));
}

void join(int x,int y)//建立关系 
{
	int f1=find(x);
	int f2=find(y);
	if(f1!=f2)
	fa[f1]=f2;
}

int main()
{
	int n=0; int m=0; int p=0;int i=0;
	cin>>n>>m>>p;
	for(i=1;i<=n;i++)
	{
		fa[i]=i;
	}
	
	for(i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		join(x,y);
	}
	
	for(i=1;i<=p;i++)
	{  
	    int x=0; int y=0;
	    cin>>x>>y;
		if(find(x)==find(y)) 
		{
			printf("Yes\n");
		}
		else
		printf("No\n");
	}
	return 0;
}
