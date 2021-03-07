#include<bits/stdc++.h>
const long long num=2147483647;
const int maxn=10005;
const int maxm=500005;
using namespace std;
int n,m,s,tmp=0;
int dis[maxn],vis[maxn],head[maxm];

struct Edge
{
  int next,to,dis;
}t[maxm]; //�ṹ���ʾ��̬�ڽӱ�

void add(int now,int to,int dis) //�ڽӱ�ͼ
{ //���������ݽṹ���ϵı�׼���룬�������鿴����
  t[++tmp].next=head[now];  //��ʽ�洢��һ������
  t[tmp].to=to;  //��ǰ�ڵ��� 
  t[tmp].dis=dis; //�����ߵľ���
  head[now]=tmp; //��¼��һ�εĳ������
}

void spfa()
{
  queue<int> q; //spfa�ö��У���������STL�ı�׼����
  for(int i=1; i<=n; i++) 
  {
    dis[i]=num; //��Ȩͼ��ʼ��
    vis[i]=0; //��¼��i�Ƿ��ڶ����У�ͬdijkstra�㷨�е�visited����
  }
  
  q.push(s); dis[s]=0; vis[s]=1; //��һ��������ӣ����б��
  while(!q.empty())
  {
    int u=q.front(); //ȡ������
    q.pop(); vis[u]=0; //���ӱ��
    for(int i=head[u]; i; i=t[i].next) //�ڽӱ��������������ˣ�Ҳ����vector���棩
    {
      int v=t[i].to; 
      if(dis[v]>dis[u]+t[i].dis) //��������·�͸���
      { 
        dis[v]=dis[u]+t[i].dis;
        if(vis[v]==0) //δ��������
        {
          vis[v]=1; //������
          q.push(v);
        }
      }
    }
  }
}

int main()
{
  cin>>n>>m>>s;
  for(int i=1; i<=m; i++)
  {
    int f,g,w;
    cin>>f>>g>>w; 
    add(f,g,w);   //��ͼ������ͼ��һ�α߾Ϳ�����
  }
  
  spfa(); 
  for(int i=1; i<=n; i++)
    if(s==i) cout<<0<<" "; //����ǻص��Լ���ֱ�����0
      else cout<<dis[i]<<" "; //�����ӡ��̾���
  return 0;
} //����
