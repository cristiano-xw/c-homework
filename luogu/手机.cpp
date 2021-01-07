#include<stdio.h>
#include<string.h>
int main(void)
{
	char a[500]="0";
	int i=-1;
    do{
		i++;
		a[i]=getchar();
	  }while(a[i]!='\n'); //实现文本的存入 从第0开始 
	  
	//for(i=0;i<500;i++)
	//{
	//printf("%c",a[i]);	
	 //} 
	 int sum=0;
	int r=0;
	
	while(r<i)
	{
		
	if(a[r]==' ')
	{
		sum=sum+1;
		r++;
		continue;
	}
	
	if(a[r]=='a'||a[r]=='d'||a[r]=='g'||a[r]=='j'||a[r]=='m'||a[r]=='p'||a[r]=='t'||a[r]=='w')
	{
	  sum = sum+1;	
	   
	  r++;
	  continue;
	}
	
	if(a[r]=='b'||a[r]=='e'||a[r]=='h'||a[r]=='k'||a[r]=='n'||a[r]=='q'||a[r]=='u'||a[r]=='x')
	{
	  //printf("oj");
	 sum=sum+2;
	  r++;
	  continue;
	}
	
	if(a[r]=='c'||a[r]=='f'||a[r]=='i'||a[r]=='l'||a[r]=='o'||a[r]=='r'||a[r]=='v'||a[r]=='y')
	{
	  sum = sum+3;	
	  r++;
	  continue;
	}
	
	if( a[r]=='s'||a[r]=='z')
	{
	  sum = sum+4;	
	  r++;
	  continue;
	}
	
    }      
    
    printf("%d",sum);
	
 } 
