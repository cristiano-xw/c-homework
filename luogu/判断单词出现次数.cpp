#include<stdio.h>
#include<iostream> 
using namespace std;
#include<string.h>
int main(void)      
{  
   char a[4][11111];
   cin.getline(a[0],11111);
   cin.getline(a[1],11111);
   cin.getline(a[2],11111);
   cin.getline(a[3],11111);
    
    int l[4]={0};
    l[0]=strlen(a[0]); l[1]=strlen(a[1]); l[2]=strlen(a[2]); l[3]=strlen(a[3]);
     
    int i=0;
    int j=0;
    int x[27]={0};//储存出现的次数 
    for(i=0;i<27;i++)
    {
    	x[i]=0;
	}
           
    for(i=0;i<4;i++)  
    { 
    	for(j=0;j<l[i];j++)
    	{
    	  x[(int)(a[i][j]-'A')]++;           
		}
	}
	
	
	//for(i=0;i<26;i++)
	//{
	//	printf("%d ",x[i]);
//	}
	//printf("\n");
	
	int max=0;
	for(i=0;i<26;i++)
	{
		if(x[i]>x[max])
		{
			max=i;
		}
	}
	
	int h=0;
	h=x[max];//最高的             
	
	for(i=h;i>=1;i--)    
	{
		for(j=0;j<25;j++)
		{
			if(x[j]>=i) 
			{
				printf("* ");
			}
			
			else
			{
				printf("  ");
			}
		}
		
		if(j==25)
		{
			if(x[j]>=i)
			{
				printf("*");
			}
		}
		printf("\n");
	}
	
	
	for(i=0;i<25;i++)
	{
		printf("%c",i+'A');
		printf(" ");
	}
	
	printf("Z") ;
	
	
    
	return 0;
}
