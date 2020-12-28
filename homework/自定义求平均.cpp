#include<stdio.h>
float average (float a,float b,float c)
{
	return (a+b+c)/3;
}
int main(void)
{
	float x,y,z;
	printf("enter 3 numbers\n");
	scanf("%1f%1f%1f",&x,&y,&z);
    printf("average of %f and %f and %f:%f\n",x,y,z,average(x,y,z));
    return 0;
}
