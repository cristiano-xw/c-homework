//本题的基本思路是深搜加回溯
#include<bits/stdc++.h>
using namespace std;
int a[1111]={1};//首先拆分第一个元素是1
int n=0;

void print(int n)//n表示数组中有n个数 
{  
	for(int i=1;i<n;i++)
	{
		printf("%d",a[i]);
		printf("+");
	}
	printf("%d",a[n]);
	printf("\n");
}

void dfs(int s,int i)
{
	int t=0;//表示当前的数
	for(t=a[i-1];t<=s;t++)
	{
		if(t<n)//防止输出原来的数 
		{
			a[i]=t;
			s=s-t;
			if(s==0)
			{
				print(i);
			} 
			
			if(s>0) 
		    dfs(s,i+1);
			s+=t;
		}
	} 
}



int main(void)
{
	scanf("%d",&n);
	dfs(n,1);  //从第一个数开始搜
	return 0; 
} 


