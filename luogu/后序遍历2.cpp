#include<bits/stdc++.h>
using namespace std;
string a,b;
void houxu(int x,int y,int p,int q)
{
     if(x>y||p>q) return ;
     else
     {
     	int i=b.find(a[x]);//找到节点
		houxu(x+1,x+i-p,p,i-1);//遍历左子树
		houxu(x+i-p+1,y,i+1,q);//遍历右子树
		cout<<a[x]; 
	 }
}
int main()
{
     cin>>b>>a;
     int n=a.length()-1;
     houxu(0,n,0,n);
     return 0;
}
