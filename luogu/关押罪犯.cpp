#include<bits/stdc++.h> 
using namespace std;

struct node
{
    int x,y,w;
}p[111111];

int n,m,fa[111111],Enemy[111111];
//fa[i]��i�ĸ���(���鼯),Enemy[i]��i�ĵ���(������ͬһ��) 
int find(int k)//���鼯�Ҹ��� 
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
    
    for(int i=1;i<=m;i++)//�ӱ� 
    {
    	cin>>p[i].x; cin>>p[i].y; cin>>p[i].w;
	}    
	    
    for(int i=1;i<=n;i++)
        fa[i]=i;//�Լ�Ϊ�� 
        
    sort(p+1,p+1+m,cmp);//��ŭ��ֵ�Ӵ�С���� 
    //��������ʼ�ϲ��ﷸ 
    
    for(int i=1;i<=m;i++)
    {
    	    int t1=find(p[i].x),t2=find(p[i].y);
    	    if(t1==t2) //����ì��:ֱ�ӽ��� 
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
