#include<bits/stdc++.h>   
using namespace std;
int n=0,root=0,cnt=0,option=0,x=0;
struct node
{
	int left,right,size,value,num;
	node(int l,int r,int s,int v) //���캯�� 
	    :left(l),right(r),size(s),value(v),num(1){}
	node(){} 
}t[11111];

inline void update(int root)//�ж�ÿһ���ڵ�Ĵ�С  
{
	t[root].size=t[t[root].left].size+t[t[root].right].size+t[root].num; 
}
    
int rank(int x,int root)
{
	if(root)
	{
		if(x<t[root].value) //С�ڽڵ��ֵ
		return rank(x,t[root].left);//�������������Ѱ�� 
		if(x>t[root].value) //���ڽڵ��ֵ
		{
			return rank(x,t[root].right)+t[t[root].left].size+t[root].num;//���ڽڵ��ֵ���������� 
	    }
		return t[t[root].left].size+t[root].num;//���ǽڵ��ֵ 
	}
	return 1;             
}        

int th(int x,int root) //��ѯ����Ϊx����  
{
	if(x<=t[t[root].left].size)
	return th(x,t[root].left);//����ڵ�Ѱ�� 
	if(x<=t[t[root].left].size+t[root].num)
	return t[root].value;
	
	return th(x-t[t[root].left].size-t[root].num,t[root].right);
}

void insert(int x,int &root)
{
	if(x<t[root].value)//��������Ҷ 
	{
		if(t[root].left==0)//����Ҷû���� 
		{                                 
			t[t[root].left=++cnt]=node(0,0,1,x);//�����µĽڵ� 
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
	    t[root].num++;//���ӽڵ�ĸ��� 
	update(root);//���½ڵ� 
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
