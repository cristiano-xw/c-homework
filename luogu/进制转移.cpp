#include<bits/stdc++.h>
using namespace std;
void zhuan(int n, int r);
int main()
{
	int n=0; int r=0;
	cin>>n>>r;
	cout<<n;
	cout<<"=";
	zhuan(n,r);//ת��
	cout<<"(base"<<r<<")";
	return 0; 
}

void zhuan(int n,int r)
{  
    
	int m=0;//��ʾ���� ȡ��Ȼ�����������
	m=n%r;
	if(n==0)
	return ; 
	
	if(m<0)
	m-=r,n+=r;//�������С��0��ת��Ϊ���� 
	
	if(m>=10)
	{
		m=m+'A'-10;  
	}
	if(m<10)
	{
		m=m+'0';
	}
	
	zhuan(n/r,r);
	printf("%c",m);
}
