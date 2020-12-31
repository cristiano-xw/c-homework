#include<stdio.h>
struct student
{
	char name[10];
	int yuwen;
	int shuxue;
	int yinyu;
};

int main(void)
{
	int n;
	scanf("%d",&n);
	
	struct student student[n];
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%s%d%d%d",&student[i].name,&student[i].yuwen,&student[i].shuxue,&student[i].yinyu);
	}
	
	int a[2000]={0};
	for(i=0;i<n;i++)
	{
		a[i]=student[i].yuwen+student[i].shuxue+student[i].yinyu;
	}             
	
	int max=0;
	for(i=0;i<n;i++)
	{
		if(a[i]>a[max])
		{
			max=i;
		}
	}
	
	printf("%s %d %d %d",student[max].name,student[max].yuwen,student[max].shuxue,student[max].yinyu);
	
	
	
	
}
