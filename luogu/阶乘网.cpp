#include<stdio.h>
#include<string.h>
int f[5000];
void add(int shu,int t)//处理阶乘和的高精加
{        
        f[t]=f[t]+shu;
        f[t+1]=f[t+1]+f[t]/10000;
        f[t]=f[t]%10000;
}


int main()
{  
   int n=0;
   scanf("%d",&n);
   int a[5000] ;
   int i,j,k;
  
  a[1]=1;k=1;           //初始化阶乘和数组长度，从1开始
  for(i=1;i<=n;i++)  
  {  
  for(j=i;j<=k;j++)    //阶乘，（把每个部分都乘一下和一起乘，效果一样，我这里是每个都乘）
     a[j]=a[j]*i;
     
	 for(j=1;j<=k;j++)//处理阶乘进位是的高精加
     {  
	   a[j+1]=a[j+1]+a[j]/10000;
       a[j]=a[j]%10000;
     }
     if(a[k+1]>0) k++; //如果超过4为，长度+1
     
	 for(int j=1;j<=k;j++)  //高精，不多说（注意要在长度变化后运算）
     add(a[j],j); 
  }
  
  
  for(j=k;j>=1;j--)//倒序输出
  printf("%04d",f[j]);//注意要补零
  return 0;//结束程序
}
 
