#include<bits/stdc++.h>
using namespace std;
int f[33][33]={1};//��Ԫ�س�ʼ��Ϊ1 
int main()
{   
	int n=0; int m=0;
	cin>>n>>m;//n���˴���m��
	int i=0; int j=0;
	for(i=1;i<=m;i++)
	{
		for(j=0;j<n;j++)
		{
			f[i][j]=f[i-1][(j-1+n)%n]+f[i-1][(j+1)%n];
		}
	} 
	cout<<f[m][0];
	return 0;
}
