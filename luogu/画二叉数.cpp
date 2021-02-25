#include <bits/stdc++.h>
#define FOR(i,a,b) for(int i = a;i <= b;i++)
using namespace std;
const int N = 3100;
int len[20],m,n,pos[20],h[20];
char a[N][N];  //满二叉树数组，注意开大一

void prepare()
{
    int sum = 1;            //记录树枝长的前缀和
    len[1] = 1;pos[1] = 1;  //第一层树枝长为1，第一个节点水平位置为1
    FOR(i,2,m)
    {
        len[i] = sum + i-1; //递推式子
        sum += len[i];
        pos[i] = len[i] + 1;//顺便得到第i层第一个节点的水平位置
    }
    h[m] = 1;
    for(int i = m-1; i ;i --) h[i] = h[i+1]+len[i]+1;//得到第i层的竖直位置
    memset(a,' ',sizeof(a)); //全都铺满空格
}

//绘制
void draw(int x,int y,int depth)
{ 
    a[x][y] = 'o'; //画节点
    if(depth == 1) return;  //到叶子节点了，返回
    //开始画树枝，lx,ly定位左树枝，rx,ry定位右树枝
    int lx = x+1,ly = y-1,rx = x+1,ry = y+1;
    FOR(i,1,len[depth-1])
	{ //注意画的树枝长度为下一层的树枝长度
        a[lx][ly] = '/';
        a[rx][ry] = '\\';
        lx = lx+1,ly = ly-1,rx = rx+1,ry = ry+1;
    }
    draw(lx,ly,depth-1);   //画下一层节点
    draw(rx,ry,depth-1);
}

//删点
void destroy(int x,int y){
    a[x][y] = ' ';           //将该点置为空格
    if(a[x-1][y-1] == '\\') destroy(x-1,y-1);         //左上角
    if(a[x-1][y+1] == '/') destroy(x-1,y+1);          //右上角
    if(a[x+1][y-1] == '/' || a[x+1][y-1] == 'o') destroy(x+1,y-1); //左下角，因为往下还要删除孩子节点，要多一个判断
    if(a[x+1][y+1] == '\\'|| a[x+1][y+1] == 'o') destroy(x+1,y+1); //右下角同理
}

//打印
void print(){
    int height = h[1];          //第一层的竖直位置
    int width = 6 * (1<<(m-1)); //第一层的宽度（最宽）
    FOR(i,1,height){
        FOR(j,1,width)
            printf("%c",a[i][j]);
        printf("\n");
    }
}

int main(){
    cin>>m>>n;
    int i,j;
    prepare();
    draw(1,pos[m],m); //(1，pos[m])为根节点坐标，位于第m层
    
	while(n--)
	{
        cin>>i>>j;
        if(i > 10) continue;
        int x = h[m+1-i],y; //因为层的定义与题目不同，得转化一下
        //分第一层和其他层两种情况计算水平位置y
        if(i == m)
		{ 
            if(j & 1) y = pos[1] + j/2*6;
            else y = pos[1] + j/2*6 - 2;
        }
        else y = pos[m+1-i] + (j-1)* (2 * len[m+1-i] + 2); //可以手推
        destroy(x,y);
    }
    
    print();
    return 0;
}
