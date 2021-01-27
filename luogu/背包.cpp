#include<bits/stdc++.h>
using namespace std;
struct node
{ 
    double w; 
    double v; 
    double d; 
}a[111]; 

bool tmp(node x,node y)
{
    return x.d >y.d; 
}

int main()
{  
    int n;
    double mon,b;
    cin>>n>>b;
    
    for( int i=1;i<=n;i++)
	{
        cin>>a[i].w>>a[i].v;
        a[i].d=a[i].v/a[i].w; 
    }
    
    sort(a+1,a+n+1,tmp);  
    
    for( int i=1;i<=n;i++)
	{
        if(b>=a[i].w)
		{ 
            b-=a[i].w; 
            mon+=a[i].v; 
        }
        
		if(b<a[i].w) 
		{
            mon+=b*a[i].d; 
            break;
        }
    }
    
    printf("%.2lf",mon);   
	return 0; 
}
