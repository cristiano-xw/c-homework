#include<bits/stdc++.h>
using namespace std;
char a[1005][1005]; //地图数组 
int f[1005][1005];//标记数组 
int ans[100005];//答案数组  
int n=0; int m=0;     
void dfs(int x1,int y1,int z,int i1)
{
	if(x1<1||x1>n||y1<1||y1>n||a[x1][y1]-'0'!=z||f[x1][y1]!=0) 
	return ;
	
	f[x1][y1]=1; ans[i1]++;
	
	dfs(x1+1,y1,!z,i1);
	dfs(x1-1,y1,!z,i1);
	dfs(x1,y1+1,!z,i1);
	dfs(x1,y1-1,!z,i1);
	 
}

int main(void)
{
 
	scanf("%d%d",&n,&m);
	int i=0; int j=0;
	getchar();
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			scanf("%c",&a[i][j]);//字符形式哈 
		}
		getchar();
	}
	
	memset(ans,0,sizeof(ans));
	for(i=1;i<=m;i++)
	{
	memset(f,0,sizeof(f));
	int sx=0; int sy=0;
	scanf("%d%d",&sx,&sy);
	if(f[sx][sy]==0)//没来过哈
	{
		dfs(sx,sy,a[sx][sy]-'0',i);
	} 
	else
	ans[i]==ans[f[sx][sy]];  
    }
    
    for(i=1;i<=m;i++)
    {
    	printf("%d\n",ans[m]);//生成结果 
	}
    
    
	return 0;
}
