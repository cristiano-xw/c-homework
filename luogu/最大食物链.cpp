#include<bits/stdc++.h>
#include<vector>
#define MOD 80112002
using namespace std;
vector<int>s[5555];
queue<int>q;
int f[555555]; int in[555555]; int out[555555];

int main()
{   
    memset(f,0,sizeof(f));
    memset(in,0,sizeof(in));
    memset(out,0,sizeof(out));
    
	int n=0; int m=0; int i=0; int j=0;
	cin>>n>>m;
	
	for(i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		out[x]++;//出口增加
		in[y]++;//入口增加
		s[x].push_back(y);//建立邻接表 
	}
	
	for(i=1;i<=n;i++)
	{
		if(in[i]==0)
		{
		   q.push(i);
		   f[i]=1;
		}
	}
	
	while(q.empty()==0)
	{
		int k=q.front();
		q.pop();
		int len=s[k].size();
		for(i=0;i<len;i++)
		{
		     int t=s[k][i];
			 f[t]=(f[k]+f[t])%MOD;
			 in[t]--;
			 if(in[t]==0) q.push(t);	
		}
	}
	
	int ans=0;
	for(i=1;i<=n;i++)
	{
		if(out[i]==0)
		{
			ans=(ans+f[i])%MOD;
		}
	}
	
	cout<<ans;
	return 0;
}
