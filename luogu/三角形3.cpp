#include<bits/stdc++.h>
using namespace std;
int f[1002];
int a[1002][1002];
int main()
{
	int n=0; 
	scanf("%d",&n);
	
	memset(f,0,sizeof(f));
	memset(a,0,sizeof(a));
	int i=0; int j=0;
	for(i=1;i<=n;i++)//从第二列开始遍历
	{
		for(j=1;j<=i;j++)
		{
			scanf("%d",&a[i][j]);
		}
	} 
	
	f[1]=a[1][1];
	for(i=2;i<=n;i++)
	{
		for(j=i;j>=1;j--)//二重逆序
		{
			f[j]=max(f[j],f[j-1])+a[i][j];
		} 
	}
	
	int ans=0;
	for(i=1;i<=n;i++)//每个出口都会有结果
	{
		ans=max(ans,f[i]);
	} 
	
	cout<<ans;
	return 0;
}
