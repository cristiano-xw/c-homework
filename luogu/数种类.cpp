#include<stdio.h>
int f[1001]={0,1};
void count(int n)
{
    int i,j;
    for(i=2;i<=n;i++)
    {
        for(j=1;j<=i/2;j++)
        {
         f[i]=f[i]+f[j];
         f[i]=f[i]+1; 
     }
    }
}
int main()  
{
 int n;
 scanf("%d",&n);
 count(n);
 printf("%d",f[n]);
 return 0;
}
