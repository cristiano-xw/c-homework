#include<stdio.h>
int count_spaces(const char str[]);
int main(void)
{    int count;
	char str[] = "hao er mei pp\n";	
	count = count_spaces( str );  //str ��ָ������ �����Խӡ��� 
	printf("%d",count);   //��count��ס�����Ľ�������COUNT���� 
	return 0;
 } 
 int count_spaces(const char s[])
 {  
 	int count = 0,i;
 	for( i=0;s[i] != '\0';i++)
 	if (s[i] != ' ') //''�б����ո� 
 	count++;
 	return count;
 }
