#include<cstdio>
#include<iostream>
#include<cstdlib>
using namespace std;
int a[10001]={1},n;
int search(int,int);
int print(int);
int main()
{
	cin>>n;
	search(n,1);//��Ҫ��ֵ���n���ݸ�s
	return 0;
}

int search(int s,int t)
{
	int i;
	for(i=a[t-1];i<=s;i++)
	{ 
			a[t]=i;//���浱ǰ��ֵ���i
			s-=i;//s��ȥ��i��s��ֵ���������
			if(s==0)print(t);//��s=0ʱ����ֽ���������
				else search(s,t+1);//��s>0ʱ�������ݹ�
			s+=i; 
	 } 
}

int print(int t)
{
	for(int i=1;i<=t-1;i++)//���һ�ֲ�ַ���
		cout<<a[i]<<"+";
	cout<<a[t]<<endl;
}
