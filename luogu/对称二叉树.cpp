#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <cstring>
#include <cctype>

using namespace std;

inline int read()
{
	int x=0,f=1;char ch=getchar();
	while (!isdigit(ch)){if (ch=='-') f=-1;ch=getchar();}
	while (isdigit(ch)){x=x*10+ch-48;ch=getchar();}
	return x*f;
}

int n,son[1000050][2],val[1000050],size[1000050];

//son[i][0]为i的左儿子
//son[i][1]为i的右儿子

inline void dfs(int u)
{
	size[u]=1;
	if (son[u][0]!=-1)
	{
		dfs(son[u][0]);
		size[u]+=size[son[u][0]];
	}
	if (son[u][1]!=-1)
	{
		dfs(son[u][1]);
		size[u]+=size[son[u][1]];
	}
}

inline bool check(int u,int v)
{
	if (u==-1 && v==-1)
		return true;
	if (u!=-1 && v!=-1 && val[u]==val[v] && check(son[u][0],son[v][1]) && check(son[u][1],son[v][0]))
		return true;
	return false;
}
 
int main() 
{  
	n=read();
	for (int i=1;i<=n;i++)
		val[i]=read();
	for (int i=1;i<=n;i++) 
	{
		son[i][0]=read();
		son[i][1]=read();
	}
	
	dfs(1);
	int ans=0;
	for (int i=1;i<=n;i++)
		if (check(son[i][0],son[i][1]))
			ans=max(ans,size[i]);
	cout << ans << endl;
	return 0;
}

