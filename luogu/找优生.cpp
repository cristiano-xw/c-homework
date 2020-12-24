#include<stdio.h>
struct student
{
	int a;
	double b;
	double c;
	double d;
	double e;
};

int main(void)
{   
    int n=0;
	scanf("%d",&n);
	int i=0;
	struct student student[n];
	for(i=0;i<n;i++)
	{
		scanf("%d%lf%lf",&student[i].a,&student[i].b,&student[i].c);
		student[i].d=(0.7*student[i].b)+(0.3*student[i].c);
		student[i].e=student[i].b+student[i].c;
	}
	
	for(i=0;i<n;i++)
	{
		if(student[i].d>=80&&student[i].e>140)
		{
			printf("Excellent\n"); 
		}
		
		else
		{
			printf("Not Excellent\n");
		}
	}
	
}
