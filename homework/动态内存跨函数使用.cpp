#include<stdio.h>
#include<malloc.h>
void f(int * *q)  //q 是一个指针变量  *q是p 
{
	*q = (int *)malloc(sizeof(int));//给*p（p）分配四个字节的空间
	**q=5; //**q即为*p 
}
int main(void)
{
	int * p;
	f(&p);//将p的地址发送给*q *q里存的是p的地址（&p） 
	printf("%d",*p);
	return 0;
	 
}
//调用函数时，函数体的变量类型一定要一致。 
//调用函数改变主函数变量的值时，必须要发送地址。 
