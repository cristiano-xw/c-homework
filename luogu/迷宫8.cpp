#include<bits/stdc++.h>
using namespace std;
const int maxx=1010;
int n=0; int m=0; 
int color=0; int cnt=0;
int mp[maxx][maxx];
int vis[maxx][maxx];//�������
int ans[1000010];

int xx[]={0,0,1,-1};//�� 
int yy[]={1,-1,0,0};//�� 

void bfs(int x,int y)
{
	queue <int>h;
	queue <int>l;//��������
	
	h.push(x); l.push(y);
	vis[x][y]=color;//Ⱦɫ
	int i=0;
	while(h.empty()==0)
	{   
		for(i=0;i<4;i++)
		{
			int dx=h.front()+xx[i];
			int dy=l.front()+yy[i];
            if(dx>=1&&dx<=n&&dy>=1&&dy<=n&&vis[dx][dy]==0&&mp[dx][dy]!=mp[h.front()][l.front()])
            {
	            h.push(dx); l.push(dy);//������в���Ⱦɫ 
	            vis[dx][dy]=color;     
            }
		}
		
		h.pop();l.pop();cnt++;
	} 
} 


int main(void)
{
	cin>>n>>m;
	int i=0; int j=0;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			char x; cin>>x;
			if(x=='1')
		    mp[i][j]=1;
		    if(x=='0')
		    mp[i][j]=0;
		}
	}
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(vis[i][j]==0)//û�з��ʹ���
			{
				color++; //�����µĵ� 
				bfs(i,j);
				ans[color]=cnt;//cnt���ǳ��ִ��� 
				cnt=0;//color���ǳ���˳�� 
			} 
		}
	}
	
	for(i=1;i<=m;i++)
	{
		int x=0; int y=0;
		cin>>x>>y;
		cout<<ans[vis[x][y]]<<endl;
	}
	return 0;
}
