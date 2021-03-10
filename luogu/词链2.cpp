#include<bits/stdc++.h>
#include<map>
using namespace std;
string a[1005];//记录单词
string now[1005];//记录结果
string ans[1005];
int sum=0; int n=0;
int len[1005]; int vis[1005];
int flag=0;
map<char,int>s1,s2;
int start=0;

void dfs(int last,int step)
{
	if(flag==1)
	return ;
	if(step==n)
    {
    	flag=1;
    	for(int i=1;i<=sum;i++)
    	{
    		ans[i]=now[i];
		}
		return;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==1) continue;
		if(a[last][a[last].length()-1]==a[i][0])
		{
			now[++sum]=a[i];
			vis[i]=1;
			dfs(i,step+1);
			sum--;
			vis[i]=0;
		}
	}
} 

int main()
{
	memset(len,0,sizeof(len));
	memset(vis,0,sizeof(vis));
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		len[i]=a[i].length();
		s1[a[i][0]]++;
		s2[a[i][len[i]-1]]++;//分别记录头和尾 
	}
	
	char begin,end;//寻找第一个和最后一个出现的单词
	sort(a+1,a+n+1);//排序 
	for(char c='a';c<='z';c++)
	{
		if(abs(s1[c]-s2[c])==1)//找到 
		{
			if(s1[c]-s2[c]==1)
			{
				begin=c;//记录头部 
			}
			if(s2[c]-s1[c]==1)
			{
				end=c;//记录尾部 
			}
		}
	}
	
	int time=s2[end];
	for(int i=1;i<=n;i++)
	{
		if(a[i][0]==begin&&(a[i][len[i]-1]!=end||time>=2))
		{
			start=i;//确定开头 
			break;
		}
	}
	
	vis[start]=1;
	now[++sum]=a[start];
	dfs(start,1);
	
	if(flag==0)//没有出现 
	{
		cout<<"***";
		return 0;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(i!=n)
		cout<<ans[i]<<".";
		else
		cout<<ans[i];
	}
	
	return 0;	
} 

