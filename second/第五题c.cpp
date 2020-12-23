#include<stdio.h>
#include<malloc.h>
int N; 
void build(int *a,int *tag,int n)
{
    if(n==N)
    {
        printf("--> ");
        for(int i=0;i<N;i++)
        if(tag[i]==1)
        printf("%d ",a[i]);
        printf("\n");
        return ;
    }
    tag[n]=1;//标记为1之后，开始建立下一个
    build(a,tag,n+1);
    tag[n]=0;//标记为0之后，开始建立下一个
    build(a,tag,n+1);
} 
int main()
{   
    int m=0;
    scanf("%d",&m);
    int j=0;
    for(j=0;j<m;j++)
    {
    scanf("%d",&N);
    int *a=(int *)malloc(sizeof(int)*N);
    for(int i=0;i<N;++i)
    scanf("%d",&a[i]); 
    int tag[N];    
    build(a,tag,0);
    
}
  return 0;
}
