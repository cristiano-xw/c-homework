#include<bits/stdc++.h> 
#include<map> 
using namespace std;
const int maxn=1e5+5;
string a[maxn];  
string ans[maxn];
string ans[maxn];
int sum=0;
int len[maxn];
int vis[maxn];
map<char,int> s1,s2;
int n;
int flag=0;

void dfs(int last,int step)
{
	if(flag==1) 
	return;
	if(step==n)
	{
		flag=1;
	}
	for(int i=1;i<=n;i++)
	{
		if(vis[i]==1)
		continue;
		if(a[last][a[last].length()-1]==a[i][0])
		{
			ans[++sum]=a[i];
			vis[i]=1;
			dfs(i,step+1);
			sum--;
			vis[i]=0;
		}
	}
}   
          
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		len[i]=a[i].length();//存入长度 
		s1[a[i][0]]++;//存入首字母 
		s2[a[i][len[i]-1]]++; //存入尾巴 
	}	
	
	int start=1; 
	sort(a+1,a+1+n); //字典序从小到大 
	char begin,end;
	     
	for(char c='a';c<='z';c++)
	{
		if(abs(s1[c]-s2[c])==1)
		{ 
			if(s1[c]-s2[c]==1)
			begin=c;
			else
			if(s2[c]-s1[c]==1)
			end=c;
		}
	}
	  
	int time=s2[end];
	for(int i=1;i<=n;i++)
	{
		if(a[i][0]==begin && (a[i][len[i]-1]!=end || time!=1))
		{
			start=i;
			break;
		}
	}
	
	vis[start]=1;
	ans[++sum]=a[start];
	dfs(start,1);
	
	if(flag==0)
	{
		printf("***\n");
		return 0;
	}
	
	for(int i=1;i<=n;i++)
	{
		if(i!=n)
		cout<<ans[i]<<".";
		else
		cout<<ans[i];
	}
	printf("\n");
	return 0;
}
