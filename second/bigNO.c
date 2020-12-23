#include<stdio.h>
#include<string.h>     /*程序中用到了字符串处理函数，此处要加上此条命令*/
int main()
{
 long b;
 int i,i1,i2,j,k,n,N,t=0,a[256];
 char s[128];
 printf("please input a large number:\n");
 scanf("%s",s);
 for(i=0;i<=255;i++)
 {
 a[i]=0;
 }                    /*初始化数组a*/
 n=strlen(s);        /*将数组s的长度赋给n*/
 for(i1=0,k=n-1;i1<n;i1++,k--)   /*二重循环控制按位交叉相乘*/
 {
  for(i2=0,j=n-1;i2<n;i2++,j--)
  {
  i=i1+i2;
   b=a[i]+(s[k]-48)*(s[j]-48)+t;
   a[i]=b%10;
   t=b/10;
  }
  while(t>0)
  {i++;
   a[i]=a[i]+t%10;
   t=t/10;
  }              /*处理最高位有进位的情况*/
  N=i;
 }
 printf("\n the result is: \n ");
 for(i=N;i>=0;i--)
 {printf("%d",a[i]);
 }                    /*按从高位到低位的顺序输出结果*/
 getch();
}
