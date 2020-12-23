#include<stdio.h>
#include<string.h>
int main(void)
{   
    int c=0;
	char s[100]="0";
	int l=0;
	scanf("%s",s);
	//l=strlen(s);
	sscanf(s,"%d",&c);
	printf("%d",c);
	printf("%s",s);
	//printf("%d",l);
	return 0;
}
