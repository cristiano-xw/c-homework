#include<stdio.h>
#include<iostream> 
using namespace std;
#include<string.h>
int main(void)      
{  
   char a[4][11111];
   gets(a[0]);
   gets(a[1]);
   gets(a[2]);
   gets(a[3]);
   
    
    int l[4]={0};
    l[0]=strlen(a[0]); l[1]=strlen(a[0]); l[2]=strlen(a[0]); l[3]=strlen(a[0]);
     
    int i=0;
    int j=0;
    int x[27]={0};//储存出现的次数 
    for(i=0;i<27;i++)
    {
    	x[i]=0;
	}
           
    /*for(i=0;i<4;i++)  
    { 
    	for(j=0;j<l[i];j++)
    	{
    	  x[(int)(a[i][j]-'A')]++;           
		}
	}*/
	for(i=0;i<4;i++)
	{
		for(j=0;j<l[i];j++)
		{
			switch(a[i][j]){
            case 'A':x[0]++;break;
            case 'B':x[1]++;break;
            case 'C':x[2]++;break;
            case 'D':x[3]++;break;
            case 'E':x[4]++;break;
            case 'F':x[5]++;break;
            case 'G':x[6]++;break;
            case 'H':x[7]++;break;
            case 'I':x[8]++;break;
            case 'J':x[9]++;break;
            case 'K':x[10]++;break;
            case 'L':x[11]++;break;
            case 'M':x[12]++;break;
            case 'N':x[13]++;break;
            case 'O':x[14]++;break;
            case 'P':x[15]++;break;
            case 'Q':x[16]++;break;
            case 'R':x[17]++;break;
            case 'S':x[18]++;break;
            case 'T':x[19]++;break;
            case 'U':x[20]++;break;
            case 'V':x[21]++;break;
            case 'W':x[22]++;break;
            case 'X':x[23]++;break;
            case 'Y':x[24]++;break;
            case 'Z':x[25]++;break;
        }
		}
	}
	 
	
	
	for(i=0;i<26;i++)
	{
		printf("%d ",x[i]);
	}
	printf("\n");
	
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
