#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l=0; int n=0;
	int a[5555];
	int i=1;
	scanf("%d%d",&l,&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	int minn=0; int maxx=0;
    for(i=1;i<=n;i++)
    {
    	int t1=a[i]; int t2=l+1-a[i];
        maxx=max(maxx,max(t1,t2));
        minn=max(minn,min(t1,t2));//min是选取每种的最短路径 
	}
	
	cout<<minn<<" "<<maxx;
	return 0;
	
}
