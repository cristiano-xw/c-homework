#include<bits/stdc++.h>
using namespace std;
struct node
{ 
	int w[1111];//����
	int v[1111];//��ֵ 
	int top;//��һ���ж��ٸ��� 
}a[111];

int main() 
{   
    int dp[1111]={};
	int m=0; int n=0;
	cin>>m>>n;
	int i=0; int j=0; int k=0;
	
	for(i=0;i<111;i++)
	{
		a[i].top=0;
	}
	
	int g=0;
	for(i=1;i<=n;i++)
	{
		int x=0; int y=0;  int z=0;
		cin>>x>>y>>z;
		g=max(g,z);
		a[z].top++;
		a[z].v[a[z].top]=y;
		a[z].w[a[z].top]=x;
	}
	 
	
	for(i=1;i<=g;i++)//�ڼ����� 
	{
		for(j=m;j>=0;j--)//0 1���� 
		{
			for(k=1;k<=a[i].top;k++)//�Ե�i���������������б��� 
			{
				if(j-a[i].w[k]>=0)
				{
					dp[j]=max(dp[j],dp[j-a[i].w[k]]+a[i].v[k]);
				}
			}
		}
	}
	
	cout<<dp[m];
	return 0;
}
