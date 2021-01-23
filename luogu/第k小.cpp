#include<bits/stdc++.h>
using namespace std;
int main()
{  
    int x[5000005],k;
	int n;
	scanf("%d%d",&n,&k);
	int i=0;
	for(i=0;i<n;i++)
		scanf("%d",&x[i]);
	sort(x,x+n);//¿ìÅÅ
	printf("%d",x[k]);
	return 0;
}
