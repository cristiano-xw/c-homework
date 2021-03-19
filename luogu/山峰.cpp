#include <bits/stdc++.h>
using namespace std;

struct Node 
{
    int x,y;
    Node(int i=0,int j=0)
	{
        x=i;y=j;    
	}
};

queue <Node> q;

int dx[10]={0,0,0,1,1,1,-1,-1,-1},dy[10]={0,1,-1,0,-1,1,0,-1,1},sf,sg,p,n;
int mapp[1007][1007],ans;
bool v[1007][1007],flag;

void bfs(int sx,int sy)
{
    int col=mapp[sx][sy]; 
    q.push(Node(sx,sy));
    while(!q.empty())
	{
        Node fg=q.front();
        for(int i=0;i<8;i++){
            int tx=fg.x+dx[i];
            int ty=fg.y+dy[i];
            if(tx>=1&&tx<=n&&ty>=1&&ty<=n&&!v[tx][ty]&&mapp[tx][ty]==col)
			{
                v[tx][ty]=1;
                q.push(Node(tx,ty));
                if(!flag) 
                {
                    for(int j=0;j<8;j++)
					{ 
                        int xx=tx+dx[j];
                        int yy=ty+dy[j];
                        if(xx>=1&&xx<=n&&yy>=1&&yy<=n&&mapp[xx][yy]!=col){
                            if(p==0) p=mapp[xx][yy];
                            else if((p-col>0&&mapp[xx][yy]-col<0)||(p-col<0&&mapp[xx][yy]-col>0)) 
							{
                                flag=1;
                                break;
                            }
                        }
                    }
                } 
            }           
        }
        q.pop();    
    } 
    
    if(p<col) sf++; 
    else sg++;
}

int main()
{
    cin>>n;
    for(int i=1;i<=n;i++)
    {
    	for(int j=1;j<=n;j++)
    	{
    		cin>>mapp[i][j];
		}
	}
         
	for(int i=1;i<=n;i++)
        for(int j=1;j<=n;j++)
            if(!v[i][j])
			{
                v[i][j]=1;
                p=0;flag=0;//初始p为-1，代表还没找到一个周围的点，p就是记录周围的点的，只要去记录第一个点，就能确定它是山峰还是山谷，或者啥也不是
                bfs(i,j);
                ans++;
            } 
			   
    if(ans==1) printf("1 1");//注意特判，题目有说
    else printf("%d %d",sf,sg);
    return 0; 
}
