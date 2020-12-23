#include <stdio.h>
#include <math.h>
int main()
{
 int n,m,i,j;
 scanf("%d %d",&n,&m);
 char a[n][m+1];
 
 for(i=0;i<n;i++)
 {
 scanf("%s",a[i]); //对某一列数据的输入，且定义长度时加一储存换行符 
 }
 
 for(i=0;i<n;i++)
 {
 printf("%s\n",a[i]);
 }
 return 0;
 }
