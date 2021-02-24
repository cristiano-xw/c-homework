//二叉树问题
#include<bits/stdc++.h>
using namespace std;
int v[260]; int w[260];//分别存放能力值和编号
int n;
void dfs(int x)
{
     if(x>=pow(2,n))
	 return;//遍历到子节点返回 
	 
	 else
	 {
	 	dfs(2*x);
	 	dfs(2*x+1);//遍历左右子树
		int lv=v[2*x]; int rv=v[2*x+1];
		if(lv>rv)      
		{
			v[x]=lv;
			w[x]=w[2*x];
		} 
		else
		{
			v[x]=rv;
			w[x]=w[2*x+1];
		}
	 }	
}	

int main()
{
	cin>>n; int i=0;
	for(i=0;i<pow(2,n);i++)
	{
		cin>>v[i+(int)pow(2,n)];//读入子节点的值
		w[i+(int)pow(2,n)]=i+1;//每个子节点所对应的编号 
	}
	dfs(1);
	if(v[2]>v[3])
	{
		cout<<w[3];
	}
	else
	cout<<w[2];
	return 0;
}
