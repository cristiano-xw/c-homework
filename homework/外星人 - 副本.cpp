#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10]="0";
	char b[10]="0";
	int c =1;int d=1;
	scanf("%s",a);
	scanf("%s",b);
	
	int l1=0; int l2=0;
	l1=strlen(a);
	l2=strlen(b);
	int i=0;
	for(i=0;i<l1;i++)
	{
		a[i]=a[i]-'A'+1;
	}
	
	for(i=0;i<l2;i++)
	{
		b[i]=b[i]-'A'+1;
	}
	
	for(i=0;i<l1;i++)
	{
		c=c*a[i];
	}
	
	for(i=0;i<l2;i++)
	{
		d=d*b[i];
	}
	
	int m=0; int n=0;
	m=c%47;
	n=d%47;
	if(m==n)
	{
		printf("GO");
	}
	
	if(m!=n)
	{
		printf("STAY");
	}
	
	return 0;
}
