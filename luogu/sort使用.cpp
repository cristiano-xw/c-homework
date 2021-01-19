#include<iostream>
#include<algorithm>
#include<cmath>
#include<cstdio>
using namespace std;
struct student{
	double x,y,z;
}mountain[50001];
double ans;
int n;

bool cmp(student x,student y)   
{
	return x.z<y.z;
}

int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>mountain[i].x>>mountain[i].y>>mountain[i].z;
	}
	sort(mountain+1,mountain+n+1,cmp);
	for(int i=1;i<=n-1;i++)
	{
		ans+=sqrt(((mountain[i].x-mountain[i+1].x)*(mountain[i].x-mountain[i+1].x))+((mountain[i].y-mountain[i+1].y)*(mountain[i].y-mountain[i+1].y))+((mountain[i].z-mountain[i+1].z)*(mountain[i].z-mountain[i+1].z)));
	}
	printf("%.3f",ans);
}
