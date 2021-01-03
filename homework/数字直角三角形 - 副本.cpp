#include<stdio.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=1;//ÓÃÀ´Êä³ö
	int e=0,r=0;
	for(e=0;e<n;e++)
	{
		for(r=e;r<n;r++)
		{
			if(i<10)
			{
				printf("0");
				printf("%d",i);
				i=i+1;
				continue;
			}
			if(i>=10)
			{
				printf("%d",i);
				i=i+1;
				continue;
			}
			 
		}
		printf("\n");
	 } 
}
