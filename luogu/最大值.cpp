#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n=0; int maxx=0; int sum=0;
	cin>>n>>maxx;
	sum=maxx;//��Ĭ��ֻȡ��һ����Ϊ���
	for(int i=2;i<=n;i++)
	{
		int x=0;
		cin>>x;
		if(sum<0) sum=0;
		sum+=x;
		if(sum>maxx)
		maxx=sum;
	} 
	
	cout<<maxx;
	return 0;
}
