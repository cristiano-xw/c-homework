#include<bits/stdc++.h>
using namespace std;
int main()
{
	int q[111112];//储存每一组数据的最大值
	int s[111112];//储存每一组数据的大小
	int ans=1111111111;
	int f[111112];//储存初始数据;
	memset(q,0,sizeof(q));
	memset(s,0,sizeof(s));
	memset(f,0,sizeof(s));
	
	int i=0;
	int n=0; cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>f[i];
	} 
	
	sort(f+1,f+n+1);
	
	int top=0;//表示现在数组存储了几个了 
	for(i=1;i<=n;i++)
	{
	   int pos=lower_bound(q+1,q+top+1,f[i]-1)-q; //查找和f[i]-1相等的数在哪一组 
	   while(q[pos+1]==(f[i]-1)&&pos<top) 
	   pos++; //一直找到相等的最后一个
	    
	   if(pos>top||q[pos]!=f[i]-1)
	   {
	   	top++;
	   	q[top]=f[i]; s[top]++;
	   }
	   else
	   {
	   	q[pos]++; s[pos]++;
	   }
	}
	
	for(i=1;i<=top;i++)
	{
		ans=min(ans,s[i]);
	}
	cout<<ans;
	return 0;	
}
