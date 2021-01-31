#include<bits/stdc++.h>
using namespace std;
int n;
double mon;
int b;
struct node
{ 
    int w; 
    int v; 
}a[2000]; 

bool tmp(node x,node y)
{
    return x.v*y.w>y.v*x.w; 
}

int main()
{  
     
    cin>>n>>b;
    
    for( int i=1;i<=n;i++)
	{
        cin>>a[i].w>>a[i].v;
    }
    
    sort(a+1,a+n+1,tmp);  
    
    for( int i=1;i<=n;i++)
	{
        if(b>=a[i].w)
		{   
		    mon+=a[i].v;
            b-=a[i].w; 
        } 
        
		if(b<a[i].w) 
		{
            mon+=1.0*b*a[i].v/a[i].w; 
            break;
        }
    }
    
    printf("%.2lf",mon);   
	return 0; 
}
