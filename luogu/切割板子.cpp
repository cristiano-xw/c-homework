#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int n=0;int s[22222];
	
void solve()
{
	long long ans=0;
	//int left=0; int right=0;
	while(n>1)
	{
	sort(s+1,s+n+1);//�ҵ���̵���������
	
	int t=s[1]+s[2];//����̵İ��Ӽ��ϣ��ص���һ�� 
	ans+=t;
	s[1]=t;
	n--;//���ӵ��������� 
	}
	cout<<ans;
	
}
	
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>s[i];
	}
	
	solve();
	return 0;
}
