#include<cstdio>
#include<cstring>
#include<iostream>
int main()
{
	long long n,m,i,j,z=0,ju=0;
	scanf("%lld%lld",&n,&m);
	
	for(i=1;i<=n;i++)
	{
	  for(j=1;j<=m;j++)
	  {
	     int p=i;int q=j;
	     if(p<q)
	     {
	     	int t=0;
	     	t=q;
	     	q=p;
	     	p=t;
		 }
		 
		 z+=q;
		 ju+=i*j;
	  }
	}
	
	printf("%lld %lld",z,ju-z);
	return 0;
}
