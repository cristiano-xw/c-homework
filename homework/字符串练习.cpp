#include<stdio.h>//��ȡ�ַ����ո�ָ��� 
int main(void)
{
	char str[]="hello world\n";
	char *p;
	p=str;
	int count = 0;
	for (p!='0\';p++)
	if(p == ' ')
	count ++;
	printf("%d",count) ;
	 
}

