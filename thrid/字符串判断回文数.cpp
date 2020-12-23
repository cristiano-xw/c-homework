#include<stdio.h>
#include<string.h>
char huiwen(char s[100])
{
 int l=0;
 l=strlen(s);
 //printf("%d",l);
 
 int i=0;
 int r=0;//r作为标记 
 if(l%2==0)
 {
 for(i=0;i<l/2-1;i++)
 {
 	if(s[i]!=s[l-i-1])
 	{
 		
 		r=1;
 		return 0;
	}
 }
 if(r==0)
 {
 	return 1;
 }
 }
 
 if(l%2!=0)
 {
 	for(i=0;i<(l-1)/2-1;i++)
 	{
 		if(s[i]!=s[l-i-1])
 		{
 		
 		r=1;
		return 0;
		}
	}
	if(r==0)
	{
		return 1;
	}
 }
} 
int main(void)
{
	char s[100];
	scanf("%s",s);
	printf("%d",huiwen(s));
	return 0;
}












