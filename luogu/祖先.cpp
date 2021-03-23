#include<bits/stdc++.h>
#define INF 0x3f3f3f3f
#define N 20002
#define mo 1000000007
using namespace std;
int n,m,r,tot;
int to[N],ne[N],head[N],son[N],ans[50002],de[N];

void add(int x,int y)
{
	to[++tot]=y,ne[tot]=head[x],head[x]=tot;
}

void read(int &x) 
{
    int f = 1; x = 0;
    char ch = getchar();
    while (ch < '0' || ch > '9')   {if (ch == '-') f = -1; ch = getchar();}
    while (ch >= '0' && ch <= '9') {x = x * 10 + ch - '0'; ch = getchar();}
    x *= f;
}

void dfs(int x,int fa)
{
	son[x]=1;//子树包括自身
	de[x]=de[fa]+1;//暂时没什么用的深度 
	for(int i=head[x];i;i=ne[i])
	{//邻接表遍历 
		if(to[i]!=fa)
		{
			dfs(to[i],x);//对子树进行遍历 
			son[x]+=son[to[i]]%mo; //维护每个后代的后代 
		}
	}
}

int getans(int p)
{
	int x,y=0,z=0;
	z=x=son[p];
	for(int i=head[p];i;i=ne[i]) 
	{
		if(de[to[i]]<de[p]) continue;
		y=son[to[i]]; 
		z+=(long long)((x-y)*y)%mo;
	}
	return z;
}

int main()
{
    read(n),read(r),read(m);
    
	for(int i=1;i<n;i++)
	{
    	int x,y;
    	read(x),read(y);
    	add(x,y);//add(y,x);
	}
	
	dfs(r,r);
	
	for(int i=1;i<=n;i++) ans[i]=getans(i);
	
	for(int i=1;i<=m;i++)
	{
		int p;
		read(p);
		cout<<ans[p]<<endl;
	}
	
	return 0;
}
