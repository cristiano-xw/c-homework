//蜜蜂要么爬一格，要么爬两格  要使用高精度加法 
#include<bits/stdc++.h>
using namespace std;
int a[1111][1111];
int len=1;

void f(int n)//表示终点  //这里用void是因为不论是int还是long int都不可以装下 
{
  int i=1;//从第一位开始存储 
  
  for(i=1;i<=len;i++)
  {
  	a[n][i]+=a[n-1][i]+a[n-2][i];
  	if(a[n][i]>=10)
  	{
  		a[n][i+1]+=a[n][i]/10;
  		a[n][i]=a[n][i]%10; 
	}
	
	if(a[n][len+1]>0)
	{
		 len++;
	}
	
  }
  
   
  
} 



int main(void)
{   
   int m=0; int n=0;
   scanf("%d%d",&m,&n); //其实相当于从第0格爬到第n-m格 而且要么一次爬行一格要么一次爬行两格
   
   a[1][1]=1; a[2][1]=2; 
   
   int i=0;
   for(i=3;i<=n-m;i++)
   {
   	f(i);
   }
   
   for(i=len;i>=1;i--)
   {
   	printf("%d",a[n-m][i]);
   }

	return 0;
}
