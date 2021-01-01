#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[333]="0";
	scanf("%s",a);
	int m=0;
	int n=0;
	int l=0;
	l=strlen(a);
	int i=0;
	for(i=0;i<l;i++)
	{
		if(a[i]=='b')
		{
			i=i+1;
			if(a[i]=='o')
			{
				i=i+1;
			if(a[i]=='y')
			{
			   i=i+1;
			}
			}
			m=m+1;
			i=i-1;
		}
		
		if(a[i]=='o'&&a[i-1]!='b') 
		{
			i=i+1;
			if(a[i]=='y')
			{
				i=i+1;
			}
			m=m+1;
			i=i-1;
		}
		
		if(a[i]=='y'&&a[i-1]!='o')  
		{
			m=m+1;
		}
		
		if(a[i]=='g')
		{
			i=i+1;
			if(a[i]=='i')
			{
				i=i+1;
				if(a[i]=='r')
				{
					i=i+1;
					if(a[i]=='l')
					{
						i=i+1;
					}
				}
				
			}
			
			n=n+1;
			i=i-1;
			
		}
		
		if(a[i]=='i'&&a[i-1]!='g')
		{
			i=i+1;
			if(a[i]=='r')
			{
				i=i+1;
				if(a[i]=='l')
				{
					i=i+1;
				}
			}
			n=n+1;
			i=i-1;
		}
		
		if(a[i]=='r'&&a[i-1]!='i')
		{
			i=i+1;
			if(a[i]=='l')
			{
				i=i+1;
			}
			n=n+1;
			i=i-1;
		}
		
		if(a[i]=='l'&&a[i-1]!='r')
		{
			n=n+1;
		}
		
		
	}
	
	printf("%d\n",m);
	printf("%d\n",n);
	return 0;
}
