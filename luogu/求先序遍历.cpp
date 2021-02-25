#include<bits/stdc++.h>
using namespace std;
string a,b;
void qianxu(int x,int y,int p,int q)//x,y代表中序 ,p,q代表后序 
{            
     if(x>y||p>q) return ;
     else
     {
     	int i=a.find(b[q]);//找到节点
     	cout<<b[q];
		qianxu(x,i-1,p,p+i-x-1);//遍历左子树
		qianxu(i+1,y,p+i-x,q-1);//遍历右子树
		 
	 }
}
int main()
{
     cin>>a>>b;//先分别输入中序和后序 
     int n=a.length()-1;//求出长度 
     qianxu(0,n,0,n); 
     return 0;
}
