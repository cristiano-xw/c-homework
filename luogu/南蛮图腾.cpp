//大小为n 就表示有n层;
#include<bits/stdc++.h>
using namespace std;
int main(void)
{ 
char a[2][10]={" /\\ ",
               "/__\\"};//分两行存下基本图形  矩形长为4高为2 

 //printf("%s\n",a[0]);
 //printf("%s",a[1]);
 
 int n=0; scanf("%d",&n);//记住以基础矩形为单位输出
 int h=0;
 h=pow(2,n)-1;//高
                                    
 int i=0; int j=0;
 for(i=h;i>=0;i--)
 {
 	for(j=0;j<=4*pow(2,n-1)-1;j++)
 	{
 		
	}
 } 
 
 
 
 
 	
}
