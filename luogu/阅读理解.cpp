#include<bits/stdc++.h> 
using namespace std;
char s[10010];
int tree[500010][33];
int n,v=0;               
bool vis[500010][111];

inline int read()
{
    int k=0,f=1;char ch=getchar();
    while(ch<'0'||ch>'9')
	{
		if(ch=='-')
			f=-1;
		ch=getchar();
	}
	
    while(ch>='0'&&ch<='9')
	{
		k=k*10+ch-'0';
		ch=getchar();
	}
    return k*f;
} 

inline void insert(int x)  
{
    scanf("%s",s+1);
	int l=strlen(s+1); 
    int now=0;
    for(int i=1;i<=l;i++)
	{                  
        int p=s[i]-'a';
        if(!tree [now][p])         
		{
		tree [now][p]=++v;   //给一个新的编号 
	    }
	    
        now=tree [now][p];          
    }
    vis[now][x]=1;                 
}

inline void check()
{
    scanf("%s",s+1);
	int l=strlen(s+1);
    int now=0,flag=1;
    for(int i=1;i<=l;i++)
	{
        int p=s[i]-'a';
        if(!tree [now][p])          
		{
			flag=0;
			break;
		} 
        now=tree [now][p];           
    }
    
    if(flag==1)
    {
		for(int i=1;i<=n;i++)     
		{
	    if(vis[now][i])
		printf("%d ",i); 
		}
		cout<<endl; 
    }
                         
}

int main()
{
    n=read();
    for(int i=1;i<=n;i++)
	{
        int x=read();
        for(int j=1;j<=x;j++)     
			insert(i);  
    }
    
    int m=read();
    for(int i=1;i<=m;i++)
	{
	check();
    }
    return 0;
    
}
