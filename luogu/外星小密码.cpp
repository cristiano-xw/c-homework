#include<bits/stdc++.h>
using namespace std;

string digui()
{
	string s="";//������̬ 
	string d="";//����̬
	int k=0;//��ȡ�ظ����� 
	char str;//ÿ���ַ������ж� 
	
	while(cin>>str)//��ȡ
	{
		if(str=='[') //��ͷ 
		{               
			cin>>k;
			d=digui();
			
			while(k--)
			{
				s+=d;  //���ַ������Ƶ�ĩβ 
			}
		}
		
		if(str==']')
		{
			return s;  //������һ�� �ص���һ��s��ֵ 
		} 
		
		if(str!='[')  
		{
			s+=str;   //s��ÿһ�ζ��ᱻ ���³�ʼ�� Ȼ��d��ֵ�ı� 
		}
		
	} 
}

int main(void)
{
	cout<<digui();
	return 0;
}
