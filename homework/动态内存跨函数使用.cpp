#include<stdio.h>
#include<malloc.h>
void f(int * *q)  //q ��һ��ָ�����  *q��p 
{
	*q = (int *)malloc(sizeof(int));//��*p��p�������ĸ��ֽڵĿռ�
	**q=5; //**q��Ϊ*p 
}
int main(void)
{
	int * p;
	f(&p);//��p�ĵ�ַ���͸�*q *q������p�ĵ�ַ��&p�� 
	printf("%d",*p);
	return 0;
	 
}
//���ú���ʱ��������ı�������һ��Ҫһ�¡� 
//���ú����ı�������������ֵʱ������Ҫ���͵�ַ�� 
