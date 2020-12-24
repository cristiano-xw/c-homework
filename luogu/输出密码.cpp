#include<stdio.h>
#include<string.h>
int main(void)
{ 
  int i=0,l=0,n;
  scanf("%d",&n);
  char a[51]="0";
  char b[51]="0";
  scanf("%s",a);
  l=strlen(a); 
  for(i=0;i<l;i++)
  {
    if (a[i]+n<=122)
    {
      b[i]=a[i]+n;
	}
  	if(a[i]+n>122)
  	{
  	  b[i]=a[i]+n-26;
	}
  }
  printf("%s",b);
} 
