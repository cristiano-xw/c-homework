#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[111]="0";
	scanf("%s",a);
	int l=0;
	l=strlen(a);
	int i=0;
	for(i=0;i<l;i++)
	{
		if(a[i]>='a'&&a[i]<='z')
		{
			a[i]=a[i]+'A'-'a';
		}
	}
	
	for(i=0;i<l;i++)
	{
		printf("%c",a[i]);
	}
	return 0;
}
