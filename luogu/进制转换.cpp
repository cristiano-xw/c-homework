#include<bits/stdc++.h>
using namespace std;

void zhuan(int n,int r)
{
	if(n==0) return ;
	int m=n%r;//mΪ���� 

	if(m<0) m-=r,n+=r;//�������С��0��ת��Ϊ����
	
	//������ת��Ϊascll�뷽�������ʡ����һ������ 
	if(m>=10) m='A'+m-10;
	else m+='0';
	
	zhuan(n/r,r);
	
	printf("%c",m);//ע�⣬��Ϊ���Ϊ�����������Ҫд�ڵݹ���棬��Ȼ��˳����� 
	return ;
}

int main()
{
	int n,r;
	string ans="";
	cin>>n>>r;
	cout<<n<<"=";
	zhuan(n,r);
	printf("(base%d)",r);
	return 0;
}
