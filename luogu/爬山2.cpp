#include<stdio.h>
#include<iostream>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

struct studentl
{
	double l;
	double w;
	double h;
}student[5555];
int x;int y;

bool cmp(student  x,student  y)
{
	return x.h<y.h;
}

int main(void)
{   
    int n=0;
    scanf("%d",&n);
    int i=0;
    for(i=1;i<=n;i++)
    {
    	scanf("%lf%lf%lf",&student[i].l,&student[i].w,&student[i].h);
	}
	
	
	sort(student+1,student+n+1,cmp); //左闭右开区间 左边即为第一个数，右边为最后一个数加一 
	
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

