#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[101];
	char b[101];
	scanf("%s",a);
	int l,i;
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]>='a'&&a[i]<='z') 
		{
			b[i]=a[i]+'A'-'a';//�����ַ�����ASCII��洢������ֻ��Ҫ��ȥA�ټ���a���� 
		}
		else b[i]=a[i];
	}
    printf("%s",b);
}
