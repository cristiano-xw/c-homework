//实现数组列数增加1，并且将增加的列赋值为0 
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int i,j,r=3,c=5;
	int **q;
	q=(int**)malloc((r+1)*sizeof(int*));
	
	for(i=0;i<r;i++)
	{
		q[i]=(int*)malloc((c+1)*sizeof(int));
	}
	
	for(i=0;i<r;i++)
 
	scanf("%d",q[i]);
	
	for(i=0;i<r;i++)
	{
	    realloc(q[i],(c+2)*sizeof(int)); 
        q[i][c]=0;
	}
	
	//c=c+1;
	//printf("\n");
	
	for(i=0;i<r;i++)
	{
		
		  printf("%d\n",q[i]);
		 
	}
	
	return 0;
}
