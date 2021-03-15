#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
	int n=0; int m=0;
	cin>>n>>m;
	for(int k=1;k<=m;k++)
	{
		int x1=0; int y1=0; int x2=0; int y2=0;
		cin>>x1>>y1>>x2>>y2;
		for(int i=x1;i<=x2;i++)
		{
		    a[i][y1]++;
		    a[i][y2+1]--;
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			a[i][j]+=a[i][j-1];//每一行复原
			cout<<a[i][j]<<" "; 
		}
		cout<<endl;
	}
	return 0;
}
