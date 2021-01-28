#include<bits/stdc++.h>
using namespace std;

struct node  
{
	int m,v; 
	double p;  
}a[105];

bool cmp(node x,node y)  
{
	return x.p>x.p;  
}

int main()
{
	
	int n,t,ans;  
    double mon;  
    
	scanf("%d%d",&n,&t);
	
	for(int i=1;i<=n;i++) 
	{
		scanf("%d%d",&a[i].m,&a[i].v);
		a[i].p=(double)a[i].v/(double)a[i].m;  
	}
	
	sort(a+1,a+n+1,cmp);  
	
	for(int i=1;i<=n&&ans<=t;i++)   
	{
		if(ans+a[i].m>t)  
		{
			mon+=a[i].p*(double)(t-ans);
			break;
		}
		
		mon+=(double)a[i].v;  
		ans+=a[i].m;   
	    
	}
	
	printf("%.2lf",mon);  
	return 0;
}
