#include<bits/stdc++.h>//ʵ�ֽ���ת������
using namespace std;
int a[1111];//�洢λ��
int k=0; int n=0;

int main()
{
	cin>>k>>n;
	int len=0;
	long long ans=0;
	while(n>0)
	{
		a[++len]=n%2;	//ת������Ϊ������
		n=n/2; 
	}
	
	
	int m=0;
	
	for(int i=1;i<=len;i++) 
	{
		ans+=a[i]*pow(k,m);
		m++;
	}
	
	cout<<ans;
	return 0;
} 
