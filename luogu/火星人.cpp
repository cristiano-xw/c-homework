#include<bits/stdc++.h>
using namespace std;
int main(void)
{  
    int a[11111];
	int m=0; int n=0;
	scanf("%d%d",&n,&m);
	
	int i=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	while(m--)
	{
		next_permutation(a,a+n);
	}
	
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
