#include<bits/stdc++.h>
using namespace std;
struct node
{
	int pre,nxt,key;
	node(int _key=0,int _pre=0,int _nxt=0) //���캯����˳�� 
	{
		pre=_pre;nxt=_nxt;key=_key;
	}
}s[111111];

int n,m,tot=0; int vis[111111]={0};
//ÿ��ͬѧ��ѧ���ǰ��ս������ 
void ins_back(int x,int y)//�ں������,x��ʾ��ǰ����,y��ʾ����������� 
{
	int now=vis[x];
	s[++tot]=node(y,now,s[now].nxt);
    s[s[now].nxt].pre=tot;//����ǰ��һ��ͬѧ��ѩ��
    s[now].nxt=tot;
	vis[y]=tot; 
} 
void ins_front(int x,int y)//ǰ������ 
{
	int now=vis[x];
    s[++tot]=node(y,s[now].pre,now);
    s[s[now].pre].nxt=tot;
    s[now].pre=tot;
    vis[y]=tot;
}
void del(int x)//ɾ���ض�Ԫ�� 
{
	int now=vis[x];
	s[s[now].pre].nxt=s[now].nxt;
	s[s[now].nxt].pre=s[now].pre;
	vis[x]=0;//���� 
}

int main()
{
	int x,k,p,now;
	cin>>n;
	int num; num=n;
	//s[0]=node();
	ins_back(0,1); //��ʼ����1��ͬѧ���� 
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
			del(x);//ɾ������ 
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

