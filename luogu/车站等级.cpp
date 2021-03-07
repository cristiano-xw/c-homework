#include<bits/stdc++.h>
using namespace std;
int s[1005][1005];//表示后面一个的级别强于前面一个 
int a[1005];//读入层数 
int c[1005];//读入车站 
bool vis[1005];//读入标记数组
bool b[1005];
int main()
{
	int n=0; int m=0;
	int i=0; int j=0;
	cin>>n>>m;
	for(i=1;i<=m;i++)//每一组都要重新读入车站,但是相对的大小关系不清零 
	{
		memset(c,0,sizeof(c));
		memset(vis,0,sizeof(vis));
		int t=0; cin>>t;
		for(j=1;j<=t;j++)
		{
			cin>>c[j]; vis[c[j]]=1;//出现过  
		}
		for(j=c[1];j<=c[t];j++)
		{
			if(vis[j]==0)//没有出现过
			{
				for(int k=1;k<=t;k++)
				{
					if(s[j][c[k]]==0)
					{
						s[j][c[k]]=1;//读入强弱关系
						a[c[k]]++; 
					}
				}
			} 
		}
	}
	
	memset(b,0,sizeof(b));//标记底层数组
	int th[1005];
	memset(th,0,sizeof(th));
	int ans=0;
	int tot=0;
	do
	{
	    tot=0;
		for(i=1;i<=n;i++)
		{
			if(a[i]==0&&b[i]==0)
			{
				th[++tot]=i; b[i]=1;//查找所有的底层车站 
			}
		} 
		
		for(i=1;i<=tot;i++)
		{
			for(j=1;j<=n;j++)
			{
				if(s[th[i]][j]==1) 
				{
					s[th[i]][j]=0; a[j]--;   //层数减少  
				}
			}
		}
		ans++;
	}while(tot);
	
	ans--;
	cout<<ans;
	return 0; 
	
} 
