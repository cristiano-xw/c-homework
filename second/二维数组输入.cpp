#include <stdio.h>
#include <math.h>
int main()
{
 int n,m,i,j;
 scanf("%d %d",&n,&m);
 char a[n][m+1];
 
 for(i=0;i<n;i++)
 {
 scanf("%s",a[i]); //��ĳһ�����ݵ����룬�Ҷ��峤��ʱ��һ���滻�з� 
 }
 
 for(i=0;i<n;i++)
 {
 printf("%s\n",a[i]);
 }
 return 0;
 }
