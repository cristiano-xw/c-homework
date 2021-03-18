#include<bits/stdc++.h>
using namespace std;
#define N 16385
const int INF=99999999;
const int dx[]={0,0,1,-1};
const int dy[]={1,-1,0,0};
const int ddx[]={0,0,1,1,1,-1,-1,-1};
const int ddy[]={1,-1,-1,0,1,-1,0,1};
char mapp[N][N];
int n,m;
int dis[N][N];

queue<int> X;
queue<int> Y;

bool yes(int x,int y)
{
    return x>=1 && x<=n && y>=1 && y<=m && mapp[x][y]=='O';
}

void bfs(int sx,int sy)
{
    for(int i=1;i<=n;++i)
        for(int j=1;j<=m;++j)
            dis[i][j]=INF;
            
    X.push(sx); Y.push(sy);
    dis[sx][sy]=0;
    
    while(!X.empty())
    {
        int x=X.front();
        int y=Y.front();
        X.pop(); Y.pop();
        for(int i=0;i<4;i++)//四个方向
        {
            int xx=x+dx[i];
            int yy=y+dy[i];
            if(yes(xx,yy) && dis[xx][yy]==INF)
            {
                dis[xx][yy]=dis[x][y]+1;
                X.push(xx);
                Y.push(yy);
            }
        }
    }
}

int main()
{
    cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
		   cin>>mapp[i][j];
		}
	}
    
    int sx,sy,ex,ey;
    while(cin>>ex>>ey>>sx>>sy)
    {
        if(!ex&&!ey&&!sx&&!sy) break;
        
        bfs(sx,sy);
        int ans=dis[ex][ey];
        for(int i=0;i<8;++i)
        {
            int x=ex,y=ey;
            while(yes(x+ddx[i],y+ddy[i])) 
            {
                x+=ddx[i];
                y+=ddy[i];
                ans=min(ans,dis[x][y]);
            }
        }
        
        if(ans==INF) cout<<"Poor Harry"<<endl;
        else cout<<ans<<endl;
    }
    return 0;
}
