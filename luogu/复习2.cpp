//暴力枚举加回溯
#include<bits/stdc++.h>
using namespace std;
int total=20020616;
int a[100][100];
int l=0; int r=0;

void dfs(int x,int i,int y)
{
    if(i<=y-1)//从第0个数开始
	{
		l+=a[x][i];
		dfs(x,i+1,y);
		l-=a[x][i];
		
		r+=a[x][i];
		dfs(x,i+1,y);
		r-=a[x][i];
	} 
	
	if(i==y)
	{
		total=min(total,max(r,l));
		return ;
	}
}

int main()
{   
    int ans=0;
    int d[4];
    int i=0;
    cin>>d[0]>>d[1]>>d[2]>>d[3];
    
    for(i=0;i<4;i++)
    {  
        l=r=0;
    	int j=0;
    	for(j=0;j<d[i];j++)
    	{
    		scanf("%d",&a[i][j]);
		}
	}
	
	
	//对二维数组的每一行进行搜索
	
	for(i=0;i<4;i++)
	{ 
	    l=r=0;//每次完成后清零 
		dfs(i,0,d[i]); //搜素第i个一维数组 每一行有d【i】个数 
		ans+=total;
		total=19999;
	} 
	
	
	printf("%d",ans);
	return 0;
}
