#include<stdio.h>
#include<string.h>
struct num
{
	int a;
	char b;
};
int main(void)
{
	int m=0;
	scanf("%d",&m);
	struct num num[m];
    int i=0;
    for(i=0;i<m;i++)
    {
    	char s[10]="0";
    	scanf("%s",s);
    	int l=0;
    	l=strlen(s);
    	if(l==2&&s[0]!='-')  
    	{
    		num[i].a=s[0]-'0';
    		num[i].b=s[1];
		}
		
		if(l==2&&s[0]=='-')
		{
			sscanf(s,"%d",&num[i].a);
			num[i].b='+';
		}
		
		if(l==1)
		{
			num[i].a=s[0]-'0';
			num[i].b='+';
		}
		
		if(l==3)
		{
			num[i].b=s[2];
			sscanf(s,"%d",&num[i].a);  
		}
		
		
	}
	
	
	int max=0;
	int min=0;
	for(i=0;i<m;i++)
	{
		if(num[i].a>num[max].a)
		{
			max=i;
		}
		
		if(num[i].a<num[min].a)
		{
			min=i;
		}
	}
	
	int p=0;int q=0;
	p=num[max].a;
	q=num[min].a;
	int j=0;
	//printf("%d\n",p);
	//printf("%d\n",q);
	for(j=p;j>0;j--)  
	{   
	    for(i=0;i<m;i++)
	    {  
	        if(num[i].a<j)
	        {
	        	printf("  ");
	        	 
			}
	    	if(num[i].a>=j)
			{
				printf("%c ",num[i].b);  
			}  
		 
		}
		printf("\n");
		 
	}
	
	for(i=0;i<2*m-1;i++)
	{
		printf("-");
	}
	
	printf("\n");
	
	for(j=-1;j>=q;j--)
	{
		for(i=0;i<m;i++)
		{   
		    if(num[i].a>j)
		    {
		    	printf("  ");
			}
			
			if(num[i].a<=j)
			{
				printf("%c ",num[i].b);
				//printf("ok\n");
			}
		}
		printf("\n");
	}
	
	
	
	
	
	
	
	
	
	return 0;
}
