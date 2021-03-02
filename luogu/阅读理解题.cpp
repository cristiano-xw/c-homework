#include<bits/stdc++.h>
using namespace std;
char s[11111]; int tree[555555][30]; 
int n=0;   int j=0;int m=0;
int v=0;//表示节点 
int vis[555555][111];
inline int read()
{
	int k=0; int f=1;
	char ch=getchar();
	while(ch<'0'||ch>'9')
	{
		if(ch=='-') 
		{
		   f=-1; 
		}
		ch=getchar();
	}
	                   
	while(ch>='0'&&ch<='9')
	{
		k=k*10+ch-'0';               
		ch=getchar();
	}
	
	return k*f;
}

inline void insert(int x)//读取每一个单词 
{
	scanf("%s",s+1); 
	int l=strlen(s+1);
	int now=0;
	for(int i=1;i<=l;i++)
	{
		int k=s[i]-'a';//进行离散化
		if(tree[now][k]==0)//在这一层没有查询得到
		{
			tree[now][k]=++v;//给一个节点号
		} 
		now=tree[now][k];
	}
	vis[now][x]=1;//now表示这个单词出现的最后深度，x表示在第x行出现过 
}

inline void check() 
{
	scanf("%s",s+1);
    int l=strlen(s+1);
    int now=0; int flag=1;//做标记
	for(int i=1;i<=l;i++)
    {
       	int k=s[i]-'a';
    	if(tree[now][k]==0)
    	{
    	    flag=0; break;
		}
		now=tree[now][k];//去到下一个节点 
	}
	
	if(flag==1)
	{ 
	  // cout<<"ok";
		for(int i=1;i<=n;i++)
		{
			if(vis[now][i]==1) cout<<i<<" ";
		} 
		cout<<endl;
	}
}

int main()
{ 
    memset(vis,0,sizeof(vis));
	n=read();
	//cout<<n;
	for(int i=1;i<=n;i++)
	{
		int m=read();
		for(j=1;j<=m;j++)
		{
			insert(i);
		}
	}
	
	//cout<<"ok";
	int h=read();
	//cout<<"  "<<h;
	for(int i=1;i<=h;i++)
	{
		check();
	}
	return 0;
	
} 


