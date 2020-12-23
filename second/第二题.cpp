//将一个字符串循环向右移M（M>=0）个字符位置，即将字符串A中的数据由（A0 A1……AN-1）变换为（AN-M …… AN-1 A0 A1……AN-M-1）（N是字符串的长度，
//最后M个数循环移至最前面的M个位置）。
//思路，将一个字符串的内容复制给另一个字符串，然后利用新的字符串的变量改变原来字符串变量 
//所以 fgets() 和 gets() 一样，最后的回车都会从缓冲区中取出来。
//只不过 gets() 是取出来丢掉，而 fgets() 是取出来自己留着。但总之缓冲区中是没有回车了！ 
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(void)
{   
	char a[200]="0"; //字符串一定要初始化 
	char b[200]="0";
	char c[200]="0"; 
	int n; 
	
	//printf("你要移动几位\n");
    scanf("%d",&n);
    getchar();
    //fflush(stdout);//吸收回车 
    fgets(a,201,stdin);
	//fflush(stdout);
	int len=0;
	len=strlen(a);  //读入了换行 且strlen还读入了空格因为空格是输入的 strlen读不读入空格取决于是否空格是被存储了 
	printf("%d\n",len);
	strncpy(b,a+len-n-1,n);
   // printf("%s\n",b);
	strncpy(c,a,len-n-1);
	//printf("%s\n",c);
	strcat(b,c);
	printf("%s",b);//多了个回车 
	 
	
} 
