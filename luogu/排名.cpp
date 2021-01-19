#include<stdio.h>
#include<iostream>
using namespace std;
struct student
{
	char name[22];
	int year ;
	int month; int day;
};

int main(void)
{    
    struct student student[111];
    int n=0;
    scanf("%d",&n);
    int i=0;
    for(i=1;i<=n;i++)
    {
    	scanf("%s%d%d%d",&student[i].name,&student[i].year,&student[i].month,&student[i].day);
	}
	
	int j=0;
	for(i=1;i<=n-1;i++)//年龄从大到小排列 
	{
		for(j=i+1;j<=n;j++)
		{
			if(student[i].year>student[j].year)
			{
				swap(student[i].name,student[j].name);
				swap(student[i].year,student[j].year);
				swap(student[i].month,student[j].month);
				swap(student[i].day,student[j].day);
			}
			
			if(student[i].year==student[j].year&&student[i].month>student[j].month)
			{
				swap(student[i].name,student[j].name);
				swap(student[i].year,student[j].year);
				swap(student[i].month,student[j].month);
				swap(student[i].day,student[j].day);
			}
			
			if(student[i].year==student[j].year&&student[i].month==student[j].month&&student[i].day>student[j].day)
			{
				swap(student[i].name,student[j].name);
				swap(student[i].year,student[j].year);
				swap(student[i].month,student[j].month);
				swap(student[i].day,student[j].day);
			}
	        
	        if(student[i].year==student[j].year&&student[i].month==student[j].month&&student[i].day==student[j].day)
			{
				swap(student[i].name,student[j].name);
				swap(student[i].year,student[j].year);
				swap(student[i].month,student[j].month);
				swap(student[i].day,student[j].day);
			}
		}
	}
	
	for(i=1;i<=n;i++)
	{
		printf("%s\n",student[i].name);
	}
	return 0;
}
