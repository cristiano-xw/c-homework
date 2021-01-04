#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[22222];
	memset(a,0,sizeof(a));
	int i=0;
	char b;
	int v=0;
	int g=0;
	
	for(i=1;i<=22222;)
	{   
		
		b=getchar();
		if(b!='\n')
		{
			a[i]=b;
			i++;
		}
		
		if(b=='\n'&&v==0) //每次都比较 太浪费时间了 
		{
			g=i-1;
			v=1;
		}
		
		//printf("%d\n",g);
		if(i==g*g+1)   
		{
			break;
		}
		
	}
    
    printf("%d ",g);
    i=1;
    int t=0;//用于计数 
    
    //for(i=1;i<=g*g;i++)
   //{
    //	printf("%c",a[i]);
	//}
	
    while(i<=g*g)
    {
    	while(a[i]=='0')
    	{
    		t++;
    		i++;
		}
		if(t!=0)
		{
			printf("%d ",t);
			t=0;
		}
		
		while(a[i]=='1')
		{
			t++;
			i++;
		}
		if(t!=0)
		{
			printf("%d ",t);
			t=0;
		}
		
	}
    
    return 0;
	
	
} 
