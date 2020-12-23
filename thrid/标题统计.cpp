#include<stdio.h>
#include<string.h>
int main(void)
{   
	char s[100]="0";
	gets(s);
	int len=0;
	int i=0;
	int l=0;
	l=strlen(s);
	for(i=0;i<l;i++)
	{
	 if(s[i]>='a'&&s[i]<='z')
	 {
	 	len=len+1;
	 }
	 if(s[i]>='A'&&s[i]<='Z')
	 {
	 	len=len+1;
	 }
	 if(s[i]>='0'&&s[i]<='9')
	 {
	 	len=len+1;
	 }
	  
	} 
	printf("%d",len);
	return 0;
	
}
