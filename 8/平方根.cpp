#include<stdio.h>
#include<string.h>
#include<math.h>
int main(void)
{
	int n=0;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		double m=0;
		scanf("%lf",&m);
		if(m<0)
		{
			printf("ERROR\n");
		}
		if(m>=0)
		{
			double k=0;
			k=sqrt(m);
			printf("%.2lf\n",k);
		}
	}
	return 0;
}
