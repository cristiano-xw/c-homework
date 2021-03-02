#include<bits/stdc++.h> 
using namespace std;

int n=0; int m=0;
char s[1001];
int cnt=0;
int tree[300007][30];
bitset<1001> vis[500005]; 


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
			cout<<" "<<endl;
			break;
		}
        now=tree[now][k];        
    }
    
    if(flag==1)
    {
	for(int i=1;i<=n;i++)     
	   {
		if(vis[now][i]==1)//À´¹ý 
		cout<<i<<" ";  
	   }   
    cout<<endl;  
	}               
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
	{   
	    int l=0;
        cin>>l;
        for(int j=1;j<=l;j++)
		{
            insert(i);
        }
    }
    
    cin>>m;
    for(int i=1;i<=m;i++)
	{
        check();
    }
    
    return 0;
}
