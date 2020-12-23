#include<stdio.h>
int sushu(int x)
{
	int i=0;
	for(i=2;i<=x/3;i++)
	{
		if(x%i==0||x%2==0)
		{
			return 0;
		}
	}
	return 1;
	   
} 
int main(void)
{
	int m=0;
	scanf("%d",&m);
	int i=0;int n=0;
	if(m>6&&m%2==0)
	{
	for(i=3;i<=m/2;i++)
	{
		n=m-i;
		if(sushu(i)&&sushu(n)!=0)
		{
			printf("%d %d\n",i,n);
		}
	}
   }
   else 
   {
   	printf("ERROR");
   }
	return 0;
}
