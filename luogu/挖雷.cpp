#include<bits/stdc++.h>
using namespace std;
int mapp[22];
int link[22][22];
int res[22]={0};
int n=0;int ans=0;
int k=0;//��ʾվ��
int g[22];
int nex[22];
 
int dfs(int i)
{
	if(res[i]!=0)
	{
		return res[i];
	}
	
	else
	{
		k=0;
	
		res[i]+=mapp[i];
		for(int j=1;j<=n;j++)
		{
			if(link[i][j]==1)//ֱ�ӿ��Ե��� 
			{
				dfs(j);
				//res[i]=max(res[i],res[j]+mapp[i]);
				if(res[j]+mapp[i]>res[i])
				{
					
					//cout<<vis[i][k]<<" ";
					//cout<<k<<endl;
					res[i]=mapp[i]+res[j];
					nex[i]=j;//�ڽӴ�� 
				}
			}
		}
		return res[i];
	}
}



int main()
{
	memset(link,0,sizeof(link));
	cin>>n;	
	for(int i=1;i<=n;i++)
	{
		cin>>mapp[i];
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			cin>>link[i][j];
		}
	}
	
	
	for(int i=1;i<=n;i++)
	{
		g[i]=dfs(i);
	}
	
	int maxx=0;
	for(int i=1;i<=n;i++)
	{
		if(g[i]>g[maxx])
		{
			maxx=i;
		}
	}
	ans=g[maxx];
	//cout<<maxx<<" ";
	int i=maxx;
	cout<<i<<" ";//������ 
	 i=nex[i];
	while(1)
	{
		if(i)
		{
			cout<<i<<" ";
		}
		else
		{
			cout<<endl;
			break;
		}
		i=nex[i];
	}
	
	
	cout<<ans;
	return 0;
}
