#include<stdio.h>
#include<string.h>
int main(void)
{   

    int n=0;
    scanf("%d",&n);//¥Ê»Î 
    getchar();
    char a[222]="0";
    int i=-1;
    do
    {
    	i++;
    	a[i]=getchar();
	}while(a[i]!='\n');
	
	int l=0;
	l=strlen(a);
	char b[222]="0";
	char c[222]="0";
	strncpy(b,a,l-1-n);
	strncpy(c,a+l-n-1,n);
	strcat(c,b);
	printf("%s",c);
	
	
	return 0;
} 
