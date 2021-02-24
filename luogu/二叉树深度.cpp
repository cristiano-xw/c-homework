#include<bits/stdc++.h>      
using namespace std;
struct node
{  
	int left; int right;
}t[1111111];

int n=0;int i=0;

void build() //建立二叉树 
{
	for(i=1;i<=n;i++) 
	{
		scanf("%d%d",&t[i].left,&t[i].right);//建立左右节点 
	}
}
                     
int dfs(int x)  
{       
	if(x==0) return 0;     
	return max(dfs(t[x].left),dfs(t[x].right))+1;         
}   
                  
int main()  
{  
	cin>>n;
	build();    
	cout<<dfs(1);       
	return 0;  
}         
