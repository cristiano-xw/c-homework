#include<bits/stdc++.h>      
using namespace std;
struct node
{  
	int left; int right;
}t[1111111];

int n=0;int i=0;

void build() //���������� 
{
	for(i=1;i<=n;i++) 
	{
		scanf("%d%d",&t[i].left,&t[i].right);//�������ҽڵ� 
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
