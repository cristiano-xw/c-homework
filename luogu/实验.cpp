#include<stdio.h>
int main(void)
{   
    char a[10][10];
    int i=0;int j=0;
    for(i=0;i<2;i++)
    {
       for(j=0;j<2;j++)
	   {
	   	scanf("%c",&a[i][j]);
		} 
	}
	
	printf("%s",a[1]);
	return 0;
}
