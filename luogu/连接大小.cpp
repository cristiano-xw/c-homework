#include<bits/stdc++.h> 
using namespace std;

const int maxn=30,maxm=905;

struct Node
{
	int v;
	Node *next;
}*h[maxn],pool[maxm];

int tot;
int du[maxn];
int q[maxn],head,tail;
int n,m;

void addEdge(int u, int v)
{
	Node *p=&pool[++tot];
	p->v=v; p->next=h[u]; h[u]=p;
}

int toposort() //返回值为1代表成立，返回值为0代表条件不足，返回值为-1代表条件矛盾
{
	int temp=0;
	int f=0;
	for(int i=1;i<=n;i++)
	{
		if(du[i]==0)
		{
			q[tail++]=i;
			temp++;
	    } 
    }
    
    if(temp>1)
    	f=1;
    while(head<tail)
    {
    	temp=0;
    	int u=q[head++];
    	for(Node *p=h[u];p;p=p->next)
    	{
    		du[p->v]--;
    		if(du[p->v]==0)
    		{
    			q[tail++]=p->v;
    			temp++;
    		}
		}
		if(temp>1)
			f=1;
    }
    if(tail!=n)
    	return -1;
    else
		if(f==1)
			return 0;
	else return 1;
}	

struct Edge
{
	int u,v;
}a[maxm];

int main()
{
	cin>>n>>m;
	for(int i=1;i<=m;i++)
	{
		char aa,bb,cc;
		cin>>aa>>bb>>cc;
		a[i].u=aa-'A'+1; a[i].v=cc-'A'+1;//将大写字符转换为数字 
    }
    for(int i=1;i<=m;i++)
    {
    	addEdge(a[i].u,a[i].v);
    	head = tail = 0;
    	memset(du,0,sizeof(du));
    	for(int j=1;j<=i;j++) du[a[j].v]++;
    	int flag=toposort();
    	
		if(flag==1)
    	{
    		cout<<"Sorted sequence determined after "<<i<<" relations: ";
			for(int j=0;j<=n-1;j++)
			{
				cout<<(char)(q[j]+'A'-1);
		    }
		    cout<<'.'<<endl;
		    return 0;
        }
        
        else if(flag==0) continue;
        else
        {
        	cout<<"Inconsistency found after ";
        	cout<<i<<" relations."<<endl;
        	return 0;
        }
    }  
    cout<<"Sorted sequence cannot be determined."<<endl;
	return 0;
}

