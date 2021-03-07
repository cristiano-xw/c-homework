#include<iostream>
#include<cstdio>
#include<cstring>
#define ZYS 1005
using namespace std;
int n,m,ans,st[ZYS],s,tuopu[ZYS][ZYS],de[ZYS],tt[ZYS],top;
bool is[ZYS],bo[ZYS];			//用andyzys大佬的名字做数组范围
int main() {
    scanf("%d %d",&n,&m);
    for(int i=1;i<=m;i++) {
        memset(is,0,sizeof(is));//is表示是否是停靠站
        scanf("%d",&s);
        for(int j=1;j<=s;j++)
            scanf("%d",&st[j]),is[st[j]]=true;
        for(int j=st[1];j<=st[s];j++)
            if(!is[j])			//枚举站点，若不是已停靠的就小于所有停靠站的等级
                for(int k=1;k<=s;k++)	//枚举已停靠站点
                    if(!tuopu[j][st[k]]) tuopu[j][st[k]]=1,de[st[k]]++;//tuopu[i][j]表示j>i的级别，如上
    }
    
    do{
        top=0;
        for(int i=1;i<=n;i++)
            if(de[i]==0&&!bo[i]) {
                tt[++top]=i,bo[i]=true;//开始将出度为0的点删掉
            }
        for(int i=1;i<=top;i++)
            for(int j=1;j<=n;j++)
                if(tuopu[tt[i]][j]) tuopu[tt[i]][j]=0,de[j]--;//去边去点
        ans++;
    } while(top);
    printf("%d",ans-1);//最后一次什么点都没有会多算一次（自行理解）
    return 0;
}
