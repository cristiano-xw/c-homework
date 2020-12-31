#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[10000]="0";
	int i=0;
    scanf("%s",a);
    
    
	int l=0;
	l=strlen(a);
	//printf("%d\n",l);
	
	if(l==1)
	{
		if(a[0]=='0')
		{
			printf("0");
		}
		
		if(a[0]!='0')
		{
			printf("%c",a[0]);
		}
	}
	
	int j=0;
	if(l!=1)
	{   
	
		if(a[0]>='0'&&a[0]<='9')
		{   
		    j=l-1;
		    while(a[j]=='0') 
		    {
		    	j--;
			}
			for(;j>=0;j--)
			{   
				printf("%c",a[j]);    
			}
		}
		
	   else
	   {
	   	
		   printf("%c",a[0]);//先把首位的符号输出
		   
		   j=l-1;
		   while(a[j]=='0')
		   {
		   	j--;
		   }
		   for(;j>0;j--)
		   {
			printf("%c",a[j]);
		   }
	   }
		
		
	}
	return 0;
	
}
