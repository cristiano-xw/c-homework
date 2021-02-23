#include<bits/stdc++.h>
using namespace std;
char a[111]; int b[111];//存放数组和标记数组
int main()
{  
    memset(b,0,sizeof(b));
	scanf("%s",a);
	int n=0;
	n=strlen(a);
	int i=0; int j=0;
	for(i=0;i<n;i++)
	{
		if(a[i]==']')
		{
			for(j=i-1;j>=0;j--)
			{
				if(b[j]==0)//找到第一个没有匹配的 
				{
					if(a[j]=='[')
					{
						b[i]=b[j]=1;
						break;
					}
					if(a[j]=='(')
					{
						break;//结束循环 
					}
				}
			}
		}
		if(a[i]==')')
		{
			for(j=i-1;j>=0;j--)
			{
				if(b[j]==0)//找到第一个没有匹配的 
				{
					if(a[j]=='(')
					{
						b[i]=b[j]=1;
						break;
					}
					if(a[j]=='[')
					{
						break;//结束循环 
					}
				}
			}
		}
	}
	
	for(i=0;i<n;i++)
	{
		if(b[i]==0)
		{
			if(a[i]=='('||a[i]==')')
			{
				cout<<"()";
			}
			if(a[i]=='['||a[i]==']')
			{
				cout<<"[]";
			}
		}
		if(b[i]==1)
		{
			cout<<a[i];
		}
	}
	return 0;
} 
