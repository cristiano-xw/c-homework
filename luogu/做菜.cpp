//总的酸度为每一种配料的酸度总乘积；总的苦度为每一种配料的苦度的总和。
#include<bits/stdc++.h>
using namespace std;
int a[11];int b[11];//分别读入酸度和苦度 
int m=0;//最小值 
int ans=19999999;//中间变量 负责转换
int n=0;

void dfs(int i,int x,int y)
{
	if(i>n)//深搜完成
	{
		if(x==1&&y==0)
		{
			return;//必须有调料 
		}
		
		ans=min(ans,abs(x-y)); //不断更新最小值 
	} 
	
	if(i<=n)
	{
		dfs(i+1,x*a[i],y+b[i]);
		dfs(i+1,x,y);
	}
}


int main(void)
{  
    
    scanf("%d",&n);
    int i=0;
    
    for(i=1;i<=n;i++)
    {
    	scanf("%d%d",&a[i],&b[i]);
	}
	
	dfs(1,1,0);//分别深搜 从第一个数组开始 酸度初始化为1 苦度初始化为0
	
    printf("%d",ans);
    
    
    
	return 0;
} 
