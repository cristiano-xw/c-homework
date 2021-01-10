#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10000]="0";
	int g=0;
	for(g=0;g<1000;g++)
	{
		scanf("%c",&a[g]);
		
		if(a[g]=='\n')
		{
			break;
		}
	}
	  
	int l=0;
	l=strlen(a)-1;
	int i=0;
	int v=0;
	//printf("%d",l);
	//printf("%c",a[0]);
	
	for(i=0;i<l;i++)
	{  
	   int j=0; int e=0;
	   char b[10000]="0";//À´×°Ó¢ÎÄ×Ö·û
	   while(a[i]>='A'&&a[i]<='Z'||a[i]>='a'&&a[i]<='z')
	   {
	   	   b[j]=a[i];
	   	   i++;
	   	   j++;
	   }	
	   
	   for(e=j-1;e>=0;e--)
	   {
	     printf("%c",b[e]);
	   } 
	   
	   printf("%c",a[i]);
	    
	} 
	return 0;
}
