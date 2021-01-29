#include<bits/stdc++.h>
using namespace std;
int n;int m;int x;int y;
int ans[100002];
int f[1002][1002];
char a[1002][1002];

void dfs(int r,int c,int z,int i2) 
{
    if (r<1 || r>n || c<1 || c>n || f[r][c]!=-1 || a[r][c]-'0'!=z) 
	return;//不符合情况 回溯 
                
	f[r][c]=1; ans[i2]++;     
	
    dfs(r-1,c,!z,i2);//深搜遍历四个方向 
	dfs(r+1,c,!z,i2);//z是比较数组 
	dfs(r,c-1,!z,i2);
	dfs(r,c+1,!z,i2);
}  

int main()
{  
    
    scanf("%d%d",&n,&m);
    getchar();
    for (int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		scanf("%c",&a[i][j]);
		}
		getchar();
	}
    
   
    
    
	for (int i=1;i<=m;i++)
    {
    	memset(f,-1,sizeof(f));
        scanf("%d%d",&x,&y);
        
		if (f[x][y]==-1)//如果没有来过哈哈哈 
		dfs(x,y,a[x][y]-'0',i);   
		else ans[i]=ans[f[x][y]];
    }
    
    for (int i=1;i<=m;i++)
    printf("%d\n",ans[i]);
    return 0;
}

