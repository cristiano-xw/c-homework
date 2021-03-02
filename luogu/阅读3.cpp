#include<bits/stdc++.h> 
using namespace std;

int n=0; int m=0;
char s[1001];
int cnt=0;
int tree[300008][26];
bitset<1001> vis[500007];


inline void insert(char *s,int x)
{
    int now=0;
    for(int i=0;s[i];i++)
	{
        int k=s[i]-'a';
        if(!tree[now][k])
		{
            tree[now][k]=++cnt;
        }
        now=tree[now][k];
    }
    vis[now][x]=1;
}

inline void check(char *s)
{
    int now=0;int flag=1;
    for(int i=0;s[i];i++)
	{
        int k=s[i]-'a';
        if(!tree[now][k])
		{  
		    cout<<" "<<endl;
            flag=0;
            break;
        }
        now=tree[now][k];
    }
    
    if(flag==1)
    {
    for(int i=1;i<=n;i++)
	{
        if(vis[now][i]==1)
		{
            cout<<i<<' ';
        }
    }
    cout<<endl;
    }
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
	{   
	    int x=0; 
        cin>>x;
        for(int j=1;j<=x;j++)
		{
            cin>>s;
            insert(s,i);
        }
    }
    
    cin>>m;
    for(int i=1;i<=m;i++)
	{
        cin>>s;
        check(s);
    }
    return 0;
}
