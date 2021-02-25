#include<bits/stdc++.h>
using namespace std;
int son[111]; int fa[111]; int root[111]; int dep[111]; int wid[111];

int lca(int x,int y)
{
	if(x==y) return x;
	if(dep[x]==dep[y]) return lca(fa[x],fa[y]);//返回父节点
	if(dep[x]>dep[y]) return lca(fa[x],y);
	if(dep[y]>dep[x]) return lca(x,fa[y]);  
}


int main()
{
	dep[1]=1;
	memset(wid,0,sizeof(wid));
	int n=0; int i=0;
	cin>>n;
	for(i=1;i<n;i++)//读入数据 
	{
		cin>>root[i]>>son[i];
		dep[son[i]]=dep[root[i]]+1;
		fa[son[i]]=root[i];
	}
	int x=0; int y=0; int k=0;
	cin>>x>>y;
	
	int max_dep=1; int max_wid=1;
	for(i=1;i<=n;i++)
	{ 
		max_dep=max(max_dep,dep[i]);
		//cout<<dep[i];
		wid[dep[i]]++;
		//cout<<"k";
	}
	
	for(i=1;i<=n;i++)
	{
		max_wid=max(max_wid,wid[i]);
	}
	
	cout<<max_dep<<endl;
	cout<<max_wid<<endl;
	
	k=lca(x,y);//x，y的共同祖先
	
	int d=(dep[x]-dep[k])*2+(dep[y]-dep[k]);
	cout<<d<<endl; 
	return 0;
}
