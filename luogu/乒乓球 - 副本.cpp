#include<stdio.h>
#include<string.h>
int main(void)
{
   int a=0;int b=0; //分别表示结果
   char s[1000000]="0";
   int i=-1;
   
   do 
   {
   	i++;
   	scanf("%c",&s[i]);
   }while(s[i]!='E'); //输入值
   
   int l=0;
   l=strlen(s);
   //printf("%d",l);
   
   //printf("%c\n",s[1]);
   
   for(i=0;i<l;i++)
   {
   	if(s[i]=='W')
   	{
   	a=a+1;	
   	//printf("ok");
	}
	
	if(s[i]=='L')
	{
	b=b+1;
	}
	
	if(a==11&&b<11)
	{
		printf("%d:%d",a,b);
		printf("\n");
		a=0;b=0;
	    continue;
	}
	
	if(b==11&&a<11)   
	{   
		printf("%d:%d",a,b);
		printf("\n");
		a=0;b=0;
		continue;
	}
	
	if(a>=11&&b>=11)
	{
		if(a-b>=2)
		{
		printf("%d:%d",a,b);
		printf("\n");
		a=0;b=0;
		continue;
		}
		
		if(b-a>=2)
		{
		printf("%d:%d",a,b);
		printf("\n");
		a=0;b=0;
		continue;
		}
		
	}
	
	if(s[i]=='E')
	{
	    printf("%d:%d",a,b);
	    a=0;b=0;
	    printf("\n");
	    printf("\n");
		break;
	}
	
   }
   
   
   for(i=0;i<l;i++)
   {
   	if(s[i]=='W')
   	{
   	a=a+1;	
   	//printf("ok");
	}
	
	if(s[i]=='L')
	{
	b=b+1;  
	}
	
	if(a==21&&b<21)
	{
		printf("%d:%d",a,b);
		printf("\n");
		a=0;b=0;
	    continue;
	}
	
	if(b==21&&a<21)   
	{   
		printf("%d:%d",a,b);
		printf("\n");
		a=0;b=0;
		continue;
	}
	
	if(a>=21&&b>=21)
	{
		if(a-b>=2)  
		{
		printf("%d:%d",a,b);
		printf("\n");
		a=0;b=0;
		continue;
		}
		
		if(b-a>=2)
		{
		printf("%d:%d",a,b);
		printf("\n");
		a=0;b=0;
		continue;
		}
		
	}
	
	if(s[i]=='E')
	{
	    printf("%d:%d",a,b);
	    
		break;
	}
	
   }
	
	
	
	return 0;
}
