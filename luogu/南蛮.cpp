#include<iostream>
#include<cstring>
using namespace std;
int n;
char a[3000][3000];//����� 
int h=2,w=4;//h�Ǹ�,w�ǿ�
int main()
{  
	cin>>n;
	memset(a,' ',sizeof(a));//�𱻿���!!! 
	a[1][1]=a[1][4]=' ';
	a[1][2]=a[2][1]='/';
	a[1][3]=a[2][4]='\\';//���ҵĻ���������ĺ���
	a[2][2]=a[2][3]='_';
	
	for(int i=1;i<n;i++)
	{
    	//���º�����
		for(int j=1;j<=h;j++)
		{
			for(int k=1;k<=w;k++)
			{
				a[j+h][k]=a[j+h][k+w]=a[j][k];
				a[j][k]=' ';//����������
			}
		}
        //����
		for(int j=1;j<=h;j++)
		{
			for(int k=1;k<=w;k++)
			{
				a[j][k+w/2]=a[j+h][k];
			}
		}
		w*=2,h*=2;
        //ˢ�����һ��
	}
	
	
	for(int i=1;i<=h;i++)
	{
		for(int j=1;j<=w;j++)
		{ 
			cout<<a[i][j];
		}
		cout<<endl;
	}
	return 0;
}
