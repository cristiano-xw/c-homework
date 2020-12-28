#include<stdio.h>
#include<string.h>
int main()
{   
     char a[105][105];
    
    int n,m;
     
    scanf("%d %d",&n,&m);
    
    
    for(int i=1;i<=n;i++)//读入地图 
    {
        for(int j=1;j<=m;j++) 
        {   char k;
            scanf("%c",&k);
            if(k=='*') a[i][j]=1;//如果是地雷就将这个点设为一 
        }
    }
    
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j]==1) printf("*"); //如果是地雷不用输出数字 
            else
            {
                printf("%d",a[i+1][j+1]+a[i+1][j-1]+a[i+1][j]+a[i][j+1]+a[i][j-1]+a[i-1][j+1]+a[i-1][j]+a[i-1][j-1]);
                //将旁边的雷加起来输出 
            }
        }
        printf("\n");
    }
    return 0;//愉快的结束了主程序 
}
