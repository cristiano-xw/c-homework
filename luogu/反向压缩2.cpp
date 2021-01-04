#include <stdio.h>
#include <string.h>
int main()
{
	char a[44444];
	char b[2222];
	scanf("%s",b);
	strcat(a,b);
	int l=0;
	l=strlen(b);
	int i=0;
	
	for(i=2;i<=l;i++)
	{
	scanf("%s",b);
	strcat(a,b); 
    }
    
    //printf("%s\n",a);
	 
    printf("%d ",l); 
    
    int l2=0;
    l2=strlen(a);
    int j=0;
    int v=0;
    int o=0;
    for(j=0;j<l2;)
    {
    	if(a[0]!='0'&&o==0)
    	{
    		printf("0 ");
    		o=1;
		}
    	while(a[j]=='0')  
    	{
    		j++;
    		v++;
		}
		if(v!=0)
		{
			printf("%d ",v);
			v=0;
		}
		
		while(a[j]=='1')
		{
			j++;
			v++;
		}
		if(v!=0)
		{
			printf("%d ",v);
			v=0;
		}
		
	}
    
	
    return 0;
}
