#include<stdio.h>
#include<string.h>
int main(void)
{
	int a=0,b=0,c=0;
	char s[256]="0";
	scanf("%s",s);  //数字类型为字符型 
	int l=0;
	l=strlen(s);
	
	int i=0;
	for(i=0;i<l;i++)
	{
		if(s[i]==':')
		{
			if(s[i+1]=='=')
			{
				if(s[i+2]>='0'&&s[i+2]<='9')  //是数字的情况 
				{
					if(s[i-1]=='a')
					{
						a=s[i+2]-'0';
					}
					
					if(s[i-1]=='b')
					{
						b=s[i+2]-'0';
					}
					
					if(s[i-1]=='c')
					{
						c=s[i+2]-'0';
					}
				}
				
				if(s[i+2]>='a'&&s[i+2]<='c')
				{
				    if(s[i-1]=='a')
				    {
				    	if(s[i+2]=='b')
				    	{
				    		a=b;
						}
						
						if(s[i+2]=='c')
				    	{
				    		a=c;
						}
						
					}
					
					 if(s[i-1]=='b')
				    {
				    	if(s[i+2]=='a')
				    	{
				    		b=a;
						}
						
						if(s[i+2]=='c')
				    	{
				    		b=c;
						}
						
					}
					
					 if(s[i-1]=='c')
				    {
				    	if(s[i+2]=='a')
				    	{
				    		c=a;
						}
						
						if(s[i+2]=='b')
				    	{
				    		c=b;
						}
						
					}
				}
				
				
			}
		}
	}
	
	printf("%d %d %d",a,b,c);
	return 0;
}
