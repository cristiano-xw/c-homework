#include<bits/stdc++.h>
using namespace std;
long long f[222][222];//且每份不能为空
int main()
{
	memset(f,0,sizeof(f));
	int n=0; int k=0;
	cin>>n>>k;
	int i=0; int j=0;//i个苹果j个篮子 
	
	for(i=0;i<=n;i++)
	{
		for(j=1;j<=k;j++)
		{
			if(j==i)
			{
				f[i][j]=1;
			}
			if(i<j)
			{
				f[i][j]=0;
			}
			if(j<i)
			{
				f[i][j]=f[i-1][j-1]+f[i-j][j];
			}
		}
	}
	
	cout<<f[n][k];
	return 0;
}

