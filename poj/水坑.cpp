#include<iostream>
using namespace std;
char mapp[105][105];
int n=0; int m=0;

void dfs(int x,int y)
{
   mapp[x][y]='.';
   for(int dx=-1;dx<=1;dx++)
   {
	for(int dy=-1;dy<=1;dy++)
	{
		int nx=x+dx; int ny=y+dy;
		if(mapp[nx][ny]=='W'&&nx>=0&&nx<n&&ny>=0&&ny<m)
		{
			dfs(nx,ny);
		}
	 }  	
   }	
   return ;
}

int main()
{  
    int ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>mapp[i][j];
		}
	}
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if(mapp[i][j]=='W')
			{  
			    //cout<<"ok ";
				dfs(i,j);
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
