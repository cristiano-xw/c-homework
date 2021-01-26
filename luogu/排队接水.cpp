#include<bits/stdc++.h>
using namespace std;

struct node
{
	int t;//编号
	int d;//接水地时间 
}s[1111];

bool cmp(node x,node y)
{
	return x.d<y.d; 
}


int main(void)
{  
    int n=0;
    scanf("%d",&n);
    
    int i=0;
    for(i=1;i<=n;i++)
    {
    	scanf("%d",&s[i].d); 
    	s[i].t=i;
	}
	
	sort(s+1,s+n+1,cmp); 
	
	for(i=1;i<=n;i++)
	{
		printf("%d ",s[i].t);
	}
	printf("\n");
	
	int a[1111];
	memset(a,0,sizeof(a));
	
	for(i=1;i<=n;i++)
	{
		int j=1;
		if(i>=2)
		{
	    for(j=1;j<=i-1;j++)
	    {
	    	a[i]+=s[j].d;
		}
	    }
	}
	
	 
	
	double total=0;
	for(i=1;i<=n;i++)
	{
		total+=(double)a[i];
	}
	
	
	double ave=0;
	ave=total/n;
	
	printf("%.2lf",ave);
    
	return 0;
}
