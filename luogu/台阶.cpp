#include<bits/stdc++.h>
using namespace std;
int a[100005]={1};//初始化第0个为1 
int main()
{
	int i=0; int j=0;
	int n=0; int k=0;
	cin>>n>>k;
	
	for(i=1;i<k;i++)
	{
		for(j=0;j<i;j++)
		{
			a[i]+=a[j];
			a[i]=a[i]%100003; 
		}
	}
	
	for(i=k;i<=n;i++)
	{
		for(j=i-k;j<i;j++)
		{
			a[i]+=a[j];
			a[i]=a[i]%100003;
		}
	}
	
	cout<<a[n];
	return 0;
}

