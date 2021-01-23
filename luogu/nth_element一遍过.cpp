#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int x[5000005]; 
	int k=0;
	int n=0; int i=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++) 
		{
	     scanf("%d",&x[i]);
	    }
	nth_element(x,x+k,x+n);//¼ò¶ÌÓÖ¸ßÐ§
	printf("%d",x[k]);
}
