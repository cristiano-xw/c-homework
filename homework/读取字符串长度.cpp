#include<stdio.h>
int strlen(const char *s);//���ú�������Ҫ���� 
int main(void)
{   char str[]="haoer wo er zi" ;
	int len;
	len = strlen (str);
	printf("%d",len);
	return 0;
 } 
 int strlen (const char *s)
 {
 	int len = 0,i;
 	for(i=0;s[i] != '\0';i++)
 	if (s[i] != ' ')
 	len ++;
 	return len;
  } 
