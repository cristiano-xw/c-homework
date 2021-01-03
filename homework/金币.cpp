#include<stdio.h>
int main(void)
{
	int d=0;
	scanf("%d",&d);
	int n=0;
	int sum=0;
	int i=0;
	int m=0;
	int l=1;
	while(i<d)
	{
		 while(m<l&&i<d)
		{
			sum = sum+l;
			i++; 
			m++; 
		}
		l++;
		//printf("%d",l);
		m=0;
	}
	printf("%d",sum);
}
