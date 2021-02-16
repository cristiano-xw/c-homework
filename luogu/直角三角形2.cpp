#include<bits/stdc++.h>
using namespace std;
int a[1010][1010];
int fp[1010][1010];
int main()
{
	memset(a,0,sizeof(a));
	memset(fp,0,sizeof(fp));
	
	int n=0;
	scanf("%d",&n);
	int i=0; int j=0;
	
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=n;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			fp[i][j]=max(fp[i+1][j],fp[i+1][j+1])+a[i][j];
		}
	}
	
	cout<<fp[1][1];
	return 0;
} 
