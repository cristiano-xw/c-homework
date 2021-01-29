#include<bits/stdc++.h>
using namespace std;
const int maxx=1010;
int n=0; int m=0; 
int color=0; int cnt=0; 
char mp[maxx][maxx];
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
	            vis[dx][dy]=color;  //��Щ�㶼�ڵ�color�� ����˵���ǿ��Ե��ĵ���ͬ 
            }
		}
		
		h.pop();l.pop();cnt++;//cnt��ʾ �ò� ���Ե���ĵ� 
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
		 cin>>mp[i][j]; 
		}
	}
	
	//�������ÿһ��� ���������ͬ��color��ǣ���ʾ��ͬcolor���Ե���ĵ���һ���ģ�Ȼ��һֱ���������֧ 
	for(i=1;i<=n;i++)  //��ÿ��û�з��ʹ��ĵ㶼���й��� 
	{
		for(j=1;j<=n;j++)
		{
			if(vis[i][j]==0)//û�б�Ⱦɫ�� ˵�����µ���� 
			{
				color++;  //�����µĵ� 
				bfs(i,j);
				ans[color]=cnt;   
				cnt=0;  
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
