#include<bits/stdc++.h>
using namespace std;
const int N = 10000+5;
int n,_min=0x7fffffff,ans;
int lc[N],rc[N]; 
int in_order[N],post_order[N];
 
int build(int l1,int r1,int l2,int r2) 
{
    if (r1<l1) return -1;
    int root = post_order[r2]; 
    int p = l1;   
    while(in_order[p] != root) p++; 
    int cnt = p-l1;
    lc[root] = build(l1, p-1, l2, l2+cnt-1); 
    rc[root] = build(p+1, r1, l2+cnt, r2-1);
    return root;
}

void dfs(int u, int sum)
{ 
    sum += u;
    if(lc[u]==-1 && rc[u]==-1)
	 { 
        if(sum < _min || (sum == _min && u < ans))
		 { 
            ans = u; 
            _min = sum; 
        }
     }
     
     if(lc[u]!=-1) dfs(lc[u], sum); 
     if(rc[u]!=-1) dfs(rc[u], sum); 
}

int main(){//主函数
	//char a[2];
	int t;char c;
	//有未知棵二叉树 
	while(scanf("%d%c",&t,&c)!=-1)//输入 而且存在多组输入 
    {
        n=0;
        in_order[0]=t;
        while(c!='\n')scanf("%d%c",&in_order[++n],&c); //一共输入了n个数 
        for(int i=0;i<=n;i++)scanf("%d",&post_order[i]); //输入 
        
        build(0,n,0,n);
        dfs(post_order[n],0);
        
        printf("%d\n",ans);
        memset(in_order,0,sizeof(in_order));
        memset(post_order,0,sizeof(post_order));
        memset(lc,0,sizeof(lc));
        memset(rc,0,sizeof(rc));     
		_min=ans=0x7fffffff; 
    }
    
    return 0; 
}
