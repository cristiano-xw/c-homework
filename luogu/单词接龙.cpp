#include<bits/stdc++.h>
using namespace std;
string a[22];//存储字符串
int vis[22];//标记数组 
int ans=0;//结果 
int n=0;
char t;//首字符 

void dfs(string x,int l)
{
     ans=max(ans,l);
     int i=0;
     for(i=1;i<=n;i++)
     {    
     	int p=0;
     	int la=x.length(); int lb=a[i].length();
     	for(p=1;p<min(la,lb);p++)
     	{
     		if(x.substr(la-p,p)==a[i].substr(0,p)&&vis[i]<2)    //从0开始p个长度  
     		{
     			vis[i]++;
     			dfs(a[i],l+lb-p);
				vis[i]--;     
			}
		}
	 }
}


int main()
{  
    memset(vis,0,sizeof(vis));
	scanf("%d",&n);
	
	int i=0;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	cin>>t;
	
	for(i=1;i<=n;i++)
	{
		if(a[i][0]==t)
		{
			vis[i]++;
			dfs(a[i],a[i].length());    
			vis[i]--;
		}
	}
	
	cout<<ans;//输出最大结果 
	return 0;
	
}
