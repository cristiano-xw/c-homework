#include<stdio.h>//¶ÁÈ¡×Ö·û´®¿Õ¸ñÖ¸Õë°æ 
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

