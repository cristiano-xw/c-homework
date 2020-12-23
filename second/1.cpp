#include<stdio.h>
#include<string.h>
int main(void)
{   int l=0;
	char a[100];
	char b[100];
	int i=0;
	
   	for(i=0;i<100;i++)
   	{
   		scanf("%d",&a[i]);
   		if(a[i]==0)
   		{
   			break;
		}
	}
	
	 l=strlen(a);
	
    l=strlen(a);
    for(i=0;i<l;i++)
    {
    	b[i]=a[l-1-i];
	}
    for(i=0;i<l;i++)
    printf("%d ",b[i]);
}
