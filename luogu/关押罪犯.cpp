#include<bits/stdc++.h> 
using namespace std;

struct node
{
    int x,y,w;
}p[111111];

int n,m,fa[111111],Enemy[111111];
//fa[i]是i的父亲(并查集),Enemy[i]是i的敌人(不能在同一组) 
int find(int k)//并查集找父亲 
{
    if(fa[k]==k)return k;
    else return fa[k]=find(fa[k]);
}

void join(int x,int y)
{
	int f1=find(x);
	int f2=find(y);
    fa[f1]=f2; 
}

bool cmp(node x,node y)
{return x.w>y.w;}

int main()
{
    cin>>n>>m;
    
    for(int i=1;i<=m;i++)//加边 
    {
    	cin>>p[i].x; cin>>p[i].y; cin>>p[i].w;
	}    
	    
    for(int i=1;i<=n;i++)
        fa[i]=i;//自己为父 
        
    sort(p+1,p+1+m,cmp);//按怒气值从大到小排序 
    //接下来开始合并罪犯 
    
    for(int i=1;i<=m;i++)
    {
    	    int t1=find(p[i].x),t2=find(p[i].y);
    	    if(t1==t2) //出现矛盾:直接结束 
    	       {
		   		printf("%d",p[i].w);
		   		return 0;
		       }
		       
    	    if(!Enemy[p[i].x])
    	   	    Enemy[p[i].x]=p[i].y;
    	    else join(Enemy[p[i].x],p[i].y);
    	
		    if(!Enemy[p[i].y])
    	   	    Enemy[p[i].y]=p[i].x;
    	    else join(Enemy[p[i].y],p[i].x); 	   
	}
	    
    printf("0");
    return 0;
}
