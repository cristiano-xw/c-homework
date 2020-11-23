#include<stdio.h>
#include<string.h>//所有函数集原型存储在<string.h>源文件中 
int main(void)
{
	char dest[20]="hello ";
	char *src = "world";
	strcat(dest,src);
	printf("%s\n",dest); //%s输出指针 
	return 0;
}
 
