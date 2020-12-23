#include<stdio.h>
#include<math.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	int i=0;
	for(i=0;i<n;i++)
	{
		double a[4];
		scanf("%lf%lf%lf",&a[0],&a[1],&a[2]);
		int m=0;
		int max=0;
		for(m=0;m<3;m++)
		{
		if(a[m]>a[max])
		{
			max=m;
		}
		}
		
		if(max==0)
		{
			if(a[0]*a[0]==a[1]*a[1]+a[2]*a[2]&&a[0]<a[1]+a[2])
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
		if(max==1)
		{
			if(a[1]*a[1]==a[0]*a[0]+a[2]*a[2]&&a[1]<a[0]+a[2])
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
		if(max==2)
		{
			if(a[2]*a[2]==a[1]*a[1]+a[0]*a[0]&&a[2]<a[1]+a[0])
			{
				printf("Yes\n");
			}
			else
			{
				printf("No\n");
			}
		}
	}
	return 0;
}
