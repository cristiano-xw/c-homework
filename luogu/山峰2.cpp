#include<bits/stdc++.h>
using namespace std;
int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int fl=0; int n=0; int ans1=0; int ans2=0;
struct Node 
{
    int x, y;
};

int mapp[1005][1005]; int vis[1005][1005];

int sf=0; int sg=0;
queue<Node> q;

void bfs(int x, int y)
{
    Node first;	
    first.x = x, first.y = y;
    vis[x][y] = 1;
    q.push(first);
    int col=mapp[x][y];
    
    while (!q.empty())
	 {
        Node cnt = q.front(); 
		q.pop();	 
        for (int i = 0; i <= 7; i++)
		 { 
            int nx = cnt.x + dx[i];
            int ny = cnt.y + dy[i];
            if(nx>=1&&nx<=n&&ny>=1&&ny<=n)
            {
            if (mapp[nx][ny]==col && !vis[nx][ny]) 
			{	 
                vis[nx][ny] = 1;
                q.push((Node){nx, ny});
            }
            
            else
		    {	 
                if (mapp[nx][ny] > mapp[cnt.x][cnt.y]) sf = 0;
                if (mapp[nx][ny] < mapp[cnt.x][cnt.y]) sg = 0;
            }
            }
            /*if(sf==0&&sg==0) 
            {
            	fl=1;
            	break;
			}*/
        }
        //if(fl==1) break;
    }
}

int main() 
{
    memset(vis,0,sizeof(vis));
    cin>>n;
    bool flag = 0;
    
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
	    {
            cin>>mapp[i][j];
            if (mapp[i][j] != mapp[1][1]) flag = 1;
        }
    
    if (flag==0)
    {	
        cout<<"1 1";
        return 0;
    }
    
    
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++) 
		{
            if (vis[i][j]==0)  
			{  
                sf = 1;sg = 1;
                fl=0;
                bfs(i, j);
                ans1 += sf;
                ans2 += sg; 
            }
        }
    }
        
    printf("%d %d\n", ans1, ans2);
    return 0;
}

