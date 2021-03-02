#include<bits/stdc++.h>
#define MAXN 1005
using namespace std;
int n=0;
int v[MAXN][MAXN];
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			cin>>v[i][j];
		}
	}
	
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(v[i][j]>0)
			{
				cout<<v[i][j];
			}
		} 
	}
	
	return 0;
}
