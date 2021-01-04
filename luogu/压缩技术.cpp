#include<stdio.h>
#include<string.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int a[1111]={0};
	memset(a,0,sizeof(a));
	int i=0;
 
	for(i=1;i<=1111;i++)
	{   
	    char b;
		scanf("%d",&a[i]);
		b=getchar();
		if(b=='\n')
		{
			break;
		}
	}
	
	int k=0;
	k=i;//有几个指令
	int v=0; //统计一行有几个数 
	for(i=1;i<=k;i++)
	{  
	   int p=0;
	   if(i%2==1)
	   {
	   	for(p=1;p<=a[i];p++)
	   	{
	   	printf("0");
		 v++;
		 if(v==n)
		{
		printf("\n");
		v=0;
		}	
		}
	   }	
	   
	   if(i%2==0)
	   {
	   	for(p=1;p<=a[i];p++)
	   	{
	   	printf("1");
		v++;
		if(v==n)
		{
		printf("\n");
		v=0;	
		}	
		}
	   }
	   
	   
	} 
	
	
	return 0;
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

