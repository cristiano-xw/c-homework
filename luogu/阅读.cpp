#include<bits/stdc++.h> 
using namespace std;
char s[11111];
int tree[555555][30];
int n=0; int cnt=0;
bool vis[500015][111];

inline int read()
{
    int k=0; int f=1;
	char ch=getchar();
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
        int k=s[i]-'a';
        if(tree[now][k]==0)           
		{
		 tree[now][k]=++cnt;
		}   
        now=tree[now][k];           
    }
    vis[now][x]=1;                
}

inline void check()
{
    scanf("%s",s+1);
	int l=strlen(s+1);
    int now=0; int flag=1;
    for(int i=1;i<=l;i++)
	{
        int k=s[i]-'a';
        if(tree[now][k]==0)           
		{
			flag=0;
			break;
		}
        now=tree[now][k];        
    }
    
    if(flag==1)
    {
	for(int i=1;i<=n;i++)     
	   {
		if(vis[now][i]==1)//À´¹ı 
		cout<<i<<" ";  
	   }   
    cout<<endl;  
	}               
}

int main()
{   
    memset(s,0,sizeof(s));
    memset(tree,0,sizeof(tree));
    memset(vis,0,sizeof(vis));
    
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
