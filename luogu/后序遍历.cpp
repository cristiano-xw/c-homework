#include<bits/stdc++.h>  //����ͷ�ļ�
using namespace std;
string a,b;   //����ǰ���������ַ�������
void houxu(int x,int y,int p,int q) 
{  //x~yΪǰ����� p~qΪ�������
    if(x>y||p>q) return ;//�涨�߽�����
    else
	 {
        int i=b.find(a[x]);   //���ø����ҵ�����������������в���
    houxu(x+1,x+i-p,p,i-1);      //�ݹ�������
    houxu(x+i-p+1,y,i+1,q);    //�ݹ�������
    cout<<a[x];
     }   
}
int main()
{
    cin>>b>>a;//��һ������
    int l=a.length()-1;//��Ϊ��0��ʼ������Ҫ��һ
    houxu(0,l,0,l);//�ݹ�
    return 0;
}
