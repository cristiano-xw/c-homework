#include<bits/stdc++.h>   
using namespace std;
int n=0,root=0,cnt=0,option=0,x=0;
struct node
{
	int left,right,size,value,num;
	node(int l,int r,int s,int v) //构造函数 
	    :left(l),right(r),size(s),value(v),num(1){}
	node(){} 
}t[11111];

inline void update(int root)//判断每一个节点的大小  
{
	t[root].size=t[t[root].left].size+t[t[root].right].size+t[root].num; 
}
    
int rank(int x,int root)
{
	if(root)
	{
		if(x<t[root].value) //小于节点的值
		return rank(x,t[root].left);//在左边区间里面寻找 
		if(x>t[root].value) //大于节点的值
		{
			return rank(x,t[root].right)+t[t[root].left].size+t[root].num;//大于节点的值，在右区间 
	    }
		return t[t[root].left].size+t[root].num;//就是节点的值 
	}
	return 1;             
}        

int th(int x,int root) //查询排名为x的数  
{
	if(x<=t[t[root].left].size)
	return th(x,t[root].left);//在左节点寻找 
	if(x<=t[t[root].left].size+t[root].num)
	return t[root].value;
	
	return th(x-t[t[root].left].size-t[root].num,t[root].right);
}

void insert(int x,int &root)
{
	if(x<t[root].value)//插入左子叶 
	{
		if(t[root].left==0)//左子叶没有数 
		{                                 
			t[t[root].left=++cnt]=node(0,0,1,x);//创建新的节点 
		}
		else
		{
			insert(x,t[root].left);
		}
	}
	
   if(x>t[root].value)
	{
		if(t[root].right==0)
		{
			t[t[root].right=++cnt]=node(0,0,1,x);
		}
		else insert(x,t[root].right);
		
	}
	if(x==t[root].value) 
	    t[root].num++;//增加节点的个数 
	update(root);//更新节点 
}

int main()
{
	cin>>n;
	//int num=0;
	t[root=++cnt]=node(0,0,1,2147483647);
	while(n--)
	{
		cin>>option>>x;
		//num++;
		if(option==1) cout<<rank(x,root)<<endl;
	    if(option==2) cout<<th(x,root)<<endl;
	    if(option==3) cout<<th(rank(x,root)-1,root)<<endl;
	    if(option==4) cout<<th(rank(x,root)+1,root)<<endl;
		if(option==5) insert(x,root);
	}
	return 0;
}
