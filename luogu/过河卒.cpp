//二维数组第一个对应行坐标 第二个对应列坐标
#include<bits/stdc++.h>
using namespace std;
int main(void)
{   
    long long int b[100][100];//判断是否是马的控制点
	long long int a[100][100];//坐标为i j时可以的走法;
	
	int dx[9]={2,1,-1,-2,-2,-1,1,2,0};
    int dy[9]={1,2,2,1,-1,-2,-2,-1,0}; //卒子的生命禁区 
    int i=0; int j=0; int n=0; int m=0; int x=0; int y=0;
    
    scanf("%d%d%d%d",&n,&m,&x,&y);
   
    for(i=0;i<9;i++)
    {  
        if(x+dx[i]>=0&&x+dx[i]<=n&&y+dy[i]>=0&&y+dy[i]<=m) 
        {
    	b[x+dx[i]][y+dy[i]]=1;//把马够得着的地方标记为1
	    }  
	}
	
	int k=0;
	while(b[k][0]!=1&&k<=n)
	{
		a[k][0]=1;
		k++;
	}
	
	int l=0;
	while(b[0][l]!=1&&l<=m)    
	{
		a[0][l]=1;
		l++;
	}  //判断出发点可能有哪些  
	
   for(i=1;i<=n;i++)
   {
   	for(j=1;j<=m;j++)
   	{
   		if(b[i][j]==1)
   		{
   			a[i][j]=0;
		}
		else  
		{
			a[i][j]+=a[i-1][j]+a[i][j-1];//要么从左边来，要么从上面来 
	    }
	}
   }
   
   //做递归的题，只需要知道出发点和递推关系式.    
   printf("%lld",a[n][m]);
	return 0;
}
