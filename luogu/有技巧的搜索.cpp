#include<bits/stdc++.h>
using namespace std;
int y[20][20]; int vis[20]; int a[20];
int flag=0;//标记 
int i=0; int j=0;int n=0; int sum=0;

void dfs(int p,int s)
{   
    if(flag==1||s>sum)
    {
    	return ;
	}
    
	if(p>n)
	{ 
		if(s==sum)
		{ 
			for(i=1;i<=n;i++)
			{
				cout<<a[i]<<" ";
				cout<<"ok ";
			}
			flag=1;
		}
		return ;
	}
	
	for(i=1;i<=n;i++)
	{
		if(vis[i]==0)
		{
			a[p]=i;
			vis[i]=1;
			dfs(p+1,s+y[n][p]*i);
			vis[i]=0;
		}
	}
	
}

int main()
{
 
	cin>>n>>sum;
	y[1][1]=1;
	
	for(i=2;i<=15;i++)
	{
		for(j=1;j<=i;j++)
		{
			y[i][j]=y[i-1][j]+y[i-1][j-1];
		}
	}//读入杨辉三角
	
	dfs(1,0);
	
	return 0; 
}
