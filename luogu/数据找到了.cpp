#include<bits/stdc++.h>
using namespace std;
int main()                 
{
	char b[300];
	memset(b,0,sizeof(b));
	int i=1;
	        
	while(b[i-1]!='\n')
	{
		scanf("%c",&b[i]);
		i++;
	}
	int a[300];
	memset(a,0,sizeof(a));
	int n=i-3;//长度
	for(i=1;i<=n;i++)
	{
		a[i]=b[i]-'0';
	}
	
	
	
	int k=0; cin>>k;
	int r=n-k; 
	int t=0;//次数  
    int flag=0;//标记物 
	int j=1;//开始查找的起点   
	int minn=1;
	
	while(t<r)
	{  
	    minn=j;//初始化最小值 
		for(i=j;i<=j+k;i++)
		{
			if(a[i]<a[minn])
			{
				minn=i; //找到区间最小值 
			}
		}
	
	if(a[minn]!=0)
	{
		flag=1;
	}      
	   
	if(flag==1)
	{
		cout<<a[minn];
		//printf("ok");
	}	
	 
	k=k-(minn-j);
	j=minn+1;
	t++;	
	}
	
	if(flag==0) 
	{
		cout<<0;         
	}
	return 0;  
} 
