#include<stdio.h>
#include<string.h>//���к�����ԭ�ʹ洢��<string.h>Դ�ļ��� 
int main(void)
{
	char dest[20]="hello ";
	char *src = "world";
	strcat(dest,src);
	printf("%s\n",dest); //%s���ָ�� 
	return 0;
}
 
