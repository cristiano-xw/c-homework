#include<bits/stdc++.h>
using namespace std;
int n=0; int root=0; int cnt=0; int opt=0; int x=0;
struct node
{
	int left,right,size,value,num;
	node(int l,int r,int s,int v)
	    :left(l),right(r),size(s),value(v),num(1){}
	node(){}
}t[111111];

inline void update(int root)//创建内联函数
{
	t[root].size=t[t[root].left].size+t[t[root].right].size+t[root].num;
} 

int rank(int x,int root)//查找数的排名 
{
	if(root)
	{
		if(x<t[root].value)
		return rank(x,t[root].left);
		
		if(x>t[root].value)
		return rank(x,t[root].right)+t[t[root].left].size+t[root].num;
		
		return t[t[root].left].size+t[root].num;
	}
	return 1;
}

int th(int x,int root)
{
	if(x<=t[t[root].left].size)
	return th(x,t[root].left);
	if(x<=t[t[root].left].size+t[root].num)
	return t[root].value;
	return th(x-t[t[root].left].size-t[root].num,t[root].right);
}

void insert(int x,int &root)
{
	if(x<t[root].value)
	{
		if(t[root].left==0)
		t[t[root].left=++cnt]=node(0,0,1,x); 
		else insert(x,t[root].left);
	}
	else if(x>t[root].value)
	{
		if(t[root].right==0) 
	    t[t[root].right=++cnt]=node(0,0,1,x);
	    else insert(x,t[root].right);
	}
	else
	t[root].num++;
	update(root);
}

int main()
{
	cin>>n;
	//int num=0;
	t[root=++cnt]=node(0,0,1,2147483647);
	
	while(n--)
	{
		cin>>opt>>x;
		//num++;
		if(opt==1) cout<<rank(x,root)<<endl;
	    if(opt==2) cout<<th(x,root)<<endl;
	    if(opt==3) cout<<th(rank(x,root)-1,root)<<endl;
	    if(opt==4) cout<<th(rank(x,root)+1,root)<<endl;
		if(opt==5) insert(x,root);
	}
	return 0;
}

