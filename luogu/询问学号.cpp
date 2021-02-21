#include<bits/stdc++.h>
using namespace std;
int stu[2222222];
int main()
{   
	int n=0; int m=0; int tmp=0;
	int v=0;int i=0;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		cin>>stu[i];
	} 
	for(i=1;i<=m;i++)
	{
		cin>>v;
		cout<<stu[v]<<endl;
	}
	return 0;
}


