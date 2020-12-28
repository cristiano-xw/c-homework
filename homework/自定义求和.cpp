#include<stdio.h>
float sum(float a ,float b)
{
	return(a+b);
}
int main(void)
{
	printf("please input 2 numbers\n") ;
	float a,b;
	scanf("%f%f",&a,&b);
	printf("the sum of %f and %f:%f\n",a,b,sum(a,b));
}
