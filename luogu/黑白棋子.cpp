#include<bits/stdc++.h>
using namespace std;
int main(void)
{   
    char a[300];
    memset(a,0,sizeof(a));
    int n=0;
    scanf("%d",&n);
    int i=0;
    //一共进行2n-2次移动
	//最后6次移动 是基于n=4的6次特殊移动 
	
	for(i=1;i<=n;i++)
	{
		a[i]='o';
	} 
    
    for(i=n+1;i<=2*n;i++)
    {
    	a[i]='*';
	}
	
	for(i=2*n+1;i<=2*n+2;i++)
	{
		a[i]='-';
	}

/*	 
ooooooo*******--  2n-2
  oooooo--******o* 2n-3
oooooo******--o*  2n-4
  ooooo--*****o*o* 2n-5
ooooo*****--o*o*   2n-6 
  oooo--****o*o*o*  2n-7

oooo****--o*o*o*
ooo--***o*o*o*o*
ooo*o**--*o*o*o*
o--*o**oo*o*o*o*
o*o*o*--o*o*o*o*
--o*o*o*o*o*o*o*
*/
	
	int j=0;
	if(n==4)
	{
		printf("oooo****--\n");
		printf("ooo--***o*\n");
		printf("ooo*o**--*\n");
		printf("o--*o**oo*\n");
		printf("o*o*o*--o*\n");
		printf("--o*o*o*o*\n");
		return 0;
	}
	
	else 
	{  
	for(j=2*n-2;j>6;j--) 
	{
		if(j%2==0)//双行
		{
		for(i=1;i<=(j+2)/2;i++) 
		printf("o");
		for(i=(j+2)/2+1;i<=j+2;i++) 
		printf("*");
		printf("--");
		for(i=j+5;i<=2*n+2;) 
		{
			printf("o*");
			i=i+2;
		}
		printf("\n");
		} 
		
		if(j%2==1)//单行
		{
		  for(i=1;i<=(j+1)/2;i++)
		  printf("o");	
		  printf("--");
		  for(i=(j+1)/2+3;i<=j+3;i++) 
		  printf("*"); 
		  for(i=j+4;i<=2*n+2;)
		  {
		  	printf("o*");
		  	i=i+2;
		  }
		  printf("\n");
		} 
		
	} 
	
	for(j=6;j>=1;j--)
	{
	
	if(j==6)
	{
	  printf("oooo****--");
	  for(i=11;i<=2*n+2;)
	  {
	  	printf("o*");
	  	i=i+2;
	  }
	  printf("\n");
	}
	
	if(j==5)
	{
	  printf("ooo--***o*"); 
	  for(i=11;i<=2*n+2;)
	  {
	  	printf("o*");
	  	i=i+2;
	  }
	  printf("\n");
	}
	
	if(j==4)
	{
	  printf("ooo*o**--*");
	  for(i=11;i<=2*n+2;)
	  {
	  	printf("o*");
	   
	  	i=i+2;
	  }
	  printf("\n");
	}
	
	if(j==3)
	{
	  printf("o--*o**oo*");
	  for(i=11;i<=2*n+2;)
	  {
	  	printf("o*");
	  	 
	  	i=i+2;
	  }
	  printf("\n");
	}
	
	if(j==2)
	{
	  printf("o*o*o*--o*");
	  for(i=11;i<=2*n+2;)
	  {
	  	printf("o*");
	   
	  	i=i+2;
	  }
	  printf("\n");
	}
	
	if(j==1)
	{
	  printf("--o*o*o*o*");
	  for(i=11;i<=2*n+2;)
	  {
	  	printf("o*");
	  	 
	  	i=i+2;
	  }
	  printf("\n");
	}
}
   }
    
    
	return 0;
} 
