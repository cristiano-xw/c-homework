#include<cstdio>
#include<vector>
#include<cstring>
#define N 505

using namespace std;


struct node{int dis,nex;}f;
vector<node> mp[N]; //vector存图，下标是边的起始点，dis边权，nex是边的终点(蒟蒻不会链式前向星5555)
int sum[N],fl[N]={0},flag;

void spfa(int k) 
{  
    if (fl[k]==1) {fl[k]=0; flag=1; return;} //只要一个点第二次走到就说明有负环了，标记退出
    fl[k]=1;  
    if (!mp[k].empty())
    {
        For(i,0,mp[k].size()-1)
            if (sum[mp[k][i].nex]>mp[k][i].dis+sum[k])
			{   
                sum[mp[k][i].nex]=mp[k][i].dis+sum[k];
                spfa(mp[k][i].nex);// if (flag==1) {fl[k]=0; return;} //有负环就一层层退，注意清空数组标记
            }
   }
    fl[k]=0; //取消这个点的标记
}

int main()
{ 
    int _=read(),m,n=0,w,x,y,z,k;
    while(_--)
	{
        For(i,1,n) mp[i].clear(); //清空vector
        n=read(),m=read(),k=read();
        
		For(i,1,m)
		{ //存正边，无向边要存2次
            x=read(),y=read(),z=read();
            f.dis=z; f.nex=y; mp[x].push_back(f);
            f.nex=x; mp[y].push_back(f);
        }
        
        For(i,1,k)
		{ //存负边，注意边权取负
            x=read(),y=read(),z=read();
            f.dis=-z; f.nex=y; mp[x].push_back(f);
        }
        
        memset(sum,99999999,sizeof(sum)); //多组数据，清空最短路数组
        flag=0;
        For(i,1,n) {spfa(i); if (flag) break;} //没有原点，所以每个点当起始点找一遍，找到一个负环就退出
        
		if (flag==1) printf("YES\n"); else printf("NO\n");
	    
    }
    return 0;
} 
