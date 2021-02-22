#include<bits/stdc++.h>
using namespace std;
struct node
{
	int pre,nxt,key;
	node(int _key=0,int _pre=0,int _nxt=0) //构造函数的顺序 
	{
		pre=_pre;nxt=_nxt;key=_key;
	}
}s[111111];

int n,m,tot=0; int vis[111111]={0};
//每个同学的学号是按照进入教室 
void ins_back(int x,int y)//在后面插入,x表示当前的数,y表示即将插入的数 
{
	int now=vis[x];
	s[++tot]=node(y,now,s[now].nxt);
    s[s[now].nxt].pre=tot;//更改前面一个同学的雪号
    s[now].nxt=tot;
	vis[y]=tot; 
} 
void ins_front(int x,int y)//前部插入 
{
	int now=vis[x];
    s[++tot]=node(y,s[now].pre,now);
    s[s[now].pre].nxt=tot;
    s[now].pre=tot;
    vis[y]=tot;
}
void del(int x)//删除特定元素 
{
	int now=vis[x];
	s[s[now].pre].nxt=s[now].nxt;
	s[s[now].nxt].pre=s[now].pre;
	vis[x]=0;//清零 
}

int main()
{
	int x,k,p,now;
	cin>>n;
	int num; num=n;
	//s[0]=node();
	ins_back(0,1); //初始化将1号同学放入 
	int i=0;
	for(i=2;i<=n;i++)
	{
		cin>>k>>p;
		if(p==0)
		{
			ins_front(k,i);
		}
		else
		{
			ins_back(k,i);
		}
	} 
	
	cin>>m;
	for(i=1;i<=m;i++)
	{   
	    cin>>x;
		if(vis[x]!=0)
		{  
		    num--;
			del(x);//删除操作 
		}
	}
	
	now=s[0].nxt;   
	 
	for(i=1;i<=num;i++)
	{
		cout<<s[now].key<<" ";
		now=s[now].nxt;   
	}
	return 0;
}

