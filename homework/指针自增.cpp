#include<stdio.h>
#define N 10
int main(void)
{ 
   printf("please input 10 numbers ");
   int a[N],sum,*p,i;
   for(i=0;i<N;i++)
   scanf("%d\n",&a[i]);
   for(p=&a[0];p<&a[N];p++)
   sum += *p;	
   printf("%d",sum);
   return 0;
}
