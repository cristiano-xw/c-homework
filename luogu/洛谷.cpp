#include<bits/stdc++.h>
using namespace std;
int main() 
{   
    int a[511111] ;
    int n=0; int i=0; int j=0;
    scanf("%d%d",&n,&j);
    
    for(i=0;i<n;i++)
    {
    	scanf("%d",&a[i]); 
	}
	sort(a,a+n);
	printf("%d",a[j]);
	return 0;
} 
