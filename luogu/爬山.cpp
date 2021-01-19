#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

struct student
{
	double l;
	double w;
	double h;
	
	bool operator<(const student &other)const
	{ 
		return h<other.h;
	}
};

int main(void)
{   
    int n=0;
    scanf("%d",&n);
    struct student student[55555];
    int i=0;
    for(i=1;i<=n;i++)
    {
    	scanf("%lf%lf%lf",&student[i].l,&student[i].w,&student[i].h);
	}
	
	
	//for(i=1;i<=n;i++)
	//{
	//	cout<<student[i].l<<" "<<student[i].w<<" "<<student[i].h;
	//}
	
	sort(student,student+n); 
	
    double s=0; double d=0;
    {
    	for(i=1;i<=n-1;i++)
    	{
    		s=sqrt((student[i].l-student[i+1].l)*(student[i].l-student[i+1].l)+(student[i].w-student[i+1].w)*(student[i].w-student[i+1].w)+(student[i].h-student[i+1].h)*(student[i].h-student[i+1].h))
	        ;d+=s;	
		}
	}
	
    printf("%.3lf",d);
	
	return 0;
	
}

