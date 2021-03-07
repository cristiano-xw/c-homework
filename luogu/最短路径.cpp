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
}t[maxm]; //结构体表示静态邻接表

void add(int now,int to,int dis) //邻接表建图
{ //以下是数据结构书上的标准代码，不懂翻书看解释
  t[++tmp].next=head[now];  //链式存储下一条出边
  t[tmp].to=to;  //当前节点编号 
  t[tmp].dis=dis; //本条边的距离
  head[now]=tmp; //记录下一次的出边情况
}

void spfa()
{
  queue<int> q; //spfa用队列，这里用了STL的标准队列
  for(int i=1; i<=n; i++) 
  {
    dis[i]=num; //带权图初始化
    vis[i]=0; //记录点i是否在队列中，同dijkstra算法中的visited数组
  }
  
  q.push(s); dis[s]=0; vis[s]=1; //第一个顶点入队，进行标记
  while(!q.empty())
  {
    int u=q.front(); //取出队首
    q.pop(); vis[u]=0; //出队标记
    for(int i=head[u]; i; i=t[i].next) //邻接表遍历，不多解释了（也可用vector代替）
    {
      int v=t[i].to; 
      if(dis[v]>dis[u]+t[i].dis) //如果有最短路就更改
      { 
        dis[v]=dis[u]+t[i].dis;
        if(vis[v]==0) //未入队则入队
        {
          vis[v]=1; //标记入队
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
    add(f,g,w);   //建图，有向图连一次边就可以了
  }
  
  spfa(); 
  for(int i=1; i<=n; i++)
    if(s==i) cout<<0<<" "; //如果是回到自己，直接输出0
      else cout<<dis[i]<<" "; //否则打印最短距离
  return 0;
} //结束
