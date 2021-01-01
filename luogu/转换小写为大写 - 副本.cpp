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
			b[i]=a[i]+'A'-'a';//所有字符都以ASCII码存储，所以只需要减去A再加上a即可 
		}
		else b[i]=a[i];
	}
    printf("%s",b);
}
