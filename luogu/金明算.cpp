#include<bits/stdc++.h>
using namespace std;
long long w[111]; long long v[111];	//�ֱ��ʾ��Ǯ����Ҫ��
long long f[333333]; 
bool cmp(int x,int y)
	{
		return x>y;//�ü�ֵ���������ǰ�� 
	}
	
int main()
{
	int n=0; int m=0;
	cin>>n>>m;
	long long minn=1111111111; long long maxx=0;
	for(int i=1;i<=n;i++)
	{
		cin>>w[i]>>v[i]; 
		minn=min(w[i],minn);
		maxx=max(w[i],maxx);
	}
	
	if(minn<=300)
	{
	for(int i=1;i<=n;i++)
	{
		for(int j=m;j>=w[i];j--)
		{
			f[j]=max(f[j],f[j-w[i]]+v[i]);
		}	
	}
	cout<<f[m];
	return 0;
	}
	
	else
	{
		long long ans=0;
		sort(v+1,v+n+1,cmp);
		for(int i=1;i<=m/maxx;i++)
		{
			ans+=v[i];
		}
		cout<<ans;
		return 0;
	}
}
