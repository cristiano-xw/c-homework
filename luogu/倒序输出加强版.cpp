#include<stdio.h>
#include<string.h>
int main(void)
{
	int v=0; //作为标记
	char a[1111]="0";
	scanf("%s",a);
	int l=0;
	l=strlen(a);
	int i=0;   
	                                 
	for(i=0;i<l;i++)
	{
		if(a[i]=='.')
		{
			v=1; //标记为小数 
			break;
		}
		
		if(a[i]=='/')
		{
			v=2;//标记为分数 
			break;
		}
		
		if(a[i]=='%')
		{
			v=3;
			break;
		}
	}
	
		//a[i]分别为。 / %                       
		
		int j=0;
		if(v==0)
		{    
		    if(a[0]!='0')
		    {
		    int u=0;
			for(j=l-1;j>=0;j--)
			{   
			    if(u==0)
			    {
				while(a[j]=='0')
				{
					j--;
				}
			    }
			    
			    u=1;
			    
			    if(u==1)
			    {
			    	printf("%c",a[j]);
				}
				
			}
		   }
		   else
		   {
		   	printf("0");
		   }
		}
		
		if(v==1)
		{   
		    int u=0;  int v=0;
			for(j=i-1;j>=0;j--)
			{
				if(u==0)
				{
					while(a[j]=='0')
					{
						j--;
					}
					if(a[0]=='0'&&a[i-1]=='0')
					{
						printf("0");
						v=1;
					}
				}
				
				u=1;
				if(u==1&&v!=1)
				{
					printf("%c",a[j]);
				}
			}
			
			printf(".");
			u=0; v=0;
			
			int s=0;
			for(j=i+1;j<l;j++)
			{
				if(a[j]=='0')
				{
					s++;
				}
				
				if(a[j]!='0')
				{
					break;
				}
			}
			
			if(s==l-i-1)
			{
				printf("0");
			}
			
			if(s!=l-1-i)
			{
			 for(j=l-1;j>i+s;j--)
			{
				
				printf("%c",a[j]);
				
			}
		}
			}
	   
	   
	   
	    	if(v==2)
		  {   
		    int u=0;  int w=0;
			for(j=i-1;j>=0;j--)
			{
				if(u==0)
				{
					while(a[j]=='0')
					{
						j--;
						w++;
					}
					if(w==i)
					{
						printf("0"); 
					}
				}
				
				
				
				u=1;
				if(u==1&&w!=i)   
				{
					printf("%c",a[j]);
				}
			}
			
			printf("/");
			u=0;
			for(j=l-1;j>i;j--)
			{
				if(u==0)
				{
					while(a[j]=='0')
					{
						j--;
					}
				}
				u=1;
				if(u==1)
				{
					printf("%c",a[j]);
				}
				
				
			}
			}
	  
	       if(v==3)
	     {   
	        int u=0;int p=0;
	     	for(j=l-2;j>=0;j--)
	     	{
	     		if(u==0)
	     		{
	     			while(a[j]=='0')
	     			{
	     				j--;
	     				p++;
					 }
					
				   if(p==l-1)
				   {
				   	printf("0");
				   }
				}
				
				u=1;
				if(p!=l-1)
				{
				printf("%c",a[j]);  
			    }
			}
			char k;
			k='%';
			printf("%c",k);
		 }
		 
		 
		
		
		
	
	return 0;
}
 
