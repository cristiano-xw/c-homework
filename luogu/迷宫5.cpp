#include<cstdio>
#include<cstring>
int n,m;
int ans[100002];//结果数组 
int x,y;
int f[1002][1002];//标记数组 
char a[1002][1002];//地图数组 

void dfs(int x1,int y1,int z,int i1)
{ 
    if (x1<0 ||x1>=n ||y1<0 ||y1>=n || f[x1][y1]!=0 || a[x1][y1]-'0'!=z)
	return;
    
	f[x1][y1]=1;ans[i1]++;
    dfs(x1-1,y1,!z,i1);
	dfs(x1+1,y1,!z,i1);
	dfs(x1,y1-1,!z,i1);
	dfs(x1,y1+1,!z,i1);
}

int main()
{
    scanf("%d%d",&n,&m);
    
    for (int i=0;i<n;i++)
    scanf("%s",a[i]);
    
    for (int i=1;i<=m;i++)
    {  
        memset(f,0,sizeof(f));
        scanf("%d%d",&x,&y);
		x--;y--; //坐标处理 
		
        if (f[x][y]==0)
		dfs(x,y,a[x][y]-'0',i);
		else 
		ans[i]=ans[f[x][y]];
    }
    
    for (int i=1;i<=m;i++)
    {
    printf("%d\n",ans[i]);
    }
    return 0;
}

