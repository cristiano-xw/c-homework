#include<bits/stdc++.h>
using namespace std;
struct point
{
	int a; int b; int g; int k;
	//表示左上角坐标 在行和列的长度 
}a[11111];
int mp[11111][11111]={};
int main()
{
	int n=0; 
	int i=0;
	cin>>n;
	
	int k=1;int j=0;
	for(k=1;k<=n;k++)
	{   
	    scanf("%d%d%d%d",&a[k].a,&a[k].b,&a[k].g,&a[k].k);
		for(i=a[k].a;i<=a[k].g+a[k].a;i++)
		{
			for(j=a[k].b;j<=a[k].k+a[k].b;j++)
			{
				mp[i][j]=k;
			}
		}
	}
	
	int p,q;
	cin>>p>>q;
	if(mp[p][q]>=1&&mp[p][q]<=n)
	{
		cout<<mp[p][q];
		return 0;
	}
	
	cout<<"-1";
	return 0;
}
