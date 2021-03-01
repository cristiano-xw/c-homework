#include<bits/stdc++.h>
using namespace std;

int read()
{
	int w=1; int q=0;
	char ch=' ';
	while(ch!='-'&&(ch<'0'||ch>'9'))  ch=getchar();
	if(ch=='-')   w=-1,ch=getchar();
	while(ch>='0'&&ch<='9')
	{
		q=q*10+ch-'0';
		ch=getchar();
	}
	return w*q;
}


struct node
{
	int id; int v; int flag;
}a[55555];

bool cmp(node x,node y)
{   
    if(x.v>y.v) 
	return 1;
	if(x.v==y.v&&x.id<y.id)
	return 1;
	
	return 0;
	
}

bool cmd(node x,node y)
{    
	return x.id<y.id;
}

int main()
{
	int t=0; int n=0; int pd=0; int i=0; int k=0; int j=0;
	t=read();
	while(t--)
	{
		cin>>n; 
		for(i=1;i<=n;i++)
		{
			a[i].id=i;
			a[i].flag=0;//初始化标记物为0 
			a[i].v=read();
		}
		
		sort(a+1,a+n+1,cmp);//按照从大到小排序
		
		for(i=1;i<=n;i+=pd)
		{   
		    pd=1;
			for(j=i+1;j<=n;j++)
			{
				if(a[j].v==a[i].v)
				{
					a[j].flag=1;//做上标记
					pd++;
				}
				else break;
			}
		} //做上标记去掉重复的过程
		
		sort(a+1,a+n+1,cmd);
		
		for(i=1;i<=n;i++)
		{
			if(a[i].flag==0) cout<<a[i].v<<" ";
		}
		cout<<endl;
	}
	return 0;
}

