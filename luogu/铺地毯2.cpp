#include<bits/stdc++.h>
using namespace std;
struct point
{
	int a; int b; int g; int k;
	//��ʾ���Ͻ����� ���к��еĳ��� 
}a[11111];

int main()
{
	int n=0;
	cin>>n;
	int i=0; int j=0; int p=0; int q=0;
	int ans=-1;//��ʼ��Ϊ-1 
	for(i=1;i<=n;i++)
	{
		cin>>a[i].a>>a[i].b>>a[i].g>>a[i].k;
	}
	
	cin>>p>>q;
	for(i=1;i<=n;i++)
	{
		if(a[i].a<=p&&a[i].a+a[i].g>=p&&a[i].b<=q&&a[i].b+a[i].k>=q)
		{
			ans=i;
		}
	}
	cout<<ans;
	return 0;
}
