#include<stdio.h>
#include<math.h>
int main(void)
{
	double x1,y1,x2,y2,x3,y3;
	scanf("%lf%lf",&x1,&y1);
	scanf("%lf%lf",&x2,&y2);
	scanf("%lf%lf",&x3,&y3);
	double sum=0;
	sum=sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2))+sqrt((x1-x3)*(x1-x3)+(y1-y3)*(y1-y3))+sqrt((x3-x2)*(x3-x2)+(y3-y2)*(y3-y2));
	printf("%.2lf",sum);
	return 0;
}
