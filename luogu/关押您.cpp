#include<bits/stdc++.h>
using namespace std;
struct node
{
	int x; int y; int w;
}p[100005]; 
 
int fa[100005]; int enemy[100005];

bool cmp(node x,node y)
{
	return x.w>y.w;
} 

int find(int x)
{
	if(fa[x]==x) return x;
    return fa[x]=find(fa[x]); //继续寻找 
}

void join(int x,int y)
{
	int f1=find(x);
	int f2=find(y);
    fa[f1]=f2; 
}

int main()
{
	int n=0; int m=0; int i=0;
	cin>>n>>m;
	for(i=1;i<=m;i++)
	{
		cin>>p[i].x; cin>>p[i].y; cin>>p[i].w;
	}
	
	for(i=1;i<=n;i++)
	{
		fa[i]=i;//自己为父亲 
	}
	sort(p+1,p+m+1,cmp);
	
	
	for(i=1;i<=m;i++)
	{
		int t1=find(p[i].x);
		int t2=find(p[i].y);
		
		if(t1==t2)
		{
			cout<<p[i].w;
			return 0;
		}
		
		if(!enemy[p[i].x])
		{
			enemy[p[i].x]=p[i].y;//建立敌关系
	    }
		else join(enemy[p[i].x],p[i].y); 
		
		
		if(!enemy[p[i].y])
		{
			enemy[p[i].y]=p[i].x;
	    }
		else join(enemy[p[i].y],p[i].x); 
	}  
	
	cout<<"0";
	return 0;
}
