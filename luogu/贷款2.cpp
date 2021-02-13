#include<bits/stdc++.h>
using namespace std;
int main()
{
	double a=0; double b=0; double c=0; double l=0; double r=1000; double mid=0;
	scanf("%lf%lf%lf",&a,&b,&c);
	int i=0;       
	                                      
	while(r-l>0.0001)
	{   
	    double s=a;
		double mid=(r+l)/2;
		for(i=1;i<=c;i++)
		{
			s=s-b+s*(mid/100);
		}
		if(s>0.0001)
		{
			r=mid;
		}
		else
		l=mid;
	}
	
	printf("%.1lf",l);
	return 0;
}
