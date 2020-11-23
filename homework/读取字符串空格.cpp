#include<stdio.h>
int count_spaces(const char str[]);
int main(void)
{    int count;
	char str[] = "hao er mei pp\n";	
	count = count_spaces( str );  //str 即指代数组 不可以接【】 
	printf("%d",count);   //用count接住函数的结果，输出COUNT即可 
	return 0;
 } 
 int count_spaces(const char s[])
 {  
 	int count = 0,i;
 	for( i=0;s[i] != '\0';i++)
 	if (s[i] != ' ') //''中必须打空格 
 	count++;
 	return count;
 }
