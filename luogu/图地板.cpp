#include<bits/stdc++.h>
using namespace std;
int k=0; 
int vis[2000][2000];
void dfs(int x,int y,int a,int b,int s)
{
	if(s==1)
	{
		return ;//递归终点 
	}
	//初始位置标记点为（1，1） 
	s=s/2;//分治
	if(x-a<s&&y-b<s)//公主在左上方 
	{    
	    if(vis[a+s][b+s]==0) 
		printf("%d %d 1\n",a+s,b+s);
		
		vis[a+s][b+s]=1;
		dfs(x,y,a,b,s);//找公主 
		dfs(a+s-1,b+s,a,b+s,s);//右上
		dfs(a+s,b+s-1,a+s,b,s);//左下
		dfs(a+s,b+s,a+s,b+s,s);//右下 
	} 
	
	if(x-a>=s&&y-b<s)//左下方 
	{  
	    if(vis[a+s-1][b+s]==0)
		printf("%d %d 3\n",a+s-1,b+s);
		vis[a+s-1][b+s]=1;
		dfs(a+s-1,b+s-1,a,b,s);
		dfs(a+s-1,b+s,a,b+s,s);//右上
		dfs(x,y,a+s,b,s);
		dfs(a+s,b+s,a+s,b+s,s);//右下 
	}
	
	if(x-a<s&&y-b>=s)//右上方 
	{   
	    if(vis[a+s][b+s-1]==0)
		printf("%d %d 2\n",a+s,b+s-1);
		vis[a+s][b+s-1]=1;
		dfs(a+s-1,b+s-1,a,b,s);
		dfs(x,y,a,b+s,s);
		dfs(a+s,b+s-1,a+s,b,s);//左下
		dfs(a+s,b+s,a+s,b+s,s);//右下 	
	}
	
	if(x-a>=s&&y-b>=s)//右下方
	{   
	    if(vis[a+s-1][b+s-1]==0)
		printf("%d %d 4\n",a+s-1,b+s-1);
		vis[a+s-1][b+s-1]=1;
		dfs(a+s-1,b+s-1,a,b,s);
		dfs(a+s-1,b+s,a,b+s,s);//右上
		dfs(a+s-1,b+s,a,b+s,s);//右上
		dfs(x,y,a+s,b+s,s); 
	} 
	
} 

int main(void)
{  
    memset(vis,0,sizeof(vis));
    int s=0;
    int x=0; int y=0;
	scanf("%d%d%d",&k,&x,&y);
	s=pow(2,k);
	dfs(x,y,1,1,s);
	return 0;
}
