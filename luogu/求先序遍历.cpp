#include<bits/stdc++.h>
using namespace std;
string a,b;
void qianxu(int x,int y,int p,int q)//x,y�������� ,p,q������� 
{            
     if(x>y||p>q) return ;
     else
     {
     	int i=a.find(b[q]);//�ҵ��ڵ�
     	cout<<b[q];
		qianxu(x,i-1,p,p+i-x-1);//����������
		qianxu(i+1,y,p+i-x,q-1);//����������
		 
	 }
}
int main()
{
     cin>>a>>b;//�ȷֱ���������ͺ��� 
     int n=a.length()-1;//������� 
     qianxu(0,n,0,n); 
     return 0;
}
