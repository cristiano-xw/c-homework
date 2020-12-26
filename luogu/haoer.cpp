#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void)
{
	int n,i,k,m,line;
	char x[100];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{   
	    memset(x,0,sizeof(x));
		scanf("%s",x);
		m=atoi(x);
		printf("%d:\n",m);
	for(line=1;line<=7;line++)
		{
			for(k=0;k<strlen(x);k++)
			{   
				if(x[k]=='0')
				{
					if(line==1||line==7)
					{
					 	printf("*****");
					}
					if(line>=2&&line<=6)
					{
						printf("*   *");
					}	
				}
				if(x[k]=='1')
				{
                  printf("*");	
				}
				if(x[k]=='2')
				{
				  	if(line==1||line==4||line==7)
					{
						printf("*****");
					}
					if(line==2||line==3)
					{
						printf("    *");
					}
					if(line==5||line==6)
					printf("*    ");
				}
				if(x[k]=='3')
				{
				 	if(line==1||line==4||line==7)
					{
						printf("*****");
					}
                    if(line==2||line==3||line==5||line==6)
                    {
                     printf("    *");	
					}
				}
				if(x[k]=='4')
				{
					if(line>=1&&line<=3)
					{
						printf("*   *");
					}
					if(line==4)
					{
						printf("*****");
					}
					if(line>=5&&line<=7)
					{
						printf("    *");
					}

				}
				if(x[k]=='5')
				{
					if(line==1||line==4||line==7)
					{
						printf("*****");
					}
					if(line==5||line==6)
					{
						printf("    *");
					}
					if(line==2||line==3)
					{
						printf("*    ");
					}
				}
				if(x[k]=='6')
				{
                   if(line==1||line==4||line==7)
					{
						printf("*****");
					}
				   if(line==2||line==3)
					{
						printf("*");
					}
					if(line==5||line==6)
					{
						printf("*   *");
					}
				}
				if(x[k]=='7')
				{
					if(line==1)
					{
						printf("*****");
					}
                    else
                    {
                    	printf("*");
					}
				}
				if(x[k]=='8')
				{
				if(line==1||line==4||line==7)
					{
						printf("*****");
					}
                  else
                  {
                  	    printf("*   *");
				  }
				}
				if(x[k]=='9')
				{
				   if(line==1||line==4||line==7)
					{
						printf("*****");
					}
					if(line==2||line==3)
					{
					    printf("*   *")	;
					}
                    if(line==5||line==6)
                    {
                    	printf("    *");
					}
				}
				printf("  ");		
			}
			printf(" ");
			printf("\n");	
		}
	}
	return 0;	
}
