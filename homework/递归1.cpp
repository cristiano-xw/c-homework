//�õݹ��д쳲���������
//C�������������Լ�<��ȥ�л�>�����ֵ��ù��̳�Ϊ�ݹ顣
#include<stdio.h>
int f(int n)
{
	if (n==1)
	{
		return 1;  //��������ֵΪ1 
	}
	if (n==2)
	{
		return 1;
	}
	else 
	{
		return (f(n-1)+f(n-2));
	}
 } 
int main(void)
{
	int m;
	m=f(6);
	printf("the result is %d",m);
	return 0;
	
}
 
 
 
 
 
 
 
 
 
 
 
